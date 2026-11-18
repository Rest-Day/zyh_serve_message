// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from message:msg/BoxType.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE__MSG__DETAIL__BOX_TYPE__FUNCTIONS_H_
#define MESSAGE__MSG__DETAIL__BOX_TYPE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "message/msg/rosidl_generator_c__visibility_control.h"

#include "message/msg/detail/box_type__struct.h"

/// Initialize msg/BoxType message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * message__msg__BoxType
 * )) before or use
 * message__msg__BoxType__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_message
bool
message__msg__BoxType__init(message__msg__BoxType * msg);

/// Finalize msg/BoxType message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_message
void
message__msg__BoxType__fini(message__msg__BoxType * msg);

/// Create msg/BoxType message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * message__msg__BoxType__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_message
message__msg__BoxType *
message__msg__BoxType__create();

/// Destroy msg/BoxType message.
/**
 * It calls
 * message__msg__BoxType__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_message
void
message__msg__BoxType__destroy(message__msg__BoxType * msg);

/// Check for msg/BoxType message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_message
bool
message__msg__BoxType__are_equal(const message__msg__BoxType * lhs, const message__msg__BoxType * rhs);

/// Copy a msg/BoxType message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_message
bool
message__msg__BoxType__copy(
  const message__msg__BoxType * input,
  message__msg__BoxType * output);

/// Initialize array of msg/BoxType messages.
/**
 * It allocates the memory for the number of elements and calls
 * message__msg__BoxType__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_message
bool
message__msg__BoxType__Sequence__init(message__msg__BoxType__Sequence * array, size_t size);

/// Finalize array of msg/BoxType messages.
/**
 * It calls
 * message__msg__BoxType__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_message
void
message__msg__BoxType__Sequence__fini(message__msg__BoxType__Sequence * array);

/// Create array of msg/BoxType messages.
/**
 * It allocates the memory for the array and calls
 * message__msg__BoxType__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_message
message__msg__BoxType__Sequence *
message__msg__BoxType__Sequence__create(size_t size);

/// Destroy array of msg/BoxType messages.
/**
 * It calls
 * message__msg__BoxType__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_message
void
message__msg__BoxType__Sequence__destroy(message__msg__BoxType__Sequence * array);

/// Check for msg/BoxType message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_message
bool
message__msg__BoxType__Sequence__are_equal(const message__msg__BoxType__Sequence * lhs, const message__msg__BoxType__Sequence * rhs);

/// Copy an array of msg/BoxType messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_message
bool
message__msg__BoxType__Sequence__copy(
  const message__msg__BoxType__Sequence * input,
  message__msg__BoxType__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MESSAGE__MSG__DETAIL__BOX_TYPE__FUNCTIONS_H_
