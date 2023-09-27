// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_message_unity:msg/CustomUnity.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGE_UNITY__MSG__DETAIL__CUSTOM_UNITY__TRAITS_HPP_
#define CUSTOM_MESSAGE_UNITY__MSG__DETAIL__CUSTOM_UNITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_message_unity/msg/detail/custom_unity__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_message_unity
{

namespace msg
{

inline void to_flow_style_yaml(
  const CustomUnity & msg,
  std::ostream & out)
{
  out << "{";
  // member: f1
  {
    out << "f1: ";
    rosidl_generator_traits::value_to_yaml(msg.f1, out);
    out << ", ";
  }

  // member: f2
  {
    out << "f2: ";
    rosidl_generator_traits::value_to_yaml(msg.f2, out);
    out << ", ";
  }

  // member: f3
  {
    out << "f3: ";
    rosidl_generator_traits::value_to_yaml(msg.f3, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CustomUnity & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: f1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f1: ";
    rosidl_generator_traits::value_to_yaml(msg.f1, out);
    out << "\n";
  }

  // member: f2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f2: ";
    rosidl_generator_traits::value_to_yaml(msg.f2, out);
    out << "\n";
  }

  // member: f3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f3: ";
    rosidl_generator_traits::value_to_yaml(msg.f3, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CustomUnity & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace custom_message_unity

namespace rosidl_generator_traits
{

[[deprecated("use custom_message_unity::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_message_unity::msg::CustomUnity & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_message_unity::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_message_unity::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_message_unity::msg::CustomUnity & msg)
{
  return custom_message_unity::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_message_unity::msg::CustomUnity>()
{
  return "custom_message_unity::msg::CustomUnity";
}

template<>
inline const char * name<custom_message_unity::msg::CustomUnity>()
{
  return "custom_message_unity/msg/CustomUnity";
}

template<>
struct has_fixed_size<custom_message_unity::msg::CustomUnity>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_message_unity::msg::CustomUnity>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_message_unity::msg::CustomUnity>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MESSAGE_UNITY__MSG__DETAIL__CUSTOM_UNITY__TRAITS_HPP_
