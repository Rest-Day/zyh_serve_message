// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from message:srv/DetectColor.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE__SRV__DETAIL__DETECT_COLOR__BUILDER_HPP_
#define MESSAGE__SRV__DETAIL__DETECT_COLOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "message/srv/detail/detect_color__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace message
{

namespace srv
{

namespace builder
{

class Init_DetectColor_Request_color
{
public:
  Init_DetectColor_Request_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::message::srv::DetectColor_Request color(::message::srv::DetectColor_Request::_color_type arg)
  {
    msg_.color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message::srv::DetectColor_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::message::srv::DetectColor_Request>()
{
  return message::srv::builder::Init_DetectColor_Request_color();
}

}  // namespace message


namespace message
{

namespace srv
{

namespace builder
{

class Init_DetectColor_Response_type
{
public:
  explicit Init_DetectColor_Response_type(::message::srv::DetectColor_Response & msg)
  : msg_(msg)
  {}
  ::message::srv::DetectColor_Response type(::message::srv::DetectColor_Response::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message::srv::DetectColor_Response msg_;
};

class Init_DetectColor_Response_message
{
public:
  explicit Init_DetectColor_Response_message(::message::srv::DetectColor_Response & msg)
  : msg_(msg)
  {}
  Init_DetectColor_Response_type message(::message::srv::DetectColor_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_DetectColor_Response_type(msg_);
  }

private:
  ::message::srv::DetectColor_Response msg_;
};

class Init_DetectColor_Response_success
{
public:
  explicit Init_DetectColor_Response_success(::message::srv::DetectColor_Response & msg)
  : msg_(msg)
  {}
  Init_DetectColor_Response_message success(::message::srv::DetectColor_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_DetectColor_Response_message(msg_);
  }

private:
  ::message::srv::DetectColor_Response msg_;
};

class Init_DetectColor_Response_getcolor
{
public:
  Init_DetectColor_Response_getcolor()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectColor_Response_success getcolor(::message::srv::DetectColor_Response::_getcolor_type arg)
  {
    msg_.getcolor = std::move(arg);
    return Init_DetectColor_Response_success(msg_);
  }

private:
  ::message::srv::DetectColor_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::message::srv::DetectColor_Response>()
{
  return message::srv::builder::Init_DetectColor_Response_getcolor();
}

}  // namespace message

#endif  // MESSAGE__SRV__DETAIL__DETECT_COLOR__BUILDER_HPP_
