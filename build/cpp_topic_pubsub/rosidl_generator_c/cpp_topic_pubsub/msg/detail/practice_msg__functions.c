// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cpp_topic_pubsub:msg/PracticeMsg.idl
// generated code does not contain a copyright notice
#include "cpp_topic_pubsub/msg/detail/practice_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
cpp_topic_pubsub__msg__PracticeMsg__init(cpp_topic_pubsub__msg__PracticeMsg * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    cpp_topic_pubsub__msg__PracticeMsg__fini(msg);
    return false;
  }
  // product_type
  // price
  return true;
}

void
cpp_topic_pubsub__msg__PracticeMsg__fini(cpp_topic_pubsub__msg__PracticeMsg * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // product_type
  // price
}

bool
cpp_topic_pubsub__msg__PracticeMsg__are_equal(const cpp_topic_pubsub__msg__PracticeMsg * lhs, const cpp_topic_pubsub__msg__PracticeMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // product_type
  if (lhs->product_type != rhs->product_type) {
    return false;
  }
  // price
  if (lhs->price != rhs->price) {
    return false;
  }
  return true;
}

bool
cpp_topic_pubsub__msg__PracticeMsg__copy(
  const cpp_topic_pubsub__msg__PracticeMsg * input,
  cpp_topic_pubsub__msg__PracticeMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // product_type
  output->product_type = input->product_type;
  // price
  output->price = input->price;
  return true;
}

cpp_topic_pubsub__msg__PracticeMsg *
cpp_topic_pubsub__msg__PracticeMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_topic_pubsub__msg__PracticeMsg * msg = (cpp_topic_pubsub__msg__PracticeMsg *)allocator.allocate(sizeof(cpp_topic_pubsub__msg__PracticeMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cpp_topic_pubsub__msg__PracticeMsg));
  bool success = cpp_topic_pubsub__msg__PracticeMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cpp_topic_pubsub__msg__PracticeMsg__destroy(cpp_topic_pubsub__msg__PracticeMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cpp_topic_pubsub__msg__PracticeMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cpp_topic_pubsub__msg__PracticeMsg__Sequence__init(cpp_topic_pubsub__msg__PracticeMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_topic_pubsub__msg__PracticeMsg * data = NULL;

  if (size) {
    data = (cpp_topic_pubsub__msg__PracticeMsg *)allocator.zero_allocate(size, sizeof(cpp_topic_pubsub__msg__PracticeMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cpp_topic_pubsub__msg__PracticeMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cpp_topic_pubsub__msg__PracticeMsg__fini(&data[i - 1]);
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
cpp_topic_pubsub__msg__PracticeMsg__Sequence__fini(cpp_topic_pubsub__msg__PracticeMsg__Sequence * array)
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
      cpp_topic_pubsub__msg__PracticeMsg__fini(&array->data[i]);
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

cpp_topic_pubsub__msg__PracticeMsg__Sequence *
cpp_topic_pubsub__msg__PracticeMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_topic_pubsub__msg__PracticeMsg__Sequence * array = (cpp_topic_pubsub__msg__PracticeMsg__Sequence *)allocator.allocate(sizeof(cpp_topic_pubsub__msg__PracticeMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cpp_topic_pubsub__msg__PracticeMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cpp_topic_pubsub__msg__PracticeMsg__Sequence__destroy(cpp_topic_pubsub__msg__PracticeMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cpp_topic_pubsub__msg__PracticeMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cpp_topic_pubsub__msg__PracticeMsg__Sequence__are_equal(const cpp_topic_pubsub__msg__PracticeMsg__Sequence * lhs, const cpp_topic_pubsub__msg__PracticeMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cpp_topic_pubsub__msg__PracticeMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cpp_topic_pubsub__msg__PracticeMsg__Sequence__copy(
  const cpp_topic_pubsub__msg__PracticeMsg__Sequence * input,
  cpp_topic_pubsub__msg__PracticeMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cpp_topic_pubsub__msg__PracticeMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cpp_topic_pubsub__msg__PracticeMsg * data =
      (cpp_topic_pubsub__msg__PracticeMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cpp_topic_pubsub__msg__PracticeMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cpp_topic_pubsub__msg__PracticeMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cpp_topic_pubsub__msg__PracticeMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
