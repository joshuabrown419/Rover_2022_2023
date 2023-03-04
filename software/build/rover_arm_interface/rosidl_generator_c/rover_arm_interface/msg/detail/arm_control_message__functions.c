// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rover_arm_interface:msg/ArmControlMessage.idl
// generated code does not contain a copyright notice
#include "rover_arm_interface/msg/detail/arm_control_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rover_arm_interface__msg__ArmControlMessage__init(rover_arm_interface__msg__ArmControlMessage * msg)
{
  if (!msg) {
    return false;
  }
  // base
  // shoulder
  // elbow
  // roll
  // wrist_pitch
  // wrist_roll
  // clear_faults
  // reset_controllers
  // calibrate
  return true;
}

void
rover_arm_interface__msg__ArmControlMessage__fini(rover_arm_interface__msg__ArmControlMessage * msg)
{
  if (!msg) {
    return;
  }
  // base
  // shoulder
  // elbow
  // roll
  // wrist_pitch
  // wrist_roll
  // clear_faults
  // reset_controllers
  // calibrate
}

bool
rover_arm_interface__msg__ArmControlMessage__are_equal(const rover_arm_interface__msg__ArmControlMessage * lhs, const rover_arm_interface__msg__ArmControlMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // base
  if (lhs->base != rhs->base) {
    return false;
  }
  // shoulder
  if (lhs->shoulder != rhs->shoulder) {
    return false;
  }
  // elbow
  if (lhs->elbow != rhs->elbow) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // wrist_pitch
  if (lhs->wrist_pitch != rhs->wrist_pitch) {
    return false;
  }
  // wrist_roll
  if (lhs->wrist_roll != rhs->wrist_roll) {
    return false;
  }
  // clear_faults
  if (lhs->clear_faults != rhs->clear_faults) {
    return false;
  }
  // reset_controllers
  if (lhs->reset_controllers != rhs->reset_controllers) {
    return false;
  }
  // calibrate
  if (lhs->calibrate != rhs->calibrate) {
    return false;
  }
  return true;
}

bool
rover_arm_interface__msg__ArmControlMessage__copy(
  const rover_arm_interface__msg__ArmControlMessage * input,
  rover_arm_interface__msg__ArmControlMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // base
  output->base = input->base;
  // shoulder
  output->shoulder = input->shoulder;
  // elbow
  output->elbow = input->elbow;
  // roll
  output->roll = input->roll;
  // wrist_pitch
  output->wrist_pitch = input->wrist_pitch;
  // wrist_roll
  output->wrist_roll = input->wrist_roll;
  // clear_faults
  output->clear_faults = input->clear_faults;
  // reset_controllers
  output->reset_controllers = input->reset_controllers;
  // calibrate
  output->calibrate = input->calibrate;
  return true;
}

rover_arm_interface__msg__ArmControlMessage *
rover_arm_interface__msg__ArmControlMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rover_arm_interface__msg__ArmControlMessage * msg = (rover_arm_interface__msg__ArmControlMessage *)allocator.allocate(sizeof(rover_arm_interface__msg__ArmControlMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rover_arm_interface__msg__ArmControlMessage));
  bool success = rover_arm_interface__msg__ArmControlMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rover_arm_interface__msg__ArmControlMessage__destroy(rover_arm_interface__msg__ArmControlMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rover_arm_interface__msg__ArmControlMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rover_arm_interface__msg__ArmControlMessage__Sequence__init(rover_arm_interface__msg__ArmControlMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rover_arm_interface__msg__ArmControlMessage * data = NULL;

  if (size) {
    data = (rover_arm_interface__msg__ArmControlMessage *)allocator.zero_allocate(size, sizeof(rover_arm_interface__msg__ArmControlMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rover_arm_interface__msg__ArmControlMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rover_arm_interface__msg__ArmControlMessage__fini(&data[i - 1]);
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
rover_arm_interface__msg__ArmControlMessage__Sequence__fini(rover_arm_interface__msg__ArmControlMessage__Sequence * array)
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
      rover_arm_interface__msg__ArmControlMessage__fini(&array->data[i]);
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

rover_arm_interface__msg__ArmControlMessage__Sequence *
rover_arm_interface__msg__ArmControlMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rover_arm_interface__msg__ArmControlMessage__Sequence * array = (rover_arm_interface__msg__ArmControlMessage__Sequence *)allocator.allocate(sizeof(rover_arm_interface__msg__ArmControlMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rover_arm_interface__msg__ArmControlMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rover_arm_interface__msg__ArmControlMessage__Sequence__destroy(rover_arm_interface__msg__ArmControlMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rover_arm_interface__msg__ArmControlMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rover_arm_interface__msg__ArmControlMessage__Sequence__are_equal(const rover_arm_interface__msg__ArmControlMessage__Sequence * lhs, const rover_arm_interface__msg__ArmControlMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rover_arm_interface__msg__ArmControlMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rover_arm_interface__msg__ArmControlMessage__Sequence__copy(
  const rover_arm_interface__msg__ArmControlMessage__Sequence * input,
  rover_arm_interface__msg__ArmControlMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rover_arm_interface__msg__ArmControlMessage);
    rover_arm_interface__msg__ArmControlMessage * data =
      (rover_arm_interface__msg__ArmControlMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rover_arm_interface__msg__ArmControlMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rover_arm_interface__msg__ArmControlMessage__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rover_arm_interface__msg__ArmControlMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
