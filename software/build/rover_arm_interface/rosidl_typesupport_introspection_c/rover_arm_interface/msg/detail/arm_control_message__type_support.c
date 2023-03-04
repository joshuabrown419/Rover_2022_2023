// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rover_arm_interface:msg/ArmControlMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rover_arm_interface/msg/detail/arm_control_message__rosidl_typesupport_introspection_c.h"
#include "rover_arm_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rover_arm_interface/msg/detail/arm_control_message__functions.h"
#include "rover_arm_interface/msg/detail/arm_control_message__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ArmControlMessage__rosidl_typesupport_introspection_c__ArmControlMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rover_arm_interface__msg__ArmControlMessage__init(message_memory);
}

void ArmControlMessage__rosidl_typesupport_introspection_c__ArmControlMessage_fini_function(void * message_memory)
{
  rover_arm_interface__msg__ArmControlMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ArmControlMessage__rosidl_typesupport_introspection_c__ArmControlMessage_message_member_array[9] = {
  {
    "base",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_arm_interface__msg__ArmControlMessage, base),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "shoulder",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_arm_interface__msg__ArmControlMessage, shoulder),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "elbow",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_arm_interface__msg__ArmControlMessage, elbow),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_arm_interface__msg__ArmControlMessage, roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wrist_pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_arm_interface__msg__ArmControlMessage, wrist_pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wrist_roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_arm_interface__msg__ArmControlMessage, wrist_roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "clear_faults",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_arm_interface__msg__ArmControlMessage, clear_faults),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reset_controllers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_arm_interface__msg__ArmControlMessage, reset_controllers),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "calibrate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_arm_interface__msg__ArmControlMessage, calibrate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ArmControlMessage__rosidl_typesupport_introspection_c__ArmControlMessage_message_members = {
  "rover_arm_interface__msg",  // message namespace
  "ArmControlMessage",  // message name
  9,  // number of fields
  sizeof(rover_arm_interface__msg__ArmControlMessage),
  ArmControlMessage__rosidl_typesupport_introspection_c__ArmControlMessage_message_member_array,  // message members
  ArmControlMessage__rosidl_typesupport_introspection_c__ArmControlMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  ArmControlMessage__rosidl_typesupport_introspection_c__ArmControlMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ArmControlMessage__rosidl_typesupport_introspection_c__ArmControlMessage_message_type_support_handle = {
  0,
  &ArmControlMessage__rosidl_typesupport_introspection_c__ArmControlMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rover_arm_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_arm_interface, msg, ArmControlMessage)() {
  if (!ArmControlMessage__rosidl_typesupport_introspection_c__ArmControlMessage_message_type_support_handle.typesupport_identifier) {
    ArmControlMessage__rosidl_typesupport_introspection_c__ArmControlMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ArmControlMessage__rosidl_typesupport_introspection_c__ArmControlMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
