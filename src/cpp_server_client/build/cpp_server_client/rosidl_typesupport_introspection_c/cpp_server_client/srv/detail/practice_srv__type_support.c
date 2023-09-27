// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cpp_server_client:srv/PracticeSrv.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cpp_server_client/srv/detail/practice_srv__rosidl_typesupport_introspection_c.h"
#include "cpp_server_client/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cpp_server_client/srv/detail/practice_srv__functions.h"
#include "cpp_server_client/srv/detail/practice_srv__struct.h"


// Include directives for member types
// Member `num_vector`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cpp_server_client__srv__PracticeSrv_Request__rosidl_typesupport_introspection_c__PracticeSrv_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cpp_server_client__srv__PracticeSrv_Request__init(message_memory);
}

void cpp_server_client__srv__PracticeSrv_Request__rosidl_typesupport_introspection_c__PracticeSrv_Request_fini_function(void * message_memory)
{
  cpp_server_client__srv__PracticeSrv_Request__fini(message_memory);
}

size_t cpp_server_client__srv__PracticeSrv_Request__rosidl_typesupport_introspection_c__size_function__PracticeSrv_Request__num_vector(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * cpp_server_client__srv__PracticeSrv_Request__rosidl_typesupport_introspection_c__get_const_function__PracticeSrv_Request__num_vector(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cpp_server_client__srv__PracticeSrv_Request__rosidl_typesupport_introspection_c__get_function__PracticeSrv_Request__num_vector(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void cpp_server_client__srv__PracticeSrv_Request__rosidl_typesupport_introspection_c__fetch_function__PracticeSrv_Request__num_vector(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    cpp_server_client__srv__PracticeSrv_Request__rosidl_typesupport_introspection_c__get_const_function__PracticeSrv_Request__num_vector(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void cpp_server_client__srv__PracticeSrv_Request__rosidl_typesupport_introspection_c__assign_function__PracticeSrv_Request__num_vector(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    cpp_server_client__srv__PracticeSrv_Request__rosidl_typesupport_introspection_c__get_function__PracticeSrv_Request__num_vector(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool cpp_server_client__srv__PracticeSrv_Request__rosidl_typesupport_introspection_c__resize_function__PracticeSrv_Request__num_vector(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember cpp_server_client__srv__PracticeSrv_Request__rosidl_typesupport_introspection_c__PracticeSrv_Request_message_member_array[3] = {
  {
    "num_vector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cpp_server_client__srv__PracticeSrv_Request, num_vector),  // bytes offset in struct
    NULL,  // default value
    cpp_server_client__srv__PracticeSrv_Request__rosidl_typesupport_introspection_c__size_function__PracticeSrv_Request__num_vector,  // size() function pointer
    cpp_server_client__srv__PracticeSrv_Request__rosidl_typesupport_introspection_c__get_const_function__PracticeSrv_Request__num_vector,  // get_const(index) function pointer
    cpp_server_client__srv__PracticeSrv_Request__rosidl_typesupport_introspection_c__get_function__PracticeSrv_Request__num_vector,  // get(index) function pointer
    cpp_server_client__srv__PracticeSrv_Request__rosidl_typesupport_introspection_c__fetch_function__PracticeSrv_Request__num_vector,  // fetch(index, &value) function pointer
    cpp_server_client__srv__PracticeSrv_Request__rosidl_typesupport_introspection_c__assign_function__PracticeSrv_Request__num_vector,  // assign(index, value) function pointer
    cpp_server_client__srv__PracticeSrv_Request__rosidl_typesupport_introspection_c__resize_function__PracticeSrv_Request__num_vector  // resize(index) function pointer
  },
  {
    "a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cpp_server_client__srv__PracticeSrv_Request, a),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cpp_server_client__srv__PracticeSrv_Request, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cpp_server_client__srv__PracticeSrv_Request__rosidl_typesupport_introspection_c__PracticeSrv_Request_message_members = {
  "cpp_server_client__srv",  // message namespace
  "PracticeSrv_Request",  // message name
  3,  // number of fields
  sizeof(cpp_server_client__srv__PracticeSrv_Request),
  cpp_server_client__srv__PracticeSrv_Request__rosidl_typesupport_introspection_c__PracticeSrv_Request_message_member_array,  // message members
  cpp_server_client__srv__PracticeSrv_Request__rosidl_typesupport_introspection_c__PracticeSrv_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  cpp_server_client__srv__PracticeSrv_Request__rosidl_typesupport_introspection_c__PracticeSrv_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cpp_server_client__srv__PracticeSrv_Request__rosidl_typesupport_introspection_c__PracticeSrv_Request_message_type_support_handle = {
  0,
  &cpp_server_client__srv__PracticeSrv_Request__rosidl_typesupport_introspection_c__PracticeSrv_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cpp_server_client
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_server_client, srv, PracticeSrv_Request)() {
  if (!cpp_server_client__srv__PracticeSrv_Request__rosidl_typesupport_introspection_c__PracticeSrv_Request_message_type_support_handle.typesupport_identifier) {
    cpp_server_client__srv__PracticeSrv_Request__rosidl_typesupport_introspection_c__PracticeSrv_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cpp_server_client__srv__PracticeSrv_Request__rosidl_typesupport_introspection_c__PracticeSrv_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cpp_server_client/srv/detail/practice_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cpp_server_client/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cpp_server_client/srv/detail/practice_srv__functions.h"
// already included above
// #include "cpp_server_client/srv/detail/practice_srv__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void cpp_server_client__srv__PracticeSrv_Response__rosidl_typesupport_introspection_c__PracticeSrv_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cpp_server_client__srv__PracticeSrv_Response__init(message_memory);
}

void cpp_server_client__srv__PracticeSrv_Response__rosidl_typesupport_introspection_c__PracticeSrv_Response_fini_function(void * message_memory)
{
  cpp_server_client__srv__PracticeSrv_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cpp_server_client__srv__PracticeSrv_Response__rosidl_typesupport_introspection_c__PracticeSrv_Response_message_member_array[1] = {
  {
    "cumulative_sum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cpp_server_client__srv__PracticeSrv_Response, cumulative_sum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cpp_server_client__srv__PracticeSrv_Response__rosidl_typesupport_introspection_c__PracticeSrv_Response_message_members = {
  "cpp_server_client__srv",  // message namespace
  "PracticeSrv_Response",  // message name
  1,  // number of fields
  sizeof(cpp_server_client__srv__PracticeSrv_Response),
  cpp_server_client__srv__PracticeSrv_Response__rosidl_typesupport_introspection_c__PracticeSrv_Response_message_member_array,  // message members
  cpp_server_client__srv__PracticeSrv_Response__rosidl_typesupport_introspection_c__PracticeSrv_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  cpp_server_client__srv__PracticeSrv_Response__rosidl_typesupport_introspection_c__PracticeSrv_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cpp_server_client__srv__PracticeSrv_Response__rosidl_typesupport_introspection_c__PracticeSrv_Response_message_type_support_handle = {
  0,
  &cpp_server_client__srv__PracticeSrv_Response__rosidl_typesupport_introspection_c__PracticeSrv_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cpp_server_client
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_server_client, srv, PracticeSrv_Response)() {
  if (!cpp_server_client__srv__PracticeSrv_Response__rosidl_typesupport_introspection_c__PracticeSrv_Response_message_type_support_handle.typesupport_identifier) {
    cpp_server_client__srv__PracticeSrv_Response__rosidl_typesupport_introspection_c__PracticeSrv_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cpp_server_client__srv__PracticeSrv_Response__rosidl_typesupport_introspection_c__PracticeSrv_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cpp_server_client/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "cpp_server_client/srv/detail/practice_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers cpp_server_client__srv__detail__practice_srv__rosidl_typesupport_introspection_c__PracticeSrv_service_members = {
  "cpp_server_client__srv",  // service namespace
  "PracticeSrv",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // cpp_server_client__srv__detail__practice_srv__rosidl_typesupport_introspection_c__PracticeSrv_Request_message_type_support_handle,
  NULL  // response message
  // cpp_server_client__srv__detail__practice_srv__rosidl_typesupport_introspection_c__PracticeSrv_Response_message_type_support_handle
};

static rosidl_service_type_support_t cpp_server_client__srv__detail__practice_srv__rosidl_typesupport_introspection_c__PracticeSrv_service_type_support_handle = {
  0,
  &cpp_server_client__srv__detail__practice_srv__rosidl_typesupport_introspection_c__PracticeSrv_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_server_client, srv, PracticeSrv_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_server_client, srv, PracticeSrv_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cpp_server_client
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_server_client, srv, PracticeSrv)() {
  if (!cpp_server_client__srv__detail__practice_srv__rosidl_typesupport_introspection_c__PracticeSrv_service_type_support_handle.typesupport_identifier) {
    cpp_server_client__srv__detail__practice_srv__rosidl_typesupport_introspection_c__PracticeSrv_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)cpp_server_client__srv__detail__practice_srv__rosidl_typesupport_introspection_c__PracticeSrv_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_server_client, srv, PracticeSrv_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_server_client, srv, PracticeSrv_Response)()->data;
  }

  return &cpp_server_client__srv__detail__practice_srv__rosidl_typesupport_introspection_c__PracticeSrv_service_type_support_handle;
}
