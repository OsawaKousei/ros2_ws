// generated from rosidl_generator_cs/resource/idl_typesupport.c.em
// with input from custom_message_unity:msg/CustomUnity.idl
// generated code does not contain a copyright notice




#include <stdbool.h>
#include <stdint.h>
#include <rosidl_runtime_c/visibility_control.h>

#include <custom_message_unity/msg/custom_unity.h>

ROSIDL_GENERATOR_C_EXPORT
void * custom_message_unity__msg__CustomUnity_native_get_type_support()
{
    return (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(custom_message_unity, msg, CustomUnity);
}

ROSIDL_GENERATOR_C_EXPORT
void *custom_message_unity__msg__CustomUnity_native_create_native_message()
{
   custom_message_unity__msg__CustomUnity *ros_message = custom_message_unity__msg__CustomUnity__create();
   return ros_message;
}

ROSIDL_GENERATOR_C_EXPORT
void custom_message_unity__msg__CustomUnity_native_destroy_native_message(void *raw_ros_message) {
  custom_message_unity__msg__CustomUnity *ros_message = (custom_message_unity__msg__CustomUnity *)raw_ros_message;
  custom_message_unity__msg__CustomUnity__destroy(ros_message);
}


