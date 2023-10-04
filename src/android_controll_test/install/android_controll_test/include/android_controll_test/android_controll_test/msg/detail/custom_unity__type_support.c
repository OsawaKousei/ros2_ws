// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from android_controll_test:msg/CustomUnity.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "android_controll_test/msg/detail/custom_unity__rosidl_typesupport_introspection_c.h"
#include "android_controll_test/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "android_controll_test/msg/detail/custom_unity__functions.h"
#include "android_controll_test/msg/detail/custom_unity__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void android_controll_test__msg__CustomUnity__rosidl_typesupport_introspection_c__CustomUnity_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  android_controll_test__msg__CustomUnity__init(message_memory);
}

void android_controll_test__msg__CustomUnity__rosidl_typesupport_introspection_c__CustomUnity_fini_function(void * message_memory)
{
  android_controll_test__msg__CustomUnity__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember android_controll_test__msg__CustomUnity__rosidl_typesupport_introspection_c__CustomUnity_message_member_array[3] = {
  {
    "f1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(android_controll_test__msg__CustomUnity, f1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "f2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(android_controll_test__msg__CustomUnity, f2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "f3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(android_controll_test__msg__CustomUnity, f3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers android_controll_test__msg__CustomUnity__rosidl_typesupport_introspection_c__CustomUnity_message_members = {
  "android_controll_test__msg",  // message namespace
  "CustomUnity",  // message name
  3,  // number of fields
  sizeof(android_controll_test__msg__CustomUnity),
  android_controll_test__msg__CustomUnity__rosidl_typesupport_introspection_c__CustomUnity_message_member_array,  // message members
  android_controll_test__msg__CustomUnity__rosidl_typesupport_introspection_c__CustomUnity_init_function,  // function to initialize message memory (memory has to be allocated)
  android_controll_test__msg__CustomUnity__rosidl_typesupport_introspection_c__CustomUnity_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t android_controll_test__msg__CustomUnity__rosidl_typesupport_introspection_c__CustomUnity_message_type_support_handle = {
  0,
  &android_controll_test__msg__CustomUnity__rosidl_typesupport_introspection_c__CustomUnity_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_android_controll_test
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, android_controll_test, msg, CustomUnity)() {
  if (!android_controll_test__msg__CustomUnity__rosidl_typesupport_introspection_c__CustomUnity_message_type_support_handle.typesupport_identifier) {
    android_controll_test__msg__CustomUnity__rosidl_typesupport_introspection_c__CustomUnity_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &android_controll_test__msg__CustomUnity__rosidl_typesupport_introspection_c__CustomUnity_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
