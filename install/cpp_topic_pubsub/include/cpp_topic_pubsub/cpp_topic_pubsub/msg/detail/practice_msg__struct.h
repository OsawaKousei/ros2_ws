// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cpp_topic_pubsub:msg/PracticeMsg.idl
// generated code does not contain a copyright notice

#ifndef CPP_TOPIC_PUBSUB__MSG__DETAIL__PRACTICE_MSG__STRUCT_H_
#define CPP_TOPIC_PUBSUB__MSG__DETAIL__PRACTICE_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PRODUCT_TYPE_GIN'.
enum
{
  cpp_topic_pubsub__msg__PracticeMsg__PRODUCT_TYPE_GIN = 0
};

/// Constant 'PRODUCT_TYPE_WHISKEY'.
enum
{
  cpp_topic_pubsub__msg__PracticeMsg__PRODUCT_TYPE_WHISKEY = 1
};

/// Constant 'PRODUCT_TYPE_VODKA'.
enum
{
  cpp_topic_pubsub__msg__PracticeMsg__PRODUCT_TYPE_VODKA = 2
};

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PracticeMsg in the package cpp_topic_pubsub.
typedef struct cpp_topic_pubsub__msg__PracticeMsg
{
  rosidl_runtime_c__String name;
  uint8_t product_type;
  uint32_t price;
} cpp_topic_pubsub__msg__PracticeMsg;

// Struct for a sequence of cpp_topic_pubsub__msg__PracticeMsg.
typedef struct cpp_topic_pubsub__msg__PracticeMsg__Sequence
{
  cpp_topic_pubsub__msg__PracticeMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cpp_topic_pubsub__msg__PracticeMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CPP_TOPIC_PUBSUB__MSG__DETAIL__PRACTICE_MSG__STRUCT_H_
