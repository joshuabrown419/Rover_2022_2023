// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rover_arm_interface:msg/ArmControlMessage.idl
// generated code does not contain a copyright notice

#ifndef ROVER_ARM_INTERFACE__MSG__DETAIL__ARM_CONTROL_MESSAGE__STRUCT_H_
#define ROVER_ARM_INTERFACE__MSG__DETAIL__ARM_CONTROL_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/ArmControlMessage in the package rover_arm_interface.
typedef struct rover_arm_interface__msg__ArmControlMessage
{
  double base;
  double shoulder;
  double elbow;
  double roll;
  double wrist_pitch;
  double wrist_roll;
  bool clear_faults;
  bool reset_controllers;
  bool calibrate;
} rover_arm_interface__msg__ArmControlMessage;

// Struct for a sequence of rover_arm_interface__msg__ArmControlMessage.
typedef struct rover_arm_interface__msg__ArmControlMessage__Sequence
{
  rover_arm_interface__msg__ArmControlMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rover_arm_interface__msg__ArmControlMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROVER_ARM_INTERFACE__MSG__DETAIL__ARM_CONTROL_MESSAGE__STRUCT_H_
