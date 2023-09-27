// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from custom_message_unity:msg/CustomUnity.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGE_UNITY__MSG__DETAIL__CUSTOM_UNITY__FUNCTIONS_H_
#define CUSTOM_MESSAGE_UNITY__MSG__DETAIL__CUSTOM_UNITY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "custom_message_unity/msg/rosidl_generator_c__visibility_control.h"

#include "custom_message_unity/msg/detail/custom_unity__struct.h"

/// Initialize msg/CustomUnity message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * custom_message_unity__msg__CustomUnity
 * )) before or use
 * custom_message_unity__msg__CustomUnity__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_message_unity
bool
custom_message_unity__msg__CustomUnity__init(custom_message_unity__msg__CustomUnity * msg);

/// Finalize msg/CustomUnity message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_message_unity
void
custom_message_unity__msg__CustomUnity__fini(custom_message_unity__msg__CustomUnity * msg);

/// Create msg/CustomUnity message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * custom_message_unity__msg__CustomUnity__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_message_unity
custom_message_unity__msg__CustomUnity *
custom_message_unity__msg__CustomUnity__create();

/// Destroy msg/CustomUnity message.
/**
 * It calls
 * custom_message_unity__msg__CustomUnity__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_message_unity
void
custom_message_unity__msg__CustomUnity__destroy(custom_message_unity__msg__CustomUnity * msg);

/// Check for msg/CustomUnity message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_message_unity
bool
custom_message_unity__msg__CustomUnity__are_equal(const custom_message_unity__msg__CustomUnity * lhs, const custom_message_unity__msg__CustomUnity * rhs);

/// Copy a msg/CustomUnity message.
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
ROSIDL_GENERATOR_C_PUBLIC_custom_message_unity
bool
custom_message_unity__msg__CustomUnity__copy(
  const custom_message_unity__msg__CustomUnity * input,
  custom_message_unity__msg__CustomUnity * output);

/// Initialize array of msg/CustomUnity messages.
/**
 * It allocates the memory for the number of elements and calls
 * custom_message_unity__msg__CustomUnity__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_message_unity
bool
custom_message_unity__msg__CustomUnity__Sequence__init(custom_message_unity__msg__CustomUnity__Sequence * array, size_t size);

/// Finalize array of msg/CustomUnity messages.
/**
 * It calls
 * custom_message_unity__msg__CustomUnity__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_message_unity
void
custom_message_unity__msg__CustomUnity__Sequence__fini(custom_message_unity__msg__CustomUnity__Sequence * array);

/// Create array of msg/CustomUnity messages.
/**
 * It allocates the memory for the array and calls
 * custom_message_unity__msg__CustomUnity__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_message_unity
custom_message_unity__msg__CustomUnity__Sequence *
custom_message_unity__msg__CustomUnity__Sequence__create(size_t size);

/// Destroy array of msg/CustomUnity messages.
/**
 * It calls
 * custom_message_unity__msg__CustomUnity__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_message_unity
void
custom_message_unity__msg__CustomUnity__Sequence__destroy(custom_message_unity__msg__CustomUnity__Sequence * array);

/// Check for msg/CustomUnity message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_message_unity
bool
custom_message_unity__msg__CustomUnity__Sequence__are_equal(const custom_message_unity__msg__CustomUnity__Sequence * lhs, const custom_message_unity__msg__CustomUnity__Sequence * rhs);

/// Copy an array of msg/CustomUnity messages.
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
ROSIDL_GENERATOR_C_PUBLIC_custom_message_unity
bool
custom_message_unity__msg__CustomUnity__Sequence__copy(
  const custom_message_unity__msg__CustomUnity__Sequence * input,
  custom_message_unity__msg__CustomUnity__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MESSAGE_UNITY__MSG__DETAIL__CUSTOM_UNITY__FUNCTIONS_H_
