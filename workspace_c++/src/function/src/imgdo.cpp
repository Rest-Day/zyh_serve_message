#include <rclcpp/rclcpp.hpp>
#include "message/srv/detect_color.hpp"
#include <opencv2/opencv.hpp>
#include <cv_bridge/cv_bridge.h>
#include <vector.h>

using std::placeholders::_1;
using std::placeholders::_2;

class img_do : public rclcpp::Node
{
    public:
    img_do() : Node("imgdo")
    {
        RCLCPP_INFO(this->get_logger(), "node creatde");
        img_ = this->create_subscription<sensor_msgs::msg::Image>("img", 10, );
        server_ = this->create_service<message::srv::DetectColor>("choise color", );
    }
    private:
    void do_do_img(const sensor_msgs::msg::Image msg)
    {
        try
        {
            cv_ptr = cv_bridge::toCvCopy(msg, "bgr8");
        }catch(const cv_bridge::Exception & e)
        {
            RCLCPP_ERROR(this->get_logger(), "cv_bridge erro: %s", e.what());
        }
        img = cv_ptr->image;
        todo = img.clone();
        cv::Mat m1, m2;

    void choise(const std::shared_ptr<message::srv::DetectColor::Request> req, 
    const std::shared_ptr<message::srv::DetectColor::Response> res)
    {
        color = req->color;
    }
    cv_bridge::CvImagePtr cv_ptr;
    cv::Mat img, todo, out;
    std::string color;
    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr img_;
    rclcpp::Service<message::srv::DetectColor>::SharedPtr server_;
};