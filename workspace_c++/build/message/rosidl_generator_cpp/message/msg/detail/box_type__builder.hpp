// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from message:msg/BoxType.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE__MSG__DETAIL__BOX_TYPE__BUILDER_HPP_
#define MESSAGE__MSG__DETAIL__BOX_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "message/msg/detail/box_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace message
{

namespace msg
{

namespace builder
{

class Init_BoxType_area
{
public:
  explicit Init_BoxType_area(::message::msg::BoxType & msg)
  : msg_(msg)
  {}
  ::message::msg::BoxType area(::message::msg::BoxType::_area_type arg)
  {
    msg_.area = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message::msg::BoxType msg_;
};

class Init_BoxType_d
{
public:
  explicit Init_BoxType_d(::message::msg::BoxType & msg)
  : msg_(msg)
  {}
  Init_BoxType_area d(::message::msg::BoxType::_d_type arg)
  {
    msg_.d = std::move(arg);
    return Init_BoxType_area(msg_);
  }

private:
  ::message::msg::BoxType msg_;
};

class Init_BoxType_h
{
public:
  explicit Init_BoxType_h(::message::msg::BoxType & msg)
  : msg_(msg)
  {}
  Init_BoxType_d h(::message::msg::BoxType::_h_type arg)
  {
    msg_.h = std::move(arg);
    return Init_BoxType_d(msg_);
  }

private:
  ::message::msg::BoxType msg_;
};

class Init_BoxType_w
{
public:
  explicit Init_BoxType_w(::message::msg::BoxType & msg)
  : msg_(msg)
  {}
  Init_BoxType_h w(::message::msg::BoxType::_w_type arg)
  {
    msg_.w = std::move(arg);
    return Init_BoxType_h(msg_);
  }

private:
  ::message::msg::BoxType msg_;
};

class Init_BoxType_y
{
public:
  explicit Init_BoxType_y(::message::msg::BoxType & msg)
  : msg_(msg)
  {}
  Init_BoxType_w y(::message::msg::BoxType::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_BoxType_w(msg_);
  }

private:
  ::message::msg::BoxType msg_;
};

class Init_BoxType_x
{
public:
  explicit Init_BoxType_x(::message::msg::BoxType & msg)
  : msg_(msg)
  {}
  Init_BoxType_y x(::message::msg::BoxType::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_BoxType_y(msg_);
  }

private:
  ::message::msg::BoxType msg_;
};

class Init_BoxType_color
{
public:
  Init_BoxType_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoxType_x color(::message::msg::BoxType::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_BoxType_x(msg_);
  }

private:
  ::message::msg::BoxType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::message::msg::BoxType>()
{
  return message::msg::builder::Init_BoxType_color();
}

}  // namespace message

#endif  // MESSAGE__MSG__DETAIL__BOX_TYPE__BUILDER_HPP_
