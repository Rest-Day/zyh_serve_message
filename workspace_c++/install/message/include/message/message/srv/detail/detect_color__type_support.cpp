// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from message:srv/DetectColor.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "message/srv/detail/detect_color__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace message
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void DetectColor_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) message::srv::DetectColor_Request(_init);
}

void DetectColor_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<message::srv::DetectColor_Request *>(message_memory);
  typed_message->~DetectColor_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DetectColor_Request_message_member_array[1] = {
  {
    "color",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message::srv::DetectColor_Request, color),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DetectColor_Request_message_members = {
  "message::srv",  // message namespace
  "DetectColor_Request",  // message name
  1,  // number of fields
  sizeof(message::srv::DetectColor_Request),
  DetectColor_Request_message_member_array,  // message members
  DetectColor_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  DetectColor_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DetectColor_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DetectColor_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace message


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<message::srv::DetectColor_Request>()
{
  return &::message::srv::rosidl_typesupport_introspection_cpp::DetectColor_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, message, srv, DetectColor_Request)() {
  return &::message::srv::rosidl_typesupport_introspection_cpp::DetectColor_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "message/srv/detail/detect_color__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace message
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void DetectColor_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) message::srv::DetectColor_Response(_init);
}

void DetectColor_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<message::srv::DetectColor_Response *>(message_memory);
  typed_message->~DetectColor_Response();
}

size_t size_function__DetectColor_Response__type(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<message::msg::BoxType> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DetectColor_Response__type(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<message::msg::BoxType> *>(untyped_member);
  return &member[index];
}

void * get_function__DetectColor_Response__type(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<message::msg::BoxType> *>(untyped_member);
  return &member[index];
}

void fetch_function__DetectColor_Response__type(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const message::msg::BoxType *>(
    get_const_function__DetectColor_Response__type(untyped_member, index));
  auto & value = *reinterpret_cast<message::msg::BoxType *>(untyped_value);
  value = item;
}

void assign_function__DetectColor_Response__type(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<message::msg::BoxType *>(
    get_function__DetectColor_Response__type(untyped_member, index));
  const auto & value = *reinterpret_cast<const message::msg::BoxType *>(untyped_value);
  item = value;
}

void resize_function__DetectColor_Response__type(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<message::msg::BoxType> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DetectColor_Response_message_member_array[3] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message::srv::DetectColor_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message::srv::DetectColor_Response, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<message::msg::BoxType>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message::srv::DetectColor_Response, type),  // bytes offset in struct
    nullptr,  // default value
    size_function__DetectColor_Response__type,  // size() function pointer
    get_const_function__DetectColor_Response__type,  // get_const(index) function pointer
    get_function__DetectColor_Response__type,  // get(index) function pointer
    fetch_function__DetectColor_Response__type,  // fetch(index, &value) function pointer
    assign_function__DetectColor_Response__type,  // assign(index, value) function pointer
    resize_function__DetectColor_Response__type  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DetectColor_Response_message_members = {
  "message::srv",  // message namespace
  "DetectColor_Response",  // message name
  3,  // number of fields
  sizeof(message::srv::DetectColor_Response),
  DetectColor_Response_message_member_array,  // message members
  DetectColor_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  DetectColor_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DetectColor_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DetectColor_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace message


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<message::srv::DetectColor_Response>()
{
  return &::message::srv::rosidl_typesupport_introspection_cpp::DetectColor_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, message, srv, DetectColor_Response)() {
  return &::message::srv::rosidl_typesupport_introspection_cpp::DetectColor_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "message/srv/detail/detect_color__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace message
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers DetectColor_service_members = {
  "message::srv",  // service namespace
  "DetectColor",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<message::srv::DetectColor>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t DetectColor_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DetectColor_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace message


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<message::srv::DetectColor>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::message::srv::rosidl_typesupport_introspection_cpp::DetectColor_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::message::srv::DetectColor_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::message::srv::DetectColor_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, message, srv, DetectColor)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<message::srv::DetectColor>();
}

#ifdef __cplusplus
}
#endif
