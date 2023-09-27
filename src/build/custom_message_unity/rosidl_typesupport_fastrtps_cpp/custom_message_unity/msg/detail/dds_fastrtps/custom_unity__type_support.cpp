// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from custom_message_unity:msg/CustomUnity.idl
// generated code does not contain a copyright notice
#include "custom_message_unity/msg/detail/custom_unity__rosidl_typesupport_fastrtps_cpp.hpp"
#include "custom_message_unity/msg/detail/custom_unity__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace custom_message_unity
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_message_unity
cdr_serialize(
  const custom_message_unity::msg::CustomUnity & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: f1
  cdr << ros_message.f1;
  // Member: f2
  cdr << ros_message.f2;
  // Member: f3
  cdr << ros_message.f3;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_message_unity
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  custom_message_unity::msg::CustomUnity & ros_message)
{
  // Member: f1
  cdr >> ros_message.f1;

  // Member: f2
  cdr >> ros_message.f2;

  // Member: f3
  cdr >> ros_message.f3;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_message_unity
get_serialized_size(
  const custom_message_unity::msg::CustomUnity & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: f1
  {
    size_t item_size = sizeof(ros_message.f1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: f2
  {
    size_t item_size = sizeof(ros_message.f2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: f3
  {
    size_t item_size = sizeof(ros_message.f3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_message_unity
max_serialized_size_CustomUnity(
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


  // Member: f1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: f2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: f3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _CustomUnity__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const custom_message_unity::msg::CustomUnity *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CustomUnity__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<custom_message_unity::msg::CustomUnity *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CustomUnity__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const custom_message_unity::msg::CustomUnity *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CustomUnity__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_CustomUnity(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _CustomUnity__callbacks = {
  "custom_message_unity::msg",
  "CustomUnity",
  _CustomUnity__cdr_serialize,
  _CustomUnity__cdr_deserialize,
  _CustomUnity__get_serialized_size,
  _CustomUnity__max_serialized_size
};

static rosidl_message_type_support_t _CustomUnity__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CustomUnity__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace custom_message_unity

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_custom_message_unity
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_message_unity::msg::CustomUnity>()
{
  return &custom_message_unity::msg::typesupport_fastrtps_cpp::_CustomUnity__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_message_unity, msg, CustomUnity)() {
  return &custom_message_unity::msg::typesupport_fastrtps_cpp::_CustomUnity__handle;
}

#ifdef __cplusplus
}
#endif
