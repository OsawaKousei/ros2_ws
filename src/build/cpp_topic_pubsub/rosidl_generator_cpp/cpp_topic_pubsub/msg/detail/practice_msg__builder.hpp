// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cpp_topic_pubsub:msg/PracticeMsg.idl
// generated code does not contain a copyright notice

#ifndef CPP_TOPIC_PUBSUB__MSG__DETAIL__PRACTICE_MSG__BUILDER_HPP_
#define CPP_TOPIC_PUBSUB__MSG__DETAIL__PRACTICE_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cpp_topic_pubsub/msg/detail/practice_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cpp_topic_pubsub
{

namespace msg
{

namespace builder
{

class Init_PracticeMsg_price
{
public:
  explicit Init_PracticeMsg_price(::cpp_topic_pubsub::msg::PracticeMsg & msg)
  : msg_(msg)
  {}
  ::cpp_topic_pubsub::msg::PracticeMsg price(::cpp_topic_pubsub::msg::PracticeMsg::_price_type arg)
  {
    msg_.price = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cpp_topic_pubsub::msg::PracticeMsg msg_;
};

class Init_PracticeMsg_product_type
{
public:
  explicit Init_PracticeMsg_product_type(::cpp_topic_pubsub::msg::PracticeMsg & msg)
  : msg_(msg)
  {}
  Init_PracticeMsg_price product_type(::cpp_topic_pubsub::msg::PracticeMsg::_product_type_type arg)
  {
    msg_.product_type = std::move(arg);
    return Init_PracticeMsg_price(msg_);
  }

private:
  ::cpp_topic_pubsub::msg::PracticeMsg msg_;
};

class Init_PracticeMsg_name
{
public:
  Init_PracticeMsg_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PracticeMsg_product_type name(::cpp_topic_pubsub::msg::PracticeMsg::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_PracticeMsg_product_type(msg_);
  }

private:
  ::cpp_topic_pubsub::msg::PracticeMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cpp_topic_pubsub::msg::PracticeMsg>()
{
  return cpp_topic_pubsub::msg::builder::Init_PracticeMsg_name();
}

}  // namespace cpp_topic_pubsub

#endif  // CPP_TOPIC_PUBSUB__MSG__DETAIL__PRACTICE_MSG__BUILDER_HPP_
