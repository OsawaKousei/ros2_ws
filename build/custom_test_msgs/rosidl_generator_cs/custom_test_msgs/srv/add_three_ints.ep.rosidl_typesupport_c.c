// generated from rosidl_generator_cs/resource/idl_typesupport.c.em
// with input from custom_test_msgs:srv/AddThreeInts.idl
// generated code does not contain a copyright notice







#include <stdbool.h>
#include <stdint.h>
#include <rosidl_runtime_c/visibility_control.h>

#include <custom_test_msgs/srv/add_three_ints.h>

ROSIDL_GENERATOR_C_EXPORT
void * custom_test_msgs__srv__AddThreeInts_Request_native_get_type_support()
{
    return (void *)ROSIDL_GET_SRV_TYPE_SUPPORT(custom_test_msgs, srv, AddThreeInts);
}

ROSIDL_GENERATOR_C_EXPORT
void *custom_test_msgs__srv__AddThreeInts_Request_native_create_native_message()
{
   custom_test_msgs__srv__AddThreeInts_Request *ros_message = custom_test_msgs__srv__AddThreeInts_Request__create();
   return ros_message;
}

ROSIDL_GENERATOR_C_EXPORT
void custom_test_msgs__srv__AddThreeInts_Request_native_destroy_native_message(void *raw_ros_message) {
  custom_test_msgs__srv__AddThreeInts_Request *ros_message = (custom_test_msgs__srv__AddThreeInts_Request *)raw_ros_message;
  custom_test_msgs__srv__AddThreeInts_Request__destroy(ros_message);
}







ROSIDL_GENERATOR_C_EXPORT
void * custom_test_msgs__srv__AddThreeInts_Response_native_get_type_support()
{
    return (void *)ROSIDL_GET_SRV_TYPE_SUPPORT(custom_test_msgs, srv, AddThreeInts);
}

ROSIDL_GENERATOR_C_EXPORT
void *custom_test_msgs__srv__AddThreeInts_Response_native_create_native_message()
{
   custom_test_msgs__srv__AddThreeInts_Response *ros_message = custom_test_msgs__srv__AddThreeInts_Response__create();
   return ros_message;
}

ROSIDL_GENERATOR_C_EXPORT
void custom_test_msgs__srv__AddThreeInts_Response_native_destroy_native_message(void *raw_ros_message) {
  custom_test_msgs__srv__AddThreeInts_Response *ros_message = (custom_test_msgs__srv__AddThreeInts_Response *)raw_ros_message;
  custom_test_msgs__srv__AddThreeInts_Response__destroy(ros_message);
}

