#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include <sensor_msgs/msg/image.hpp>
#include <std_msgs/msg/header.hpp>
#include <chrono>
#include <opencv2/opencv.hpp>
#include <cv_bridge/cv_bridge.h>

using namespace std::chrono_literals;

class myImggetter : public rclcpp::Node
{
    public:
    myImggetter() : Node("imgget")
    {
        path = "./*.png";
        img = cv::imread(path);
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
    std_msgs::msg::Header header_;
};