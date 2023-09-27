// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cpp_server_client:srv/PracticeSrv.idl
// generated code does not contain a copyright notice

#ifndef CPP_SERVER_CLIENT__SRV__DETAIL__PRACTICE_SRV__STRUCT_H_
#define CPP_SERVER_CLIENT__SRV__DETAIL__PRACTICE_SRV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'num_vector'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/PracticeSrv in the package cpp_server_client.
typedef struct cpp_server_client__srv__PracticeSrv_Request
{
  /// Request
  rosidl_runtime_c__int64__Sequence num_vector;
  int64_t a;
  int64_t b;
} cpp_server_client__srv__PracticeSrv_Request;

// Struct for a sequence of cpp_server_client__srv__PracticeSrv_Request.
typedef struct cpp_server_client__srv__PracticeSrv_Request__Sequence
{
  cpp_server_client__srv__PracticeSrv_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cpp_server_client__srv__PracticeSrv_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/PracticeSrv in the package cpp_server_client.
typedef struct cpp_server_client__srv__PracticeSrv_Response
{
  /// Response
  int64_t cumulative_sum;
} cpp_server_client__srv__PracticeSrv_Response;

// Struct for a sequence of cpp_server_client__srv__PracticeSrv_Response.
typedef struct cpp_server_client__srv__PracticeSrv_Response__Sequence
{
  cpp_server_client__srv__PracticeSrv_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cpp_server_client__srv__PracticeSrv_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CPP_SERVER_CLIENT__SRV__DETAIL__PRACTICE_SRV__STRUCT_H_
