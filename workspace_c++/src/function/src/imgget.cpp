#include "rclcpp/rclcpp.hpp"
#include <sensor_msgs/msg/image.hpp>
#include <std_msgs/msg/header.hpp>
#include <chrono>
#include <opencv2/opencv.hpp>
#include <cv_bridge/cv_bridge.h>
#include <filesystem>

using namespace std::chrono_literals;

class myImggetter : public rclcpp::Node
{
    public:
    myImggetter() : Node("imgget")
    {
        path = "/home/zhoushan/code/serve_message/sample.png";
        img = cv::imread(path);
        publisher_ = this->create_publisher<sensor_msgs::msg::Image>("img",10);
        timer_ = this->create_wall_timer(500ms, std::bind(&myImggetter::send_img, this));
    }
    private:
    std::string path;
    cv::Mat img;
    void send_img (void)
    {
        auto message = cv_bridge::CvImage(header_, "bgr8", img).toImageMsg();
        header_.stamp = this->now();
        header_.frame_id = "dirimg";
        publisher_->publish(*message);
    }
    rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    std_msgs::msg::Header header_;
};

int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<myImggetter>());
    rclcpp::shutdown();
    return 0;
}