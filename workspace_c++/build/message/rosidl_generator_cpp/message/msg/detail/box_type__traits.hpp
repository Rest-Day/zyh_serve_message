// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from message:msg/BoxType.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE__MSG__DETAIL__BOX_TYPE__TRAITS_HPP_
#define MESSAGE__MSG__DETAIL__BOX_TYPE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "message/msg/detail/box_type__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace message
{

namespace msg
{

inline void to_flow_style_yaml(
  const BoxType & msg,
  std::ostream & out)
{
  out << "{";
  // member: color
  {
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: w
  {
    out << "w: ";
    rosidl_generator_traits::value_to_yaml(msg.w, out);
    out << ", ";
  }

  // member: h
  {
    out << "h: ";
    rosidl_generator_traits::value_to_yaml(msg.h, out);
    out << ", ";
  }

  // member: d
  {
    out << "d: ";
    rosidl_generator_traits::value_to_yaml(msg.d, out);
    out << ", ";
  }

  // member: area
  {
    out << "area: ";
    rosidl_generator_traits::value_to_yaml(msg.area, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BoxType & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: w
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "w: ";
    rosidl_generator_traits::value_to_yaml(msg.w, out);
    out << "\n";
  }

  // member: h
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "h: ";
    rosidl_generator_traits::value_to_yaml(msg.h, out);
    out << "\n";
  }

  // member: d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d: ";
    rosidl_generator_traits::value_to_yaml(msg.d, out);
    out << "\n";
  }

  // member: area
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area: ";
    rosidl_generator_traits::value_to_yaml(msg.area, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BoxType & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace message

namespace rosidl_generator_traits
{

[[deprecated("use message::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const message::msg::BoxType & msg,
  std::ostream & out, size_t indentation = 0)
{
  message::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use message::msg::to_yaml() instead")]]
inline std::string to_yaml(const message::msg::BoxType & msg)
{
  return message::msg::to_yaml(msg);
}

template<>
inline const char * data_type<message::msg::BoxType>()
{
  return "message::msg::BoxType";
}

template<>
inline const char * name<message::msg::BoxType>()
{
  return "message/msg/BoxType";
}

template<>
struct has_fixed_size<message::msg::BoxType>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<message::msg::BoxType>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<message::msg::BoxType>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MESSAGE__MSG__DETAIL__BOX_TYPE__TRAITS_HPP_
