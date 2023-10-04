// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from custom_message_unity:msg/CustomUnity.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGE_UNITY__MSG__DETAIL__CUSTOM_UNITY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define CUSTOM_MESSAGE_UNITY__MSG__DETAIL__CUSTOM_UNITY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "custom_message_unity/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "custom_message_unity/msg/detail/custom_unity__struct.hpp"

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

#include "fastcdr/Cdr.h"

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
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_message_unity
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  custom_message_unity::msg::CustomUnity & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_message_unity
get_serialized_size(
  const custom_message_unity::msg::CustomUnity & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_message_unity
max_serialized_size_CustomUnity(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace custom_message_unity

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_message_unity
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_message_unity, msg, CustomUnity)();

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MESSAGE_UNITY__MSG__DETAIL__CUSTOM_UNITY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
