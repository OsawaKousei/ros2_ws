// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cpp_server_client:srv/PracticeSrv.idl
// generated code does not contain a copyright notice

#ifndef CPP_SERVER_CLIENT__SRV__DETAIL__PRACTICE_SRV__FUNCTIONS_H_
#define CPP_SERVER_CLIENT__SRV__DETAIL__PRACTICE_SRV__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cpp_server_client/msg/rosidl_generator_c__visibility_control.h"

#include "cpp_server_client/srv/detail/practice_srv__struct.h"

/// Initialize srv/PracticeSrv message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cpp_server_client__srv__PracticeSrv_Request
 * )) before or use
 * cpp_server_client__srv__PracticeSrv_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_server_client
bool
cpp_server_client__srv__PracticeSrv_Request__init(cpp_server_client__srv__PracticeSrv_Request * msg);

/// Finalize srv/PracticeSrv message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_server_client
void
cpp_server_client__srv__PracticeSrv_Request__fini(cpp_server_client__srv__PracticeSrv_Request * msg);

/// Create srv/PracticeSrv message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cpp_server_client__srv__PracticeSrv_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_server_client
cpp_server_client__srv__PracticeSrv_Request *
cpp_server_client__srv__PracticeSrv_Request__create();

/// Destroy srv/PracticeSrv message.
/**
 * It calls
 * cpp_server_client__srv__PracticeSrv_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_server_client
void
cpp_server_client__srv__PracticeSrv_Request__destroy(cpp_server_client__srv__PracticeSrv_Request * msg);

/// Check for srv/PracticeSrv message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_server_client
bool
cpp_server_client__srv__PracticeSrv_Request__are_equal(const cpp_server_client__srv__PracticeSrv_Request * lhs, const cpp_server_client__srv__PracticeSrv_Request * rhs);

/// Copy a srv/PracticeSrv message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_server_client
bool
cpp_server_client__srv__PracticeSrv_Request__copy(
  const cpp_server_client__srv__PracticeSrv_Request * input,
  cpp_server_client__srv__PracticeSrv_Request * output);

/// Initialize array of srv/PracticeSrv messages.
/**
 * It allocates the memory for the number of elements and calls
 * cpp_server_client__srv__PracticeSrv_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_server_client
bool
cpp_server_client__srv__PracticeSrv_Request__Sequence__init(cpp_server_client__srv__PracticeSrv_Request__Sequence * array, size_t size);

/// Finalize array of srv/PracticeSrv messages.
/**
 * It calls
 * cpp_server_client__srv__PracticeSrv_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_server_client
void
cpp_server_client__srv__PracticeSrv_Request__Sequence__fini(cpp_server_client__srv__PracticeSrv_Request__Sequence * array);

/// Create array of srv/PracticeSrv messages.
/**
 * It allocates the memory for the array and calls
 * cpp_server_client__srv__PracticeSrv_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_server_client
cpp_server_client__srv__PracticeSrv_Request__Sequence *
cpp_server_client__srv__PracticeSrv_Request__Sequence__create(size_t size);

/// Destroy array of srv/PracticeSrv messages.
/**
 * It calls
 * cpp_server_client__srv__PracticeSrv_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_server_client
void
cpp_server_client__srv__PracticeSrv_Request__Sequence__destroy(cpp_server_client__srv__PracticeSrv_Request__Sequence * array);

/// Check for srv/PracticeSrv message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_server_client
bool
cpp_server_client__srv__PracticeSrv_Request__Sequence__are_equal(const cpp_server_client__srv__PracticeSrv_Request__Sequence * lhs, const cpp_server_client__srv__PracticeSrv_Request__Sequence * rhs);

/// Copy an array of srv/PracticeSrv messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_server_client
bool
cpp_server_client__srv__PracticeSrv_Request__Sequence__copy(
  const cpp_server_client__srv__PracticeSrv_Request__Sequence * input,
  cpp_server_client__srv__PracticeSrv_Request__Sequence * output);

/// Initialize srv/PracticeSrv message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cpp_server_client__srv__PracticeSrv_Response
 * )) before or use
 * cpp_server_client__srv__PracticeSrv_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_server_client
bool
cpp_server_client__srv__PracticeSrv_Response__init(cpp_server_client__srv__PracticeSrv_Response * msg);

/// Finalize srv/PracticeSrv message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_server_client
void
cpp_server_client__srv__PracticeSrv_Response__fini(cpp_server_client__srv__PracticeSrv_Response * msg);

/// Create srv/PracticeSrv message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cpp_server_client__srv__PracticeSrv_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_server_client
cpp_server_client__srv__PracticeSrv_Response *
cpp_server_client__srv__PracticeSrv_Response__create();

/// Destroy srv/PracticeSrv message.
/**
 * It calls
 * cpp_server_client__srv__PracticeSrv_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_server_client
void
cpp_server_client__srv__PracticeSrv_Response__destroy(cpp_server_client__srv__PracticeSrv_Response * msg);

/// Check for srv/PracticeSrv message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_server_client
bool
cpp_server_client__srv__PracticeSrv_Response__are_equal(const cpp_server_client__srv__PracticeSrv_Response * lhs, const cpp_server_client__srv__PracticeSrv_Response * rhs);

/// Copy a srv/PracticeSrv message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_server_client
bool
cpp_server_client__srv__PracticeSrv_Response__copy(
  const cpp_server_client__srv__PracticeSrv_Response * input,
  cpp_server_client__srv__PracticeSrv_Response * output);

/// Initialize array of srv/PracticeSrv messages.
/**
 * It allocates the memory for the number of elements and calls
 * cpp_server_client__srv__PracticeSrv_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_server_client
bool
cpp_server_client__srv__PracticeSrv_Response__Sequence__init(cpp_server_client__srv__PracticeSrv_Response__Sequence * array, size_t size);

/// Finalize array of srv/PracticeSrv messages.
/**
 * It calls
 * cpp_server_client__srv__PracticeSrv_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_server_client
void
cpp_server_client__srv__PracticeSrv_Response__Sequence__fini(cpp_server_client__srv__PracticeSrv_Response__Sequence * array);

/// Create array of srv/PracticeSrv messages.
/**
 * It allocates the memory for the array and calls
 * cpp_server_client__srv__PracticeSrv_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_server_client
cpp_server_client__srv__PracticeSrv_Response__Sequence *
cpp_server_client__srv__PracticeSrv_Response__Sequence__create(size_t size);

/// Destroy array of srv/PracticeSrv messages.
/**
 * It calls
 * cpp_server_client__srv__PracticeSrv_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_server_client
void
cpp_server_client__srv__PracticeSrv_Response__Sequence__destroy(cpp_server_client__srv__PracticeSrv_Response__Sequence * array);

/// Check for srv/PracticeSrv message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_server_client
bool
cpp_server_client__srv__PracticeSrv_Response__Sequence__are_equal(const cpp_server_client__srv__PracticeSrv_Response__Sequence * lhs, const cpp_server_client__srv__PracticeSrv_Response__Sequence * rhs);

/// Copy an array of srv/PracticeSrv messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_server_client
bool
cpp_server_client__srv__PracticeSrv_Response__Sequence__copy(
  const cpp_server_client__srv__PracticeSrv_Response__Sequence * input,
  cpp_server_client__srv__PracticeSrv_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CPP_SERVER_CLIENT__SRV__DETAIL__PRACTICE_SRV__FUNCTIONS_H_
