// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from android_controll_test:msg/CustomUnity.idl
// generated code does not contain a copyright notice

#ifndef ANDROID_CONTROLL_TEST__MSG__DETAIL__CUSTOM_UNITY__TRAITS_HPP_
#define ANDROID_CONTROLL_TEST__MSG__DETAIL__CUSTOM_UNITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "android_controll_test/msg/detail/custom_unity__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace android_controll_test
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

}  // namespace android_controll_test

namespace rosidl_generator_traits
{

[[deprecated("use android_controll_test::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const android_controll_test::msg::CustomUnity & msg,
  std::ostream & out, size_t indentation = 0)
{
  android_controll_test::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use android_controll_test::msg::to_yaml() instead")]]
inline std::string to_yaml(const android_controll_test::msg::CustomUnity & msg)
{
  return android_controll_test::msg::to_yaml(msg);
}

template<>
inline const char * data_type<android_controll_test::msg::CustomUnity>()
{
  return "android_controll_test::msg::CustomUnity";
}

template<>
inline const char * name<android_controll_test::msg::CustomUnity>()
{
  return "android_controll_test/msg/CustomUnity";
}

template<>
struct has_fixed_size<android_controll_test::msg::CustomUnity>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<android_controll_test::msg::CustomUnity>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<android_controll_test::msg::CustomUnity>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ANDROID_CONTROLL_TEST__MSG__DETAIL__CUSTOM_UNITY__TRAITS_HPP_
