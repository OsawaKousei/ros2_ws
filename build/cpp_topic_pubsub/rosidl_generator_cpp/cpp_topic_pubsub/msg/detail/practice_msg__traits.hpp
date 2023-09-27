// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cpp_topic_pubsub:msg/PracticeMsg.idl
// generated code does not contain a copyright notice

#ifndef CPP_TOPIC_PUBSUB__MSG__DETAIL__PRACTICE_MSG__TRAITS_HPP_
#define CPP_TOPIC_PUBSUB__MSG__DETAIL__PRACTICE_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cpp_topic_pubsub/msg/detail/practice_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace cpp_topic_pubsub
{

namespace msg
{

inline void to_flow_style_yaml(
  const PracticeMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: product_type
  {
    out << "product_type: ";
    rosidl_generator_traits::value_to_yaml(msg.product_type, out);
    out << ", ";
  }

  // member: price
  {
    out << "price: ";
    rosidl_generator_traits::value_to_yaml(msg.price, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PracticeMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: product_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "product_type: ";
    rosidl_generator_traits::value_to_yaml(msg.product_type, out);
    out << "\n";
  }

  // member: price
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "price: ";
    rosidl_generator_traits::value_to_yaml(msg.price, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PracticeMsg & msg, bool use_flow_style = false)
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

}  // namespace cpp_topic_pubsub

namespace rosidl_generator_traits
{

[[deprecated("use cpp_topic_pubsub::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cpp_topic_pubsub::msg::PracticeMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  cpp_topic_pubsub::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cpp_topic_pubsub::msg::to_yaml() instead")]]
inline std::string to_yaml(const cpp_topic_pubsub::msg::PracticeMsg & msg)
{
  return cpp_topic_pubsub::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cpp_topic_pubsub::msg::PracticeMsg>()
{
  return "cpp_topic_pubsub::msg::PracticeMsg";
}

template<>
inline const char * name<cpp_topic_pubsub::msg::PracticeMsg>()
{
  return "cpp_topic_pubsub/msg/PracticeMsg";
}

template<>
struct has_fixed_size<cpp_topic_pubsub::msg::PracticeMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cpp_topic_pubsub::msg::PracticeMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cpp_topic_pubsub::msg::PracticeMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CPP_TOPIC_PUBSUB__MSG__DETAIL__PRACTICE_MSG__TRAITS_HPP_
