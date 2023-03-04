// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rover_arm_interface:msg/ArmControlMessage.idl
// generated code does not contain a copyright notice
#include "rover_arm_interface/msg/detail/arm_control_message__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rover_arm_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rover_arm_interface/msg/detail/arm_control_message__struct.h"
#include "rover_arm_interface/msg/detail/arm_control_message__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ArmControlMessage__ros_msg_type = rover_arm_interface__msg__ArmControlMessage;

static bool _ArmControlMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ArmControlMessage__ros_msg_type * ros_message = static_cast<const _ArmControlMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: base
  {
    cdr << ros_message->base;
  }

  // Field name: shoulder
  {
    cdr << ros_message->shoulder;
  }

  // Field name: elbow
  {
    cdr << ros_message->elbow;
  }

  // Field name: roll
  {
    cdr << ros_message->roll;
  }

  // Field name: wrist_pitch
  {
    cdr << ros_message->wrist_pitch;
  }

  // Field name: wrist_roll
  {
    cdr << ros_message->wrist_roll;
  }

  // Field name: clear_faults
  {
    cdr << (ros_message->clear_faults ? true : false);
  }

  // Field name: reset_controllers
  {
    cdr << (ros_message->reset_controllers ? true : false);
  }

  // Field name: calibrate
  {
    cdr << (ros_message->calibrate ? true : false);
  }

  return true;
}

static bool _ArmControlMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ArmControlMessage__ros_msg_type * ros_message = static_cast<_ArmControlMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: base
  {
    cdr >> ros_message->base;
  }

  // Field name: shoulder
  {
    cdr >> ros_message->shoulder;
  }

  // Field name: elbow
  {
    cdr >> ros_message->elbow;
  }

  // Field name: roll
  {
    cdr >> ros_message->roll;
  }

  // Field name: wrist_pitch
  {
    cdr >> ros_message->wrist_pitch;
  }

  // Field name: wrist_roll
  {
    cdr >> ros_message->wrist_roll;
  }

  // Field name: clear_faults
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->clear_faults = tmp ? true : false;
  }

  // Field name: reset_controllers
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reset_controllers = tmp ? true : false;
  }

  // Field name: calibrate
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->calibrate = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rover_arm_interface
size_t get_serialized_size_rover_arm_interface__msg__ArmControlMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ArmControlMessage__ros_msg_type * ros_message = static_cast<const _ArmControlMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name base
  {
    size_t item_size = sizeof(ros_message->base);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name shoulder
  {
    size_t item_size = sizeof(ros_message->shoulder);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name elbow
  {
    size_t item_size = sizeof(ros_message->elbow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name roll
  {
    size_t item_size = sizeof(ros_message->roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wrist_pitch
  {
    size_t item_size = sizeof(ros_message->wrist_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wrist_roll
  {
    size_t item_size = sizeof(ros_message->wrist_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name clear_faults
  {
    size_t item_size = sizeof(ros_message->clear_faults);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reset_controllers
  {
    size_t item_size = sizeof(ros_message->reset_controllers);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name calibrate
  {
    size_t item_size = sizeof(ros_message->calibrate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ArmControlMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rover_arm_interface__msg__ArmControlMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rover_arm_interface
size_t max_serialized_size_rover_arm_interface__msg__ArmControlMessage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: base
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: shoulder
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: elbow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: roll
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wrist_pitch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wrist_roll
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: clear_faults
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reset_controllers
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: calibrate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ArmControlMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rover_arm_interface__msg__ArmControlMessage(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ArmControlMessage = {
  "rover_arm_interface::msg",
  "ArmControlMessage",
  _ArmControlMessage__cdr_serialize,
  _ArmControlMessage__cdr_deserialize,
  _ArmControlMessage__get_serialized_size,
  _ArmControlMessage__max_serialized_size
};

static rosidl_message_type_support_t _ArmControlMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ArmControlMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rover_arm_interface, msg, ArmControlMessage)() {
  return &_ArmControlMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
