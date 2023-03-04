// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rover_arm_interface:msg/ArmStatusMessage.idl
// generated code does not contain a copyright notice
#include "rover_arm_interface/msg/detail/arm_status_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rover_arm_interface__msg__ArmStatusMessage__init(rover_arm_interface__msg__ArmStatusMessage * msg)
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
  // base_comm_status
  // shoulder_comm_status
  // elbow_comm_status
  // roll_comm_status
  // wrist_pitch_comm_status
  // wrist_roll_comm_status
  // base_status
  // shoulder_status
  // elbow_status
  // roll_status
  // wrist_pitch_status
  // wrist_roll_status
  // base_faults
  // shoulder_faults
  // elbow_faults
  // roll_faults
  // wrist_pitch_faults
  // wrist_roll_faults
  return true;
}

void
rover_arm_interface__msg__ArmStatusMessage__fini(rover_arm_interface__msg__ArmStatusMessage * msg)
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
  // base_comm_status
  // shoulder_comm_status
  // elbow_comm_status
  // roll_comm_status
  // wrist_pitch_comm_status
  // wrist_roll_comm_status
  // base_status
  // shoulder_status
  // elbow_status
  // roll_status
  // wrist_pitch_status
  // wrist_roll_status
  // base_faults
  // shoulder_faults
  // elbow_faults
  // roll_faults
  // wrist_pitch_faults
  // wrist_roll_faults
}

bool
rover_arm_interface__msg__ArmStatusMessage__are_equal(const rover_arm_interface__msg__ArmStatusMessage * lhs, const rover_arm_interface__msg__ArmStatusMessage * rhs)
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
  // base_comm_status
  if (lhs->base_comm_status != rhs->base_comm_status) {
    return false;
  }
  // shoulder_comm_status
  if (lhs->shoulder_comm_status != rhs->shoulder_comm_status) {
    return false;
  }
  // elbow_comm_status
  if (lhs->elbow_comm_status != rhs->elbow_comm_status) {
    return false;
  }
  // roll_comm_status
  if (lhs->roll_comm_status != rhs->roll_comm_status) {
    return false;
  }
  // wrist_pitch_comm_status
  if (lhs->wrist_pitch_comm_status != rhs->wrist_pitch_comm_status) {
    return false;
  }
  // wrist_roll_comm_status
  if (lhs->wrist_roll_comm_status != rhs->wrist_roll_comm_status) {
    return false;
  }
  // base_status
  if (lhs->base_status != rhs->base_status) {
    return false;
  }
  // shoulder_status
  if (lhs->shoulder_status != rhs->shoulder_status) {
    return false;
  }
  // elbow_status
  if (lhs->elbow_status != rhs->elbow_status) {
    return false;
  }
  // roll_status
  if (lhs->roll_status != rhs->roll_status) {
    return false;
  }
  // wrist_pitch_status
  if (lhs->wrist_pitch_status != rhs->wrist_pitch_status) {
    return false;
  }
  // wrist_roll_status
  if (lhs->wrist_roll_status != rhs->wrist_roll_status) {
    return false;
  }
  // base_faults
  if (lhs->base_faults != rhs->base_faults) {
    return false;
  }
  // shoulder_faults
  if (lhs->shoulder_faults != rhs->shoulder_faults) {
    return false;
  }
  // elbow_faults
  if (lhs->elbow_faults != rhs->elbow_faults) {
    return false;
  }
  // roll_faults
  if (lhs->roll_faults != rhs->roll_faults) {
    return false;
  }
  // wrist_pitch_faults
  if (lhs->wrist_pitch_faults != rhs->wrist_pitch_faults) {
    return false;
  }
  // wrist_roll_faults
  if (lhs->wrist_roll_faults != rhs->wrist_roll_faults) {
    return false;
  }
  return true;
}

bool
rover_arm_interface__msg__ArmStatusMessage__copy(
  const rover_arm_interface__msg__ArmStatusMessage * input,
  rover_arm_interface__msg__ArmStatusMessage * output)
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
  // base_comm_status
  output->base_comm_status = input->base_comm_status;
  // shoulder_comm_status
  output->shoulder_comm_status = input->shoulder_comm_status;
  // elbow_comm_status
  output->elbow_comm_status = input->elbow_comm_status;
  // roll_comm_status
  output->roll_comm_status = input->roll_comm_status;
  // wrist_pitch_comm_status
  output->wrist_pitch_comm_status = input->wrist_pitch_comm_status;
  // wrist_roll_comm_status
  output->wrist_roll_comm_status = input->wrist_roll_comm_status;
  // base_status
  output->base_status = input->base_status;
  // shoulder_status
  output->shoulder_status = input->shoulder_status;
  // elbow_status
  output->elbow_status = input->elbow_status;
  // roll_status
  output->roll_status = input->roll_status;
  // wrist_pitch_status
  output->wrist_pitch_status = input->wrist_pitch_status;
  // wrist_roll_status
  output->wrist_roll_status = input->wrist_roll_status;
  // base_faults
  output->base_faults = input->base_faults;
  // shoulder_faults
  output->shoulder_faults = input->shoulder_faults;
  // elbow_faults
  output->elbow_faults = input->elbow_faults;
  // roll_faults
  output->roll_faults = input->roll_faults;
  // wrist_pitch_faults
  output->wrist_pitch_faults = input->wrist_pitch_faults;
  // wrist_roll_faults
  output->wrist_roll_faults = input->wrist_roll_faults;
  return true;
}

rover_arm_interface__msg__ArmStatusMessage *
rover_arm_interface__msg__ArmStatusMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rover_arm_interface__msg__ArmStatusMessage * msg = (rover_arm_interface__msg__ArmStatusMessage *)allocator.allocate(sizeof(rover_arm_interface__msg__ArmStatusMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rover_arm_interface__msg__ArmStatusMessage));
  bool success = rover_arm_interface__msg__ArmStatusMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rover_arm_interface__msg__ArmStatusMessage__destroy(rover_arm_interface__msg__ArmStatusMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rover_arm_interface__msg__ArmStatusMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rover_arm_interface__msg__ArmStatusMessage__Sequence__init(rover_arm_interface__msg__ArmStatusMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rover_arm_interface__msg__ArmStatusMessage * data = NULL;

  if (size) {
    data = (rover_arm_interface__msg__ArmStatusMessage *)allocator.zero_allocate(size, sizeof(rover_arm_interface__msg__ArmStatusMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rover_arm_interface__msg__ArmStatusMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rover_arm_interface__msg__ArmStatusMessage__fini(&data[i - 1]);
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
rover_arm_interface__msg__ArmStatusMessage__Sequence__fini(rover_arm_interface__msg__ArmStatusMessage__Sequence * array)
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
      rover_arm_interface__msg__ArmStatusMessage__fini(&array->data[i]);
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

rover_arm_interface__msg__ArmStatusMessage__Sequence *
rover_arm_interface__msg__ArmStatusMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rover_arm_interface__msg__ArmStatusMessage__Sequence * array = (rover_arm_interface__msg__ArmStatusMessage__Sequence *)allocator.allocate(sizeof(rover_arm_interface__msg__ArmStatusMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rover_arm_interface__msg__ArmStatusMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rover_arm_interface__msg__ArmStatusMessage__Sequence__destroy(rover_arm_interface__msg__ArmStatusMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rover_arm_interface__msg__ArmStatusMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rover_arm_interface__msg__ArmStatusMessage__Sequence__are_equal(const rover_arm_interface__msg__ArmStatusMessage__Sequence * lhs, const rover_arm_interface__msg__ArmStatusMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rover_arm_interface__msg__ArmStatusMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rover_arm_interface__msg__ArmStatusMessage__Sequence__copy(
  const rover_arm_interface__msg__ArmStatusMessage__Sequence * input,
  rover_arm_interface__msg__ArmStatusMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rover_arm_interface__msg__ArmStatusMessage);
    rover_arm_interface__msg__ArmStatusMessage * data =
      (rover_arm_interface__msg__ArmStatusMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rover_arm_interface__msg__ArmStatusMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rover_arm_interface__msg__ArmStatusMessage__fini(&data[i]);
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
    if (!rover_arm_interface__msg__ArmStatusMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
