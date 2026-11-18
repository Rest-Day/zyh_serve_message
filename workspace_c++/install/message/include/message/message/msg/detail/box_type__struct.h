// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from message:msg/BoxType.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE__MSG__DETAIL__BOX_TYPE__STRUCT_H_
#define MESSAGE__MSG__DETAIL__BOX_TYPE__STRUCT_H_

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

/// Struct defined in msg/BoxType in the package message.
typedef struct message__msg__BoxType
{
  rosidl_runtime_c__String color;
  float x;
  float y;
  float w;
  float h;
  float d;
  float area;
} message__msg__BoxType;

// Struct for a sequence of message__msg__BoxType.
typedef struct message__msg__BoxType__Sequence
{
  message__msg__BoxType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} message__msg__BoxType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGE__MSG__DETAIL__BOX_TYPE__STRUCT_H_
