// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from cpp_server_client:srv/PracticeSrv.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "cpp_server_client/srv/detail/practice_srv__struct.h"
#include "cpp_server_client/srv/detail/practice_srv__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace cpp_server_client
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _PracticeSrv_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PracticeSrv_Request_type_support_ids_t;

static const _PracticeSrv_Request_type_support_ids_t _PracticeSrv_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PracticeSrv_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PracticeSrv_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PracticeSrv_Request_type_support_symbol_names_t _PracticeSrv_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cpp_server_client, srv, PracticeSrv_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_server_client, srv, PracticeSrv_Request)),
  }
};

typedef struct _PracticeSrv_Request_type_support_data_t
{
  void * data[2];
} _PracticeSrv_Request_type_support_data_t;

static _PracticeSrv_Request_type_support_data_t _PracticeSrv_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PracticeSrv_Request_message_typesupport_map = {
  2,
  "cpp_server_client",
  &_PracticeSrv_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PracticeSrv_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PracticeSrv_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PracticeSrv_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PracticeSrv_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace cpp_server_client

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, cpp_server_client, srv, PracticeSrv_Request)() {
  return &::cpp_server_client::srv::rosidl_typesupport_c::PracticeSrv_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "cpp_server_client/srv/detail/practice_srv__struct.h"
// already included above
// #include "cpp_server_client/srv/detail/practice_srv__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace cpp_server_client
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _PracticeSrv_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PracticeSrv_Response_type_support_ids_t;

static const _PracticeSrv_Response_type_support_ids_t _PracticeSrv_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PracticeSrv_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PracticeSrv_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PracticeSrv_Response_type_support_symbol_names_t _PracticeSrv_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cpp_server_client, srv, PracticeSrv_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_server_client, srv, PracticeSrv_Response)),
  }
};

typedef struct _PracticeSrv_Response_type_support_data_t
{
  void * data[2];
} _PracticeSrv_Response_type_support_data_t;

static _PracticeSrv_Response_type_support_data_t _PracticeSrv_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PracticeSrv_Response_message_typesupport_map = {
  2,
  "cpp_server_client",
  &_PracticeSrv_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PracticeSrv_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PracticeSrv_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PracticeSrv_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PracticeSrv_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace cpp_server_client

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, cpp_server_client, srv, PracticeSrv_Response)() {
  return &::cpp_server_client::srv::rosidl_typesupport_c::PracticeSrv_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cpp_server_client/srv/detail/practice_srv__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace cpp_server_client
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _PracticeSrv_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PracticeSrv_type_support_ids_t;

static const _PracticeSrv_type_support_ids_t _PracticeSrv_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PracticeSrv_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PracticeSrv_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PracticeSrv_type_support_symbol_names_t _PracticeSrv_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cpp_server_client, srv, PracticeSrv)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_server_client, srv, PracticeSrv)),
  }
};

typedef struct _PracticeSrv_type_support_data_t
{
  void * data[2];
} _PracticeSrv_type_support_data_t;

static _PracticeSrv_type_support_data_t _PracticeSrv_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PracticeSrv_service_typesupport_map = {
  2,
  "cpp_server_client",
  &_PracticeSrv_service_typesupport_ids.typesupport_identifier[0],
  &_PracticeSrv_service_typesupport_symbol_names.symbol_name[0],
  &_PracticeSrv_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PracticeSrv_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PracticeSrv_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace cpp_server_client

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, cpp_server_client, srv, PracticeSrv)() {
  return &::cpp_server_client::srv::rosidl_typesupport_c::PracticeSrv_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
