#include <rclcpp/rclcpp.hpp>
#include "message/srv/detect_color.hpp"
#include "message/msg/box_type.hpp"
#include <opencv2/opencv.hpp>
#include <cv_bridge/cv_bridge.h>
#include <vector>
#include <chrono>
#include <iostream>

class let_me_see_see : public rclcpp::Node
{
    public:
    let_me_see_see() : Node("what_color")
    {
        see_see = this->create_client<message::srv::DetectColor>("Smash_N_Grab");
    }
    bool count_sev()
    {
        while(!see_see->wait_for_service(std::chrono::seconds(1)))
        {
            if(!rclcpp::ok())
            {
                RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "OUT!");
                return false;
            }
            RCLCPP_INFO(this->get_logger(), "Please wait...");
        }
        return true;
    }
    rclcpp::Client<message::srv::DetectColor>::SharedFuture 
    send_see_see(std::string color)
    {
        auto geigei = std::make_shared<message::srv::DetectColor::Request>();
        geigei->color = color;
        return see_see->async_send_request(geigei);
    }

    private:
    rclcpp::Client<message::srv::DetectColor>::SharedPtr see_see;
};

int main(int argc, char ** argv)
{
    std::string color;
    rclcpp::init(argc, argv);
    auto gogogo = std::make_shared<let_me_see_see>();
    bool flag = gogogo->count_sev();
    if(!flag)
    {
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "ERRO: Disconnected!");
        return 0;
    }
    while(true)
    {
        if(!std::getline(std::cin, color))
        {
            break;
        }if(color.empty())
        {
            continue;
        }

        if(color == "exit")
        {
            break;
        }
        auto respone = gogogo->send_see_see(color);
        if(rclcpp::spin_until_future_complete(gogogo, respone) == rclcpp::FutureReturnCode::SUCCESS)
        {
            if(!respone.get()->success)
            {
                RCLCPP_WARN(gogogo->get_logger(), "WRONG: %s", respone.get()->message.c_str());
            }
            RCLCPP_INFO(gogogo->get_logger(), "INFO: OK!\nINFO: color: %s", respone.get()->getcolor.c_str());
            const auto& contours = respone.get()->type;
            for(const auto& i : contours)
            {
                RCLCPP_INFO(gogogo->get_logger(), "INFO: color: %s", i.color.c_str());
                float x, y, w, h, d;
                x = i.x;
                y = i.y;
                w = i.w;
                h = i.h;
                d = i.d;
                RCLCPP_INFO(gogogo->get_logger(), "INFO: x: %f y: %f w: %f h: %f, d: %f", x, y, w, h, d);
            }
        }
    }
    RCLCPP_INFO(gogogo->get_logger(), "BYE!");
    rclcpp::shutdown();
    return 0;
}