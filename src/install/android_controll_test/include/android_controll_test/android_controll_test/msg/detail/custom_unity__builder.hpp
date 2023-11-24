// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from android_controll_test:msg/CustomUnity.idl
// generated code does not contain a copyright notice

#ifndef ANDROID_CONTROLL_TEST__MSG__DETAIL__CUSTOM_UNITY__BUILDER_HPP_
#define ANDROID_CONTROLL_TEST__MSG__DETAIL__CUSTOM_UNITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "android_controll_test/msg/detail/custom_unity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace android_controll_test
{

namespace msg
{

namespace builder
{

class Init_CustomUnity_f3
{
public:
  explicit Init_CustomUnity_f3(::android_controll_test::msg::CustomUnity & msg)
  : msg_(msg)
  {}
  ::android_controll_test::msg::CustomUnity f3(::android_controll_test::msg::CustomUnity::_f3_type arg)
  {
    msg_.f3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::android_controll_test::msg::CustomUnity msg_;
};

class Init_CustomUnity_f2
{
public:
  explicit Init_CustomUnity_f2(::android_controll_test::msg::CustomUnity & msg)
  : msg_(msg)
  {}
  Init_CustomUnity_f3 f2(::android_controll_test::msg::CustomUnity::_f2_type arg)
  {
    msg_.f2 = std::move(arg);
    return Init_CustomUnity_f3(msg_);
  }

private:
  ::android_controll_test::msg::CustomUnity msg_;
};

class Init_CustomUnity_f1
{
public:
  Init_CustomUnity_f1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustomUnity_f2 f1(::android_controll_test::msg::CustomUnity::_f1_type arg)
  {
    msg_.f1 = std::move(arg);
    return Init_CustomUnity_f2(msg_);
  }

private:
  ::android_controll_test::msg::CustomUnity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::android_controll_test::msg::CustomUnity>()
{
  return android_controll_test::msg::builder::Init_CustomUnity_f1();
}

}  // namespace android_controll_test

#endif  // ANDROID_CONTROLL_TEST__MSG__DETAIL__CUSTOM_UNITY__BUILDER_HPP_
