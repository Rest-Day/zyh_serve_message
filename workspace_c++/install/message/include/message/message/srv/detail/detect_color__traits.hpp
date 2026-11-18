// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from message:srv/DetectColor.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE__SRV__DETAIL__DETECT_COLOR__TRAITS_HPP_
#define MESSAGE__SRV__DETAIL__DETECT_COLOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "message/srv/detail/detect_color__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace message
{

namespace srv
{

inline void to_flow_style_yaml(
  const DetectColor_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: color
  {
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectColor_Request & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectColor_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace message

namespace rosidl_generator_traits
{

[[deprecated("use message::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const message::srv::DetectColor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  message::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use message::srv::to_yaml() instead")]]
inline std::string to_yaml(const message::srv::DetectColor_Request & msg)
{
  return message::srv::to_yaml(msg);
}

template<>
inline const char * data_type<message::srv::DetectColor_Request>()
{
  return "message::srv::DetectColor_Request";
}

template<>
inline const char * name<message::srv::DetectColor_Request>()
{
  return "message/srv/DetectColor_Request";
}

template<>
struct has_fixed_size<message::srv::DetectColor_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<message::srv::DetectColor_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<message::srv::DetectColor_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'type'
#include "message/msg/detail/box_type__traits.hpp"

namespace message
{

namespace srv
{

inline void to_flow_style_yaml(
  const DetectColor_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: type
  {
    if (msg.type.size() == 0) {
      out << "type: []";
    } else {
      out << "type: [";
      size_t pending_items = msg.type.size();
      for (auto item : msg.type) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectColor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.type.size() == 0) {
      out << "type: []\n";
    } else {
      out << "type:\n";
      for (auto item : msg.type) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectColor_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace message

namespace rosidl_generator_traits
{

[[deprecated("use message::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const message::srv::DetectColor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  message::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use message::srv::to_yaml() instead")]]
inline std::string to_yaml(const message::srv::DetectColor_Response & msg)
{
  return message::srv::to_yaml(msg);
}

template<>
inline const char * data_type<message::srv::DetectColor_Response>()
{
  return "message::srv::DetectColor_Response";
}

template<>
inline const char * name<message::srv::DetectColor_Response>()
{
  return "message/srv/DetectColor_Response";
}

template<>
struct has_fixed_size<message::srv::DetectColor_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<message::srv::DetectColor_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<message::srv::DetectColor_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<message::srv::DetectColor>()
{
  return "message::srv::DetectColor";
}

template<>
inline const char * name<message::srv::DetectColor>()
{
  return "message/srv/DetectColor";
}

template<>
struct has_fixed_size<message::srv::DetectColor>
  : std::integral_constant<
    bool,
    has_fixed_size<message::srv::DetectColor_Request>::value &&
    has_fixed_size<message::srv::DetectColor_Response>::value
  >
{
};

template<>
struct has_bounded_size<message::srv::DetectColor>
  : std::integral_constant<
    bool,
    has_bounded_size<message::srv::DetectColor_Request>::value &&
    has_bounded_size<message::srv::DetectColor_Response>::value
  >
{
};

template<>
struct is_service<message::srv::DetectColor>
  : std::true_type
{
};

template<>
struct is_service_request<message::srv::DetectColor_Request>
  : std::true_type
{
};

template<>
struct is_service_response<message::srv::DetectColor_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MESSAGE__SRV__DETAIL__DETECT_COLOR__TRAITS_HPP_
