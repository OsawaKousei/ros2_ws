// generated from rosidl_generator_cs/resource/idl.c.em
// with input from android_controll_test:srv/AddThreeInts.idl
// generated code does not contain a copyright notice




#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <stdint.h>
#include <string.h>

#include <android_controll_test/srv/add_three_ints.h>
#include <rosidl_runtime_c/visibility_control.h>


ROSIDL_GENERATOR_C_EXPORT
int64_t android_controll_test__srv__AddThreeInts_Request_native_read_field_a(void *message_handle)
{
  android_controll_test__srv__AddThreeInts_Request *ros_message = (android_controll_test__srv__AddThreeInts_Request *)message_handle;
  return ros_message->a;
}
ROSIDL_GENERATOR_C_EXPORT
int64_t android_controll_test__srv__AddThreeInts_Request_native_read_field_b(void *message_handle)
{
  android_controll_test__srv__AddThreeInts_Request *ros_message = (android_controll_test__srv__AddThreeInts_Request *)message_handle;
  return ros_message->b;
}
ROSIDL_GENERATOR_C_EXPORT
int64_t android_controll_test__srv__AddThreeInts_Request_native_read_field_c(void *message_handle)
{
  android_controll_test__srv__AddThreeInts_Request *ros_message = (android_controll_test__srv__AddThreeInts_Request *)message_handle;
  return ros_message->c;
}


ROSIDL_GENERATOR_C_EXPORT
void android_controll_test__srv__AddThreeInts_Request_native_write_field_a(void *message_handle, int64_t value)
{
  android_controll_test__srv__AddThreeInts_Request *ros_message = (android_controll_test__srv__AddThreeInts_Request *)message_handle;
  ros_message->a = value;
}
ROSIDL_GENERATOR_C_EXPORT
void android_controll_test__srv__AddThreeInts_Request_native_write_field_b(void *message_handle, int64_t value)
{
  android_controll_test__srv__AddThreeInts_Request *ros_message = (android_controll_test__srv__AddThreeInts_Request *)message_handle;
  ros_message->b = value;
}
ROSIDL_GENERATOR_C_EXPORT
void android_controll_test__srv__AddThreeInts_Request_native_write_field_c(void *message_handle, int64_t value)
{
  android_controll_test__srv__AddThreeInts_Request *ros_message = (android_controll_test__srv__AddThreeInts_Request *)message_handle;
  ros_message->c = value;
}












ROSIDL_GENERATOR_C_EXPORT
int64_t android_controll_test__srv__AddThreeInts_Response_native_read_field_sum(void *message_handle)
{
  android_controll_test__srv__AddThreeInts_Response *ros_message = (android_controll_test__srv__AddThreeInts_Response *)message_handle;
  return ros_message->sum;
}


ROSIDL_GENERATOR_C_EXPORT
void android_controll_test__srv__AddThreeInts_Response_native_write_field_sum(void *message_handle, int64_t value)
{
  android_controll_test__srv__AddThreeInts_Response *ros_message = (android_controll_test__srv__AddThreeInts_Response *)message_handle;
  ros_message->sum = value;
}








