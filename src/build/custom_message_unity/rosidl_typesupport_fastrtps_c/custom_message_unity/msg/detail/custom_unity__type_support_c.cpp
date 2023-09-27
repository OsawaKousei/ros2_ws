// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_message_unity:msg/CustomUnity.idl
// generated code does not contain a copyright notice
#include "custom_message_unity/msg/detail/custom_unity__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_message_unity/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_message_unity/msg/detail/custom_unity__struct.h"
#include "custom_message_unity/msg/detail/custom_unity__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _CustomUnity__ros_msg_type = custom_message_unity__msg__CustomUnity;

static bool _CustomUnity__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CustomUnity__ros_msg_type * ros_message = static_cast<const _CustomUnity__ros_msg_type *>(untyped_ros_message);
  // Field name: f1
  {
    cdr << ros_message->f1;
  }

  // Field name: f2
  {
    cdr << ros_message->f2;
  }

  // Field name: f3
  {
    cdr << ros_message->f3;
  }

  return true;
}

static bool _CustomUnity__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CustomUnity__ros_msg_type * ros_message = static_cast<_CustomUnity__ros_msg_type *>(untyped_ros_message);
  // Field name: f1
  {
    cdr >> ros_message->f1;
  }

  // Field name: f2
  {
    cdr >> ros_message->f2;
  }

  // Field name: f3
  {
    cdr >> ros_message->f3;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_message_unity
size_t get_serialized_size_custom_message_unity__msg__CustomUnity(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CustomUnity__ros_msg_type * ros_message = static_cast<const _CustomUnity__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name f1
  {
    size_t item_size = sizeof(ros_message->f1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f2
  {
    size_t item_size = sizeof(ros_message->f2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f3
  {
    size_t item_size = sizeof(ros_message->f3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CustomUnity__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_message_unity__msg__CustomUnity(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_message_unity
size_t max_serialized_size_custom_message_unity__msg__CustomUnity(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: f1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: f2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: f3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _CustomUnity__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_custom_message_unity__msg__CustomUnity(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CustomUnity = {
  "custom_message_unity::msg",
  "CustomUnity",
  _CustomUnity__cdr_serialize,
  _CustomUnity__cdr_deserialize,
  _CustomUnity__get_serialized_size,
  _CustomUnity__max_serialized_size
};

static rosidl_message_type_support_t _CustomUnity__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CustomUnity,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_message_unity, msg, CustomUnity)() {
  return &_CustomUnity__type_support;
}

#if defined(__cplusplus)
}
#endif
