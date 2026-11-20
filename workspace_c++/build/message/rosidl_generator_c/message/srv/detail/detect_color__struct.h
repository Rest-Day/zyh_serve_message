// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from message:srv/DetectColor.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE__SRV__DETAIL__DETECT_COLOR__STRUCT_H_
#define MESSAGE__SRV__DETAIL__DETECT_COLOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'color'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/DetectColor in the package message.
typedef struct message__srv__DetectColor_Request
{
  rosidl_runtime_c__String color;
} message__srv__DetectColor_Request;

// Struct for a sequence of message__srv__DetectColor_Request.
typedef struct message__srv__DetectColor_Request__Sequence
{
  message__srv__DetectColor_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} message__srv__DetectColor_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'getcolor'
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'type'
#include "message/msg/detail/box_type__struct.h"

/// Struct defined in srv/DetectColor in the package message.
typedef struct message__srv__DetectColor_Response
{
  rosidl_runtime_c__String getcolor;
  bool success;
  rosidl_runtime_c__String message;
  message__msg__BoxType__Sequence type;
} message__srv__DetectColor_Response;

// Struct for a sequence of message__srv__DetectColor_Response.
typedef struct message__srv__DetectColor_Response__Sequence
{
  message__srv__DetectColor_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} message__srv__DetectColor_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGE__SRV__DETAIL__DETECT_COLOR__STRUCT_H_
