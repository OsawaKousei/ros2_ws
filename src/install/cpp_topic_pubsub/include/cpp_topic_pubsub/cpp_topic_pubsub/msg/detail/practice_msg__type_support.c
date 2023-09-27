// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cpp_topic_pubsub:msg/PracticeMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cpp_topic_pubsub/msg/detail/practice_msg__rosidl_typesupport_introspection_c.h"
#include "cpp_topic_pubsub/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cpp_topic_pubsub/msg/detail/practice_msg__functions.h"
#include "cpp_topic_pubsub/msg/detail/practice_msg__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cpp_topic_pubsub__msg__PracticeMsg__rosidl_typesupport_introspection_c__PracticeMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cpp_topic_pubsub__msg__PracticeMsg__init(message_memory);
}

void cpp_topic_pubsub__msg__PracticeMsg__rosidl_typesupport_introspection_c__PracticeMsg_fini_function(void * message_memory)
{
  cpp_topic_pubsub__msg__PracticeMsg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cpp_topic_pubsub__msg__PracticeMsg__rosidl_typesupport_introspection_c__PracticeMsg_message_member_array[3] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cpp_topic_pubsub__msg__PracticeMsg, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "product_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cpp_topic_pubsub__msg__PracticeMsg, product_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "price",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cpp_topic_pubsub__msg__PracticeMsg, price),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cpp_topic_pubsub__msg__PracticeMsg__rosidl_typesupport_introspection_c__PracticeMsg_message_members = {
  "cpp_topic_pubsub__msg",  // message namespace
  "PracticeMsg",  // message name
  3,  // number of fields
  sizeof(cpp_topic_pubsub__msg__PracticeMsg),
  cpp_topic_pubsub__msg__PracticeMsg__rosidl_typesupport_introspection_c__PracticeMsg_message_member_array,  // message members
  cpp_topic_pubsub__msg__PracticeMsg__rosidl_typesupport_introspection_c__PracticeMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  cpp_topic_pubsub__msg__PracticeMsg__rosidl_typesupport_introspection_c__PracticeMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cpp_topic_pubsub__msg__PracticeMsg__rosidl_typesupport_introspection_c__PracticeMsg_message_type_support_handle = {
  0,
  &cpp_topic_pubsub__msg__PracticeMsg__rosidl_typesupport_introspection_c__PracticeMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cpp_topic_pubsub
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_topic_pubsub, msg, PracticeMsg)() {
  if (!cpp_topic_pubsub__msg__PracticeMsg__rosidl_typesupport_introspection_c__PracticeMsg_message_type_support_handle.typesupport_identifier) {
    cpp_topic_pubsub__msg__PracticeMsg__rosidl_typesupport_introspection_c__PracticeMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cpp_topic_pubsub__msg__PracticeMsg__rosidl_typesupport_introspection_c__PracticeMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
