// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from android_controll_test:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#ifndef ANDROID_CONTROLL_TEST__SRV__DETAIL__ADD_THREE_INTS__STRUCT_H_
#define ANDROID_CONTROLL_TEST__SRV__DETAIL__ADD_THREE_INTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/AddThreeInts in the package android_controll_test.
typedef struct android_controll_test__srv__AddThreeInts_Request
{
  int64_t a;
  int64_t b;
  int64_t c;
} android_controll_test__srv__AddThreeInts_Request;

// Struct for a sequence of android_controll_test__srv__AddThreeInts_Request.
typedef struct android_controll_test__srv__AddThreeInts_Request__Sequence
{
  android_controll_test__srv__AddThreeInts_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} android_controll_test__srv__AddThreeInts_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/AddThreeInts in the package android_controll_test.
typedef struct android_controll_test__srv__AddThreeInts_Response
{
  int64_t sum;
} android_controll_test__srv__AddThreeInts_Response;

// Struct for a sequence of android_controll_test__srv__AddThreeInts_Response.
typedef struct android_controll_test__srv__AddThreeInts_Response__Sequence
{
  android_controll_test__srv__AddThreeInts_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} android_controll_test__srv__AddThreeInts_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANDROID_CONTROLL_TEST__SRV__DETAIL__ADD_THREE_INTS__STRUCT_H_
