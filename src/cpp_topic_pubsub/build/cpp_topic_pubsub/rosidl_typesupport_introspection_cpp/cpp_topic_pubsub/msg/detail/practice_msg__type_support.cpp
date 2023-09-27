// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cpp_topic_pubsub:msg/PracticeMsg.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cpp_topic_pubsub/msg/detail/practice_msg__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace cpp_topic_pubsub
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PracticeMsg_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cpp_topic_pubsub::msg::PracticeMsg(_init);
}

void PracticeMsg_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cpp_topic_pubsub::msg::PracticeMsg *>(message_memory);
  typed_message->~PracticeMsg();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PracticeMsg_message_member_array[3] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cpp_topic_pubsub::msg::PracticeMsg, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "product_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cpp_topic_pubsub::msg::PracticeMsg, product_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "price",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cpp_topic_pubsub::msg::PracticeMsg, price),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PracticeMsg_message_members = {
  "cpp_topic_pubsub::msg",  // message namespace
  "PracticeMsg",  // message name
  3,  // number of fields
  sizeof(cpp_topic_pubsub::msg::PracticeMsg),
  PracticeMsg_message_member_array,  // message members
  PracticeMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  PracticeMsg_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PracticeMsg_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PracticeMsg_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace cpp_topic_pubsub


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cpp_topic_pubsub::msg::PracticeMsg>()
{
  return &::cpp_topic_pubsub::msg::rosidl_typesupport_introspection_cpp::PracticeMsg_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cpp_topic_pubsub, msg, PracticeMsg)() {
  return &::cpp_topic_pubsub::msg::rosidl_typesupport_introspection_cpp::PracticeMsg_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
