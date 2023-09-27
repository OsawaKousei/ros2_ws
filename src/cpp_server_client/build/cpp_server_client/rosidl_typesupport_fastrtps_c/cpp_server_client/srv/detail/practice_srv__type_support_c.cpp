// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cpp_server_client:srv/PracticeSrv.idl
// generated code does not contain a copyright notice
#include "cpp_server_client/srv/detail/practice_srv__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cpp_server_client/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cpp_server_client/srv/detail/practice_srv__struct.h"
#include "cpp_server_client/srv/detail/practice_srv__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // num_vector
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // num_vector

// forward declare type support functions


using _PracticeSrv_Request__ros_msg_type = cpp_server_client__srv__PracticeSrv_Request;

static bool _PracticeSrv_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PracticeSrv_Request__ros_msg_type * ros_message = static_cast<const _PracticeSrv_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: num_vector
  {
    size_t size = ros_message->num_vector.size;
    auto array_ptr = ros_message->num_vector.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: a
  {
    cdr << ros_message->a;
  }

  // Field name: b
  {
    cdr << ros_message->b;
  }

  return true;
}

static bool _PracticeSrv_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PracticeSrv_Request__ros_msg_type * ros_message = static_cast<_PracticeSrv_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: num_vector
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->num_vector.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->num_vector);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->num_vector, size)) {
      fprintf(stderr, "failed to create array for field 'num_vector'");
      return false;
    }
    auto array_ptr = ros_message->num_vector.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: a
  {
    cdr >> ros_message->a;
  }

  // Field name: b
  {
    cdr >> ros_message->b;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cpp_server_client
size_t get_serialized_size_cpp_server_client__srv__PracticeSrv_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PracticeSrv_Request__ros_msg_type * ros_message = static_cast<const _PracticeSrv_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name num_vector
  {
    size_t array_size = ros_message->num_vector.size;
    auto array_ptr = ros_message->num_vector.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name a
  {
    size_t item_size = sizeof(ros_message->a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b
  {
    size_t item_size = sizeof(ros_message->b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PracticeSrv_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cpp_server_client__srv__PracticeSrv_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cpp_server_client
size_t max_serialized_size_cpp_server_client__srv__PracticeSrv_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: num_vector
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: a
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: b
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _PracticeSrv_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_cpp_server_client__srv__PracticeSrv_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PracticeSrv_Request = {
  "cpp_server_client::srv",
  "PracticeSrv_Request",
  _PracticeSrv_Request__cdr_serialize,
  _PracticeSrv_Request__cdr_deserialize,
  _PracticeSrv_Request__get_serialized_size,
  _PracticeSrv_Request__max_serialized_size
};

static rosidl_message_type_support_t _PracticeSrv_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PracticeSrv_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cpp_server_client, srv, PracticeSrv_Request)() {
  return &_PracticeSrv_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "cpp_server_client/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "cpp_server_client/srv/detail/practice_srv__struct.h"
// already included above
// #include "cpp_server_client/srv/detail/practice_srv__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _PracticeSrv_Response__ros_msg_type = cpp_server_client__srv__PracticeSrv_Response;

static bool _PracticeSrv_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PracticeSrv_Response__ros_msg_type * ros_message = static_cast<const _PracticeSrv_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: cumulative_sum
  {
    cdr << ros_message->cumulative_sum;
  }

  return true;
}

static bool _PracticeSrv_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PracticeSrv_Response__ros_msg_type * ros_message = static_cast<_PracticeSrv_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: cumulative_sum
  {
    cdr >> ros_message->cumulative_sum;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cpp_server_client
size_t get_serialized_size_cpp_server_client__srv__PracticeSrv_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PracticeSrv_Response__ros_msg_type * ros_message = static_cast<const _PracticeSrv_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cumulative_sum
  {
    size_t item_size = sizeof(ros_message->cumulative_sum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PracticeSrv_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cpp_server_client__srv__PracticeSrv_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cpp_server_client
size_t max_serialized_size_cpp_server_client__srv__PracticeSrv_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: cumulative_sum
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _PracticeSrv_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_cpp_server_client__srv__PracticeSrv_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PracticeSrv_Response = {
  "cpp_server_client::srv",
  "PracticeSrv_Response",
  _PracticeSrv_Response__cdr_serialize,
  _PracticeSrv_Response__cdr_deserialize,
  _PracticeSrv_Response__get_serialized_size,
  _PracticeSrv_Response__max_serialized_size
};

static rosidl_message_type_support_t _PracticeSrv_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PracticeSrv_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cpp_server_client, srv, PracticeSrv_Response)() {
  return &_PracticeSrv_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "cpp_server_client/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cpp_server_client/srv/practice_srv.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t PracticeSrv__callbacks = {
  "cpp_server_client::srv",
  "PracticeSrv",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cpp_server_client, srv, PracticeSrv_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cpp_server_client, srv, PracticeSrv_Response)(),
};

static rosidl_service_type_support_t PracticeSrv__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &PracticeSrv__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cpp_server_client, srv, PracticeSrv)() {
  return &PracticeSrv__handle;
}

#if defined(__cplusplus)
}
#endif
