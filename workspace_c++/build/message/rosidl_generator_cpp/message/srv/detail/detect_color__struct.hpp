// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from message:srv/DetectColor.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE__SRV__DETAIL__DETECT_COLOR__STRUCT_HPP_
#define MESSAGE__SRV__DETAIL__DETECT_COLOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__message__srv__DetectColor_Request __attribute__((deprecated))
#else
# define DEPRECATED__message__srv__DetectColor_Request __declspec(deprecated)
#endif

namespace message
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DetectColor_Request_
{
  using Type = DetectColor_Request_<ContainerAllocator>;

  explicit DetectColor_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color = "";
    }
  }

  explicit DetectColor_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : color(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color = "";
    }
  }

  // field types and members
  using _color_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _color_type color;

  // setters for named parameter idiom
  Type & set__color(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->color = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    message::srv::DetectColor_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const message::srv::DetectColor_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<message::srv::DetectColor_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<message::srv::DetectColor_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      message::srv::DetectColor_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<message::srv::DetectColor_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      message::srv::DetectColor_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<message::srv::DetectColor_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<message::srv::DetectColor_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<message::srv::DetectColor_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__message__srv__DetectColor_Request
    std::shared_ptr<message::srv::DetectColor_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__message__srv__DetectColor_Request
    std::shared_ptr<message::srv::DetectColor_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectColor_Request_ & other) const
  {
    if (this->color != other.color) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectColor_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectColor_Request_

// alias to use template instance with default allocator
using DetectColor_Request =
  message::srv::DetectColor_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace message


// Include directives for member types
// Member 'type'
#include "message/msg/detail/box_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__message__srv__DetectColor_Response __attribute__((deprecated))
#else
# define DEPRECATED__message__srv__DetectColor_Response __declspec(deprecated)
#endif

namespace message
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DetectColor_Response_
{
  using Type = DetectColor_Response_<ContainerAllocator>;

  explicit DetectColor_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit DetectColor_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _type_type =
    std::vector<message::msg::BoxType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<message::msg::BoxType_<ContainerAllocator>>>;
  _type_type type;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__type(
    const std::vector<message::msg::BoxType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<message::msg::BoxType_<ContainerAllocator>>> & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    message::srv::DetectColor_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const message::srv::DetectColor_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<message::srv::DetectColor_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<message::srv::DetectColor_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      message::srv::DetectColor_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<message::srv::DetectColor_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      message::srv::DetectColor_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<message::srv::DetectColor_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<message::srv::DetectColor_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<message::srv::DetectColor_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__message__srv__DetectColor_Response
    std::shared_ptr<message::srv::DetectColor_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__message__srv__DetectColor_Response
    std::shared_ptr<message::srv::DetectColor_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectColor_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectColor_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectColor_Response_

// alias to use template instance with default allocator
using DetectColor_Response =
  message::srv::DetectColor_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace message

namespace message
{

namespace srv
{

struct DetectColor
{
  using Request = message::srv::DetectColor_Request;
  using Response = message::srv::DetectColor_Response;
};

}  // namespace srv

}  // namespace message

#endif  // MESSAGE__SRV__DETAIL__DETECT_COLOR__STRUCT_HPP_
