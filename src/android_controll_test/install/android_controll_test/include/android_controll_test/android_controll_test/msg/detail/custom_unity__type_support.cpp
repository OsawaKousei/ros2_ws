// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from android_controll_test:msg/CustomUnity.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "android_controll_test/msg/detail/custom_unity__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace android_controll_test
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void CustomUnity_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) android_controll_test::msg::CustomUnity(_init);
}

void CustomUnity_fini_function(void * message_memory)
{
  auto typed_message = static_cast<android_controll_test::msg::CustomUnity *>(message_memory);
  typed_message->~CustomUnity();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CustomUnity_message_member_array[3] = {
  {
    "f1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(android_controll_test::msg::CustomUnity, f1),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "f2",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(android_controll_test::msg::CustomUnity, f2),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "f3",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(android_controll_test::msg::CustomUnity, f3),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CustomUnity_message_members = {
  "android_controll_test::msg",  // message namespace
  "CustomUnity",  // message name
  3,  // number of fields
  sizeof(android_controll_test::msg::CustomUnity),
  CustomUnity_message_member_array,  // message members
  CustomUnity_init_function,  // function to initialize message memory (memory has to be allocated)
  CustomUnity_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CustomUnity_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CustomUnity_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace android_controll_test


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<android_controll_test::msg::CustomUnity>()
{
  return &::android_controll_test::msg::rosidl_typesupport_introspection_cpp::CustomUnity_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, android_controll_test, msg, CustomUnity)() {
  return &::android_controll_test::msg::rosidl_typesupport_introspection_cpp::CustomUnity_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
