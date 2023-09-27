// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_message_unity:msg/CustomUnity.idl
// generated code does not contain a copyright notice
#include "custom_message_unity/msg/detail/custom_unity__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
custom_message_unity__msg__CustomUnity__init(custom_message_unity__msg__CustomUnity * msg)
{
  if (!msg) {
    return false;
  }
  // f1
  // f2
  // f3
  return true;
}

void
custom_message_unity__msg__CustomUnity__fini(custom_message_unity__msg__CustomUnity * msg)
{
  if (!msg) {
    return;
  }
  // f1
  // f2
  // f3
}

bool
custom_message_unity__msg__CustomUnity__are_equal(const custom_message_unity__msg__CustomUnity * lhs, const custom_message_unity__msg__CustomUnity * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // f1
  if (lhs->f1 != rhs->f1) {
    return false;
  }
  // f2
  if (lhs->f2 != rhs->f2) {
    return false;
  }
  // f3
  if (lhs->f3 != rhs->f3) {
    return false;
  }
  return true;
}

bool
custom_message_unity__msg__CustomUnity__copy(
  const custom_message_unity__msg__CustomUnity * input,
  custom_message_unity__msg__CustomUnity * output)
{
  if (!input || !output) {
    return false;
  }
  // f1
  output->f1 = input->f1;
  // f2
  output->f2 = input->f2;
  // f3
  output->f3 = input->f3;
  return true;
}

custom_message_unity__msg__CustomUnity *
custom_message_unity__msg__CustomUnity__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_message_unity__msg__CustomUnity * msg = (custom_message_unity__msg__CustomUnity *)allocator.allocate(sizeof(custom_message_unity__msg__CustomUnity), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_message_unity__msg__CustomUnity));
  bool success = custom_message_unity__msg__CustomUnity__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_message_unity__msg__CustomUnity__destroy(custom_message_unity__msg__CustomUnity * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_message_unity__msg__CustomUnity__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_message_unity__msg__CustomUnity__Sequence__init(custom_message_unity__msg__CustomUnity__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_message_unity__msg__CustomUnity * data = NULL;

  if (size) {
    data = (custom_message_unity__msg__CustomUnity *)allocator.zero_allocate(size, sizeof(custom_message_unity__msg__CustomUnity), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_message_unity__msg__CustomUnity__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_message_unity__msg__CustomUnity__fini(&data[i - 1]);
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
custom_message_unity__msg__CustomUnity__Sequence__fini(custom_message_unity__msg__CustomUnity__Sequence * array)
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
      custom_message_unity__msg__CustomUnity__fini(&array->data[i]);
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

custom_message_unity__msg__CustomUnity__Sequence *
custom_message_unity__msg__CustomUnity__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_message_unity__msg__CustomUnity__Sequence * array = (custom_message_unity__msg__CustomUnity__Sequence *)allocator.allocate(sizeof(custom_message_unity__msg__CustomUnity__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_message_unity__msg__CustomUnity__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_message_unity__msg__CustomUnity__Sequence__destroy(custom_message_unity__msg__CustomUnity__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_message_unity__msg__CustomUnity__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_message_unity__msg__CustomUnity__Sequence__are_equal(const custom_message_unity__msg__CustomUnity__Sequence * lhs, const custom_message_unity__msg__CustomUnity__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_message_unity__msg__CustomUnity__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_message_unity__msg__CustomUnity__Sequence__copy(
  const custom_message_unity__msg__CustomUnity__Sequence * input,
  custom_message_unity__msg__CustomUnity__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_message_unity__msg__CustomUnity);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_message_unity__msg__CustomUnity * data =
      (custom_message_unity__msg__CustomUnity *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_message_unity__msg__CustomUnity__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_message_unity__msg__CustomUnity__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_message_unity__msg__CustomUnity__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
