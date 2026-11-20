// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from message:srv/DetectColor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "message/srv/detail/detect_color__rosidl_typesupport_introspection_c.h"
#include "message/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "message/srv/detail/detect_color__functions.h"
#include "message/srv/detail/detect_color__struct.h"


// Include directives for member types
// Member `color`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void message__srv__DetectColor_Request__rosidl_typesupport_introspection_c__DetectColor_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  message__srv__DetectColor_Request__init(message_memory);
}

void message__srv__DetectColor_Request__rosidl_typesupport_introspection_c__DetectColor_Request_fini_function(void * message_memory)
{
  message__srv__DetectColor_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember message__srv__DetectColor_Request__rosidl_typesupport_introspection_c__DetectColor_Request_message_member_array[1] = {
  {
    "color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message__srv__DetectColor_Request, color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers message__srv__DetectColor_Request__rosidl_typesupport_introspection_c__DetectColor_Request_message_members = {
  "message__srv",  // message namespace
  "DetectColor_Request",  // message name
  1,  // number of fields
  sizeof(message__srv__DetectColor_Request),
  message__srv__DetectColor_Request__rosidl_typesupport_introspection_c__DetectColor_Request_message_member_array,  // message members
  message__srv__DetectColor_Request__rosidl_typesupport_introspection_c__DetectColor_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  message__srv__DetectColor_Request__rosidl_typesupport_introspection_c__DetectColor_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t message__srv__DetectColor_Request__rosidl_typesupport_introspection_c__DetectColor_Request_message_type_support_handle = {
  0,
  &message__srv__DetectColor_Request__rosidl_typesupport_introspection_c__DetectColor_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_message
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message, srv, DetectColor_Request)() {
  if (!message__srv__DetectColor_Request__rosidl_typesupport_introspection_c__DetectColor_Request_message_type_support_handle.typesupport_identifier) {
    message__srv__DetectColor_Request__rosidl_typesupport_introspection_c__DetectColor_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &message__srv__DetectColor_Request__rosidl_typesupport_introspection_c__DetectColor_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "message/srv/detail/detect_color__rosidl_typesupport_introspection_c.h"
// already included above
// #include "message/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "message/srv/detail/detect_color__functions.h"
// already included above
// #include "message/srv/detail/detect_color__struct.h"


// Include directives for member types
// Member `getcolor`
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `type`
#include "message/msg/box_type.h"
// Member `type`
#include "message/msg/detail/box_type__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void message__srv__DetectColor_Response__rosidl_typesupport_introspection_c__DetectColor_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  message__srv__DetectColor_Response__init(message_memory);
}

void message__srv__DetectColor_Response__rosidl_typesupport_introspection_c__DetectColor_Response_fini_function(void * message_memory)
{
  message__srv__DetectColor_Response__fini(message_memory);
}

size_t message__srv__DetectColor_Response__rosidl_typesupport_introspection_c__size_function__DetectColor_Response__type(
  const void * untyped_member)
{
  const message__msg__BoxType__Sequence * member =
    (const message__msg__BoxType__Sequence *)(untyped_member);
  return member->size;
}

const void * message__srv__DetectColor_Response__rosidl_typesupport_introspection_c__get_const_function__DetectColor_Response__type(
  const void * untyped_member, size_t index)
{
  const message__msg__BoxType__Sequence * member =
    (const message__msg__BoxType__Sequence *)(untyped_member);
  return &member->data[index];
}

void * message__srv__DetectColor_Response__rosidl_typesupport_introspection_c__get_function__DetectColor_Response__type(
  void * untyped_member, size_t index)
{
  message__msg__BoxType__Sequence * member =
    (message__msg__BoxType__Sequence *)(untyped_member);
  return &member->data[index];
}

void message__srv__DetectColor_Response__rosidl_typesupport_introspection_c__fetch_function__DetectColor_Response__type(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const message__msg__BoxType * item =
    ((const message__msg__BoxType *)
    message__srv__DetectColor_Response__rosidl_typesupport_introspection_c__get_const_function__DetectColor_Response__type(untyped_member, index));
  message__msg__BoxType * value =
    (message__msg__BoxType *)(untyped_value);
  *value = *item;
}

void message__srv__DetectColor_Response__rosidl_typesupport_introspection_c__assign_function__DetectColor_Response__type(
  void * untyped_member, size_t index, const void * untyped_value)
{
  message__msg__BoxType * item =
    ((message__msg__BoxType *)
    message__srv__DetectColor_Response__rosidl_typesupport_introspection_c__get_function__DetectColor_Response__type(untyped_member, index));
  const message__msg__BoxType * value =
    (const message__msg__BoxType *)(untyped_value);
  *item = *value;
}

bool message__srv__DetectColor_Response__rosidl_typesupport_introspection_c__resize_function__DetectColor_Response__type(
  void * untyped_member, size_t size)
{
  message__msg__BoxType__Sequence * member =
    (message__msg__BoxType__Sequence *)(untyped_member);
  message__msg__BoxType__Sequence__fini(member);
  return message__msg__BoxType__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember message__srv__DetectColor_Response__rosidl_typesupport_introspection_c__DetectColor_Response_message_member_array[4] = {
  {
    "getcolor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message__srv__DetectColor_Response, getcolor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message__srv__DetectColor_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message__srv__DetectColor_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message__srv__DetectColor_Response, type),  // bytes offset in struct
    NULL,  // default value
    message__srv__DetectColor_Response__rosidl_typesupport_introspection_c__size_function__DetectColor_Response__type,  // size() function pointer
    message__srv__DetectColor_Response__rosidl_typesupport_introspection_c__get_const_function__DetectColor_Response__type,  // get_const(index) function pointer
    message__srv__DetectColor_Response__rosidl_typesupport_introspection_c__get_function__DetectColor_Response__type,  // get(index) function pointer
    message__srv__DetectColor_Response__rosidl_typesupport_introspection_c__fetch_function__DetectColor_Response__type,  // fetch(index, &value) function pointer
    message__srv__DetectColor_Response__rosidl_typesupport_introspection_c__assign_function__DetectColor_Response__type,  // assign(index, value) function pointer
    message__srv__DetectColor_Response__rosidl_typesupport_introspection_c__resize_function__DetectColor_Response__type  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers message__srv__DetectColor_Response__rosidl_typesupport_introspection_c__DetectColor_Response_message_members = {
  "message__srv",  // message namespace
  "DetectColor_Response",  // message name
  4,  // number of fields
  sizeof(message__srv__DetectColor_Response),
  message__srv__DetectColor_Response__rosidl_typesupport_introspection_c__DetectColor_Response_message_member_array,  // message members
  message__srv__DetectColor_Response__rosidl_typesupport_introspection_c__DetectColor_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  message__srv__DetectColor_Response__rosidl_typesupport_introspection_c__DetectColor_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t message__srv__DetectColor_Response__rosidl_typesupport_introspection_c__DetectColor_Response_message_type_support_handle = {
  0,
  &message__srv__DetectColor_Response__rosidl_typesupport_introspection_c__DetectColor_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_message
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message, srv, DetectColor_Response)() {
  message__srv__DetectColor_Response__rosidl_typesupport_introspection_c__DetectColor_Response_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message, msg, BoxType)();
  if (!message__srv__DetectColor_Response__rosidl_typesupport_introspection_c__DetectColor_Response_message_type_support_handle.typesupport_identifier) {
    message__srv__DetectColor_Response__rosidl_typesupport_introspection_c__DetectColor_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &message__srv__DetectColor_Response__rosidl_typesupport_introspection_c__DetectColor_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "message/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "message/srv/detail/detect_color__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers message__srv__detail__detect_color__rosidl_typesupport_introspection_c__DetectColor_service_members = {
  "message__srv",  // service namespace
  "DetectColor",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // message__srv__detail__detect_color__rosidl_typesupport_introspection_c__DetectColor_Request_message_type_support_handle,
  NULL  // response message
  // message__srv__detail__detect_color__rosidl_typesupport_introspection_c__DetectColor_Response_message_type_support_handle
};

static rosidl_service_type_support_t message__srv__detail__detect_color__rosidl_typesupport_introspection_c__DetectColor_service_type_support_handle = {
  0,
  &message__srv__detail__detect_color__rosidl_typesupport_introspection_c__DetectColor_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message, srv, DetectColor_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message, srv, DetectColor_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_message
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message, srv, DetectColor)() {
  if (!message__srv__detail__detect_color__rosidl_typesupport_introspection_c__DetectColor_service_type_support_handle.typesupport_identifier) {
    message__srv__detail__detect_color__rosidl_typesupport_introspection_c__DetectColor_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)message__srv__detail__detect_color__rosidl_typesupport_introspection_c__DetectColor_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message, srv, DetectColor_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message, srv, DetectColor_Response)()->data;
  }

  return &message__srv__detail__detect_color__rosidl_typesupport_introspection_c__DetectColor_service_type_support_handle;
}
