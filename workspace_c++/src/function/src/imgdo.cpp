#include <rclcpp/rclcpp.hpp>
#include "message/srv/detect_color.hpp"
#include "message/msg/box_type.hpp"
#include <opencv2/opencv.hpp>
#include <cv_bridge/cv_bridge.h>
#include <vector>

using std::placeholders::_1;
using std::placeholders::_2;

class img_do : public rclcpp::Node
{
    public:
    img_do() : Node("imgdo")
    {
        RCLCPP_INFO(this->get_logger(), "node creatde");
        image_pub_ = this->create_publisher<sensor_msgs::msg::Image>
        ("/detect/image_annotated", 10);
        img_ = this->create_subscription<sensor_msgs::msg::Image>("img", 10, std::bind(&img_do::do_do_img, this, _1));
        server_ = this->create_service<message::srv::DetectColor>("Smash_N_Grab", std::bind(&img_do::choise, this, _1, _2));
    }
    private:
    void do_do_img(const sensor_msgs::msg::Image::SharedPtr msg)
    {
        try
        {
            cv_ptr = cv_bridge::toCvCopy(msg, "bgr8");
        }catch(const cv_bridge::Exception & e)
        {
            RCLCPP_ERROR(this->get_logger(), "cv_bridge erro: %s", e.what());
            return;
        }
        img = cv_ptr->image.clone();
        std_msgs::msg::Header header;
        header.stamp = this->now();
        header.frame_id = "camera";
        if(is_run)
        {
            auto img_msg = cv_bridge::CvImage(header, "bgr8", vis).toImageMsg();
            image_pub_->publish(*img_msg);
        }
        else
        {
            auto img_msg = cv_bridge::CvImage(header, "bgr8", img).toImageMsg();
            image_pub_->publish(*img_msg);
        }
    }
    void choise(const std::shared_ptr<message::srv::DetectColor::Request> req, 
    const std::shared_ptr<message::srv::DetectColor::Response> res)
    {
        res->getcolor = req->color;
        colors = res->getcolor;
        if(img.empty())
        {
            res->message = "ERRO: no img!";
            res->success = false;
            return;
        }
        vis = img.clone();
        cv::Mat m1, m2, todo;
        cv::cvtColor(vis, todo, cv::COLOR_BGR2HSV);
        if(colors == "green")
        {
            cv::inRange(todo, cv::Scalar(35, 60, 40), cv::Scalar(85, 255, 255), m1);
            todo = m1.clone();
        }
        else if(colors == "blue")
        {
            cv::inRange(todo, cv::Scalar(94, 80, 40), cv::Scalar(126, 255, 255), m1);
            todo = m1.clone();
        }
        else if(colors == "red")
        {
            cv::inRange(todo, cv::Scalar(0, 70, 50), cv::Scalar(10, 255, 255), m1);
            cv::inRange(todo, cv::Scalar(170, 70, 50), cv::Scalar(180, 255, 255), m2);
            cv::bitwise_or(m1, m2, todo);
        }
        else
        {
            res->success = false;
            res->message = "ERRO: WRONG COLOR!";
            RCLCPP_INFO(get_logger(), "color: %s\n%s", res->getcolor.c_str(), res->message.c_str());
            return;
        }
        cv::morphologyEx(todo, todo, cv::MORPH_OPEN, kernel, cv::Point(-1, -1), 2);
        cv::morphologyEx(todo, todo, cv::MORPH_CLOSE, kernel, cv::Point(-1, -1), 2);
        cv::findContours(todo, contours, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);
        std::vector<message::msg::BoxType> boxes;
        for(const auto& i : contours)
        {
            double area = cv::contourArea(i);
            if(area <= 800.0)
            {
                continue;
            }
            cv::RotatedRect rect = cv::minAreaRect(i);
            cv::Point2f pts[4];
            rect.points(pts);
            for(int j = 0; j < 4; j ++)
            {
                cv::line(vis, pts[j], pts[(j + 1) % 4], cv::Scalar(0, 255, 255), 2);
            }
            message::msg::BoxType box;
            box.color = colors;
            box.x = rect.center.x;
            box.y = rect.center.y;  
            box.w = rect.size.width;
            box.h = rect.size.height;
            box.d = rect.angle;
            box.area = static_cast<float>(area);
            boxes.push_back(box);
        }

        std_msgs::msg::Header header;
        header.stamp    = this->now();
        header.frame_id = "camera";
        auto out = cv_bridge::CvImage(header, "bgr8", vis).toImageMsg();
        image_pub_->publish(*out);

        is_run = true;
        res->success = true;
        res->message = "INFO: Program run!" ;
        res->type = boxes;
        RCLCPP_INFO(get_logger(), "%s", res->message.c_str());
    }
    bool is_run = false;
    cv_bridge::CvImagePtr cv_ptr;
    cv::Mat img, vis;
    std::string colors;
    cv::Mat kernel = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(5, 5)); 
    std::vector<std::vector<cv::Point>> contours;
    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr img_;
    rclcpp::Service<message::srv::DetectColor>::SharedPtr server_;
    rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr image_pub_;
};


int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    auto server = std::make_shared<img_do>();
    rclcpp::spin(server);
    rclcpp::shutdown();
    return 0;
}