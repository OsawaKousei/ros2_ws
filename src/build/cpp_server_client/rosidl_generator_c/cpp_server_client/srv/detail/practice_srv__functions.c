// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cpp_server_client:srv/PracticeSrv.idl
// generated code does not contain a copyright notice
#include "cpp_server_client/srv/detail/practice_srv__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `num_vector`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
cpp_server_client__srv__PracticeSrv_Request__init(cpp_server_client__srv__PracticeSrv_Request * msg)
{
  if (!msg) {
    return false;
  }
  // num_vector
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->num_vector, 0)) {
    cpp_server_client__srv__PracticeSrv_Request__fini(msg);
    return false;
  }
  // a
  // b
  return true;
}

void
cpp_server_client__srv__PracticeSrv_Request__fini(cpp_server_client__srv__PracticeSrv_Request * msg)
{
  if (!msg) {
    return;
  }
  // num_vector
  rosidl_runtime_c__int64__Sequence__fini(&msg->num_vector);
  // a
  // b
}

bool
cpp_server_client__srv__PracticeSrv_Request__are_equal(const cpp_server_client__srv__PracticeSrv_Request * lhs, const cpp_server_client__srv__PracticeSrv_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // num_vector
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->num_vector), &(rhs->num_vector)))
  {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  return true;
}

bool
cpp_server_client__srv__PracticeSrv_Request__copy(
  const cpp_server_client__srv__PracticeSrv_Request * input,
  cpp_server_client__srv__PracticeSrv_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // num_vector
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->num_vector), &(output->num_vector)))
  {
    return false;
  }
  // a
  output->a = input->a;
  // b
  output->b = input->b;
  return true;
}

cpp_server_client__srv__PracticeSrv_Request *
cpp_server_client__srv__PracticeSrv_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_server_client__srv__PracticeSrv_Request * msg = (cpp_server_client__srv__PracticeSrv_Request *)allocator.allocate(sizeof(cpp_server_client__srv__PracticeSrv_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cpp_server_client__srv__PracticeSrv_Request));
  bool success = cpp_server_client__srv__PracticeSrv_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cpp_server_client__srv__PracticeSrv_Request__destroy(cpp_server_client__srv__PracticeSrv_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cpp_server_client__srv__PracticeSrv_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cpp_server_client__srv__PracticeSrv_Request__Sequence__init(cpp_server_client__srv__PracticeSrv_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_server_client__srv__PracticeSrv_Request * data = NULL;

  if (size) {
    data = (cpp_server_client__srv__PracticeSrv_Request *)allocator.zero_allocate(size, sizeof(cpp_server_client__srv__PracticeSrv_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cpp_server_client__srv__PracticeSrv_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cpp_server_client__srv__PracticeSrv_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cpp_server_client__srv__PracticeSrv_Request__Sequence__fini(cpp_server_client__srv__PracticeSrv_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cpp_server_client__srv__PracticeSrv_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cpp_server_client__srv__PracticeSrv_Request__Sequence *
cpp_server_client__srv__PracticeSrv_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_server_client__srv__PracticeSrv_Request__Sequence * array = (cpp_server_client__srv__PracticeSrv_Request__Sequence *)allocator.allocate(sizeof(cpp_server_client__srv__PracticeSrv_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cpp_server_client__srv__PracticeSrv_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cpp_server_client__srv__PracticeSrv_Request__Sequence__destroy(cpp_server_client__srv__PracticeSrv_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cpp_server_client__srv__PracticeSrv_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cpp_server_client__srv__PracticeSrv_Request__Sequence__are_equal(const cpp_server_client__srv__PracticeSrv_Request__Sequence * lhs, const cpp_server_client__srv__PracticeSrv_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cpp_server_client__srv__PracticeSrv_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cpp_server_client__srv__PracticeSrv_Request__Sequence__copy(
  const cpp_server_client__srv__PracticeSrv_Request__Sequence * input,
  cpp_server_client__srv__PracticeSrv_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cpp_server_client__srv__PracticeSrv_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cpp_server_client__srv__PracticeSrv_Request * data =
      (cpp_server_client__srv__PracticeSrv_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cpp_server_client__srv__PracticeSrv_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cpp_server_client__srv__PracticeSrv_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cpp_server_client__srv__PracticeSrv_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
cpp_server_client__srv__PracticeSrv_Response__init(cpp_server_client__srv__PracticeSrv_Response * msg)
{
  if (!msg) {
    return false;
  }
  // cumulative_sum
  return true;
}

void
cpp_server_client__srv__PracticeSrv_Response__fini(cpp_server_client__srv__PracticeSrv_Response * msg)
{
  if (!msg) {
    return;
  }
  // cumulative_sum
}

bool
cpp_server_client__srv__PracticeSrv_Response__are_equal(const cpp_server_client__srv__PracticeSrv_Response * lhs, const cpp_server_client__srv__PracticeSrv_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cumulative_sum
  if (lhs->cumulative_sum != rhs->cumulative_sum) {
    return false;
  }
  return true;
}

bool
cpp_server_client__srv__PracticeSrv_Response__copy(
  const cpp_server_client__srv__PracticeSrv_Response * input,
  cpp_server_client__srv__PracticeSrv_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // cumulative_sum
  output->cumulative_sum = input->cumulative_sum;
  return true;
}

cpp_server_client__srv__PracticeSrv_Response *
cpp_server_client__srv__PracticeSrv_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_server_client__srv__PracticeSrv_Response * msg = (cpp_server_client__srv__PracticeSrv_Response *)allocator.allocate(sizeof(cpp_server_client__srv__PracticeSrv_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cpp_server_client__srv__PracticeSrv_Response));
  bool success = cpp_server_client__srv__PracticeSrv_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cpp_server_client__srv__PracticeSrv_Response__destroy(cpp_server_client__srv__PracticeSrv_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cpp_server_client__srv__PracticeSrv_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cpp_server_client__srv__PracticeSrv_Response__Sequence__init(cpp_server_client__srv__PracticeSrv_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_server_client__srv__PracticeSrv_Response * data = NULL;

  if (size) {
    data = (cpp_server_client__srv__PracticeSrv_Response *)allocator.zero_allocate(size, sizeof(cpp_server_client__srv__PracticeSrv_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cpp_server_client__srv__PracticeSrv_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cpp_server_client__srv__PracticeSrv_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cpp_server_client__srv__PracticeSrv_Response__Sequence__fini(cpp_server_client__srv__PracticeSrv_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cpp_server_client__srv__PracticeSrv_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cpp_server_client__srv__PracticeSrv_Response__Sequence *
cpp_server_client__srv__PracticeSrv_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_server_client__srv__PracticeSrv_Response__Sequence * array = (cpp_server_client__srv__PracticeSrv_Response__Sequence *)allocator.allocate(sizeof(cpp_server_client__srv__PracticeSrv_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cpp_server_client__srv__PracticeSrv_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cpp_server_client__srv__PracticeSrv_Response__Sequence__destroy(cpp_server_client__srv__PracticeSrv_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cpp_server_client__srv__PracticeSrv_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cpp_server_client__srv__PracticeSrv_Response__Sequence__are_equal(const cpp_server_client__srv__PracticeSrv_Response__Sequence * lhs, const cpp_server_client__srv__PracticeSrv_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cpp_server_client__srv__PracticeSrv_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cpp_server_client__srv__PracticeSrv_Response__Sequence__copy(
  const cpp_server_client__srv__PracticeSrv_Response__Sequence * input,
  cpp_server_client__srv__PracticeSrv_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cpp_server_client__srv__PracticeSrv_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cpp_server_client__srv__PracticeSrv_Response * data =
      (cpp_server_client__srv__PracticeSrv_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cpp_server_client__srv__PracticeSrv_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cpp_server_client__srv__PracticeSrv_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cpp_server_client__srv__PracticeSrv_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
