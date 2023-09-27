// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_message_unity:msg/CustomUnity.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGE_UNITY__MSG__DETAIL__CUSTOM_UNITY__STRUCT_H_
#define CUSTOM_MESSAGE_UNITY__MSG__DETAIL__CUSTOM_UNITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/CustomUnity in the package custom_message_unity.
typedef struct custom_message_unity__msg__CustomUnity
{
  double f1;
  double f2;
  double f3;
} custom_message_unity__msg__CustomUnity;

// Struct for a sequence of custom_message_unity__msg__CustomUnity.
typedef struct custom_message_unity__msg__CustomUnity__Sequence
{
  custom_message_unity__msg__CustomUnity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_message_unity__msg__CustomUnity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MESSAGE_UNITY__MSG__DETAIL__CUSTOM_UNITY__STRUCT_H_
