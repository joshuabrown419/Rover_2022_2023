// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rover_arm_interface:msg/ArmStatusMessage.idl
// generated code does not contain a copyright notice

#ifndef ROVER_ARM_INTERFACE__MSG__DETAIL__ARM_STATUS_MESSAGE__STRUCT_H_
#define ROVER_ARM_INTERFACE__MSG__DETAIL__ARM_STATUS_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/ArmStatusMessage in the package rover_arm_interface.
typedef struct rover_arm_interface__msg__ArmStatusMessage
{
  double base;
  double shoulder;
  double elbow;
  double roll;
  double wrist_pitch;
  double wrist_roll;
  int32_t base_comm_status;
  int32_t shoulder_comm_status;
  int32_t elbow_comm_status;
  int32_t roll_comm_status;
  int32_t wrist_pitch_comm_status;
  int32_t wrist_roll_comm_status;
  int32_t base_status;
  int32_t shoulder_status;
  int32_t elbow_status;
  int32_t roll_status;
  int32_t wrist_pitch_status;
  int32_t wrist_roll_status;
  int32_t base_faults;
  int32_t shoulder_faults;
  int32_t elbow_faults;
  int32_t roll_faults;
  int32_t wrist_pitch_faults;
  int32_t wrist_roll_faults;
} rover_arm_interface__msg__ArmStatusMessage;

// Struct for a sequence of rover_arm_interface__msg__ArmStatusMessage.
typedef struct rover_arm_interface__msg__ArmStatusMessage__Sequence
{
  rover_arm_interface__msg__ArmStatusMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rover_arm_interface__msg__ArmStatusMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROVER_ARM_INTERFACE__MSG__DETAIL__ARM_STATUS_MESSAGE__STRUCT_H_
