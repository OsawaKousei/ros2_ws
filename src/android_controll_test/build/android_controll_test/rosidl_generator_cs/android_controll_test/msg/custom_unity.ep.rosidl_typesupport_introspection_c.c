// generated from rosidl_generator_cs/resource/idl_typesupport.c.em
// with input from android_controll_test:msg/CustomUnity.idl
// generated code does not contain a copyright notice




#include <stdbool.h>
#include <stdint.h>
#include <rosidl_runtime_c/visibility_control.h>

#include <android_controll_test/msg/custom_unity.h>

ROSIDL_GENERATOR_C_EXPORT
void * android_controll_test__msg__CustomUnity_native_get_type_support()
{
    return (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(android_controll_test, msg, CustomUnity);
}

ROSIDL_GENERATOR_C_EXPORT
void *android_controll_test__msg__CustomUnity_native_create_native_message()
{
   android_controll_test__msg__CustomUnity *ros_message = android_controll_test__msg__CustomUnity__create();
   return ros_message;
}

ROSIDL_GENERATOR_C_EXPORT
void android_controll_test__msg__CustomUnity_native_destroy_native_message(void *raw_ros_message) {
  android_controll_test__msg__CustomUnity *ros_message = (android_controll_test__msg__CustomUnity *)raw_ros_message;
  android_controll_test__msg__CustomUnity__destroy(ros_message);
}


