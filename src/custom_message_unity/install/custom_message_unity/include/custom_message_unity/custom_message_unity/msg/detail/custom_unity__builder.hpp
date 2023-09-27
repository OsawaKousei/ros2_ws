// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_message_unity:msg/CustomUnity.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGE_UNITY__MSG__DETAIL__CUSTOM_UNITY__BUILDER_HPP_
#define CUSTOM_MESSAGE_UNITY__MSG__DETAIL__CUSTOM_UNITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_message_unity/msg/detail/custom_unity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_message_unity
{

namespace msg
{

namespace builder
{

class Init_CustomUnity_f3
{
public:
  explicit Init_CustomUnity_f3(::custom_message_unity::msg::CustomUnity & msg)
  : msg_(msg)
  {}
  ::custom_message_unity::msg::CustomUnity f3(::custom_message_unity::msg::CustomUnity::_f3_type arg)
  {
    msg_.f3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_message_unity::msg::CustomUnity msg_;
};

class Init_CustomUnity_f2
{
public:
  explicit Init_CustomUnity_f2(::custom_message_unity::msg::CustomUnity & msg)
  : msg_(msg)
  {}
  Init_CustomUnity_f3 f2(::custom_message_unity::msg::CustomUnity::_f2_type arg)
  {
    msg_.f2 = std::move(arg);
    return Init_CustomUnity_f3(msg_);
  }

private:
  ::custom_message_unity::msg::CustomUnity msg_;
};

class Init_CustomUnity_f1
{
public:
  Init_CustomUnity_f1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustomUnity_f2 f1(::custom_message_unity::msg::CustomUnity::_f1_type arg)
  {
    msg_.f1 = std::move(arg);
    return Init_CustomUnity_f2(msg_);
  }

private:
  ::custom_message_unity::msg::CustomUnity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_message_unity::msg::CustomUnity>()
{
  return custom_message_unity::msg::builder::Init_CustomUnity_f1();
}

}  // namespace custom_message_unity

#endif  // CUSTOM_MESSAGE_UNITY__MSG__DETAIL__CUSTOM_UNITY__BUILDER_HPP_
