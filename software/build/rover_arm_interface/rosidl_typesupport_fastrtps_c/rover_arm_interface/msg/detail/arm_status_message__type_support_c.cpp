// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rover_arm_interface:msg/ArmStatusMessage.idl
// generated code does not contain a copyright notice
#include "rover_arm_interface/msg/detail/arm_status_message__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rover_arm_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rover_arm_interface/msg/detail/arm_status_message__struct.h"
#include "rover_arm_interface/msg/detail/arm_status_message__functions.h"
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


using _ArmStatusMessage__ros_msg_type = rover_arm_interface__msg__ArmStatusMessage;

static bool _ArmStatusMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ArmStatusMessage__ros_msg_type * ros_message = static_cast<const _ArmStatusMessage__ros_msg_type *>(untyped_ros_message);
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

  // Field name: base_comm_status
  {
    cdr << ros_message->base_comm_status;
  }

  // Field name: shoulder_comm_status
  {
    cdr << ros_message->shoulder_comm_status;
  }

  // Field name: elbow_comm_status
  {
    cdr << ros_message->elbow_comm_status;
  }

  // Field name: roll_comm_status
  {
    cdr << ros_message->roll_comm_status;
  }

  // Field name: wrist_pitch_comm_status
  {
    cdr << ros_message->wrist_pitch_comm_status;
  }

  // Field name: wrist_roll_comm_status
  {
    cdr << ros_message->wrist_roll_comm_status;
  }

  // Field name: base_status
  {
    cdr << ros_message->base_status;
  }

  // Field name: shoulder_status
  {
    cdr << ros_message->shoulder_status;
  }

  // Field name: elbow_status
  {
    cdr << ros_message->elbow_status;
  }

  // Field name: roll_status
  {
    cdr << ros_message->roll_status;
  }

  // Field name: wrist_pitch_status
  {
    cdr << ros_message->wrist_pitch_status;
  }

  // Field name: wrist_roll_status
  {
    cdr << ros_message->wrist_roll_status;
  }

  // Field name: base_faults
  {
    cdr << ros_message->base_faults;
  }

  // Field name: shoulder_faults
  {
    cdr << ros_message->shoulder_faults;
  }

  // Field name: elbow_faults
  {
    cdr << ros_message->elbow_faults;
  }

  // Field name: roll_faults
  {
    cdr << ros_message->roll_faults;
  }

  // Field name: wrist_pitch_faults
  {
    cdr << ros_message->wrist_pitch_faults;
  }

  // Field name: wrist_roll_faults
  {
    cdr << ros_message->wrist_roll_faults;
  }

  return true;
}

static bool _ArmStatusMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ArmStatusMessage__ros_msg_type * ros_message = static_cast<_ArmStatusMessage__ros_msg_type *>(untyped_ros_message);
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

  // Field name: base_comm_status
  {
    cdr >> ros_message->base_comm_status;
  }

  // Field name: shoulder_comm_status
  {
    cdr >> ros_message->shoulder_comm_status;
  }

  // Field name: elbow_comm_status
  {
    cdr >> ros_message->elbow_comm_status;
  }

  // Field name: roll_comm_status
  {
    cdr >> ros_message->roll_comm_status;
  }

  // Field name: wrist_pitch_comm_status
  {
    cdr >> ros_message->wrist_pitch_comm_status;
  }

  // Field name: wrist_roll_comm_status
  {
    cdr >> ros_message->wrist_roll_comm_status;
  }

  // Field name: base_status
  {
    cdr >> ros_message->base_status;
  }

  // Field name: shoulder_status
  {
    cdr >> ros_message->shoulder_status;
  }

  // Field name: elbow_status
  {
    cdr >> ros_message->elbow_status;
  }

  // Field name: roll_status
  {
    cdr >> ros_message->roll_status;
  }

  // Field name: wrist_pitch_status
  {
    cdr >> ros_message->wrist_pitch_status;
  }

  // Field name: wrist_roll_status
  {
    cdr >> ros_message->wrist_roll_status;
  }

  // Field name: base_faults
  {
    cdr >> ros_message->base_faults;
  }

  // Field name: shoulder_faults
  {
    cdr >> ros_message->shoulder_faults;
  }

  // Field name: elbow_faults
  {
    cdr >> ros_message->elbow_faults;
  }

  // Field name: roll_faults
  {
    cdr >> ros_message->roll_faults;
  }

  // Field name: wrist_pitch_faults
  {
    cdr >> ros_message->wrist_pitch_faults;
  }

  // Field name: wrist_roll_faults
  {
    cdr >> ros_message->wrist_roll_faults;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rover_arm_interface
size_t get_serialized_size_rover_arm_interface__msg__ArmStatusMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ArmStatusMessage__ros_msg_type * ros_message = static_cast<const _ArmStatusMessage__ros_msg_type *>(untyped_ros_message);
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
  // field.name base_comm_status
  {
    size_t item_size = sizeof(ros_message->base_comm_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name shoulder_comm_status
  {
    size_t item_size = sizeof(ros_message->shoulder_comm_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name elbow_comm_status
  {
    size_t item_size = sizeof(ros_message->elbow_comm_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name roll_comm_status
  {
    size_t item_size = sizeof(ros_message->roll_comm_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wrist_pitch_comm_status
  {
    size_t item_size = sizeof(ros_message->wrist_pitch_comm_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wrist_roll_comm_status
  {
    size_t item_size = sizeof(ros_message->wrist_roll_comm_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name base_status
  {
    size_t item_size = sizeof(ros_message->base_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name shoulder_status
  {
    size_t item_size = sizeof(ros_message->shoulder_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name elbow_status
  {
    size_t item_size = sizeof(ros_message->elbow_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name roll_status
  {
    size_t item_size = sizeof(ros_message->roll_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wrist_pitch_status
  {
    size_t item_size = sizeof(ros_message->wrist_pitch_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wrist_roll_status
  {
    size_t item_size = sizeof(ros_message->wrist_roll_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name base_faults
  {
    size_t item_size = sizeof(ros_message->base_faults);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name shoulder_faults
  {
    size_t item_size = sizeof(ros_message->shoulder_faults);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name elbow_faults
  {
    size_t item_size = sizeof(ros_message->elbow_faults);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name roll_faults
  {
    size_t item_size = sizeof(ros_message->roll_faults);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wrist_pitch_faults
  {
    size_t item_size = sizeof(ros_message->wrist_pitch_faults);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wrist_roll_faults
  {
    size_t item_size = sizeof(ros_message->wrist_roll_faults);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ArmStatusMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rover_arm_interface__msg__ArmStatusMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rover_arm_interface
size_t max_serialized_size_rover_arm_interface__msg__ArmStatusMessage(
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
  // member: base_comm_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: shoulder_comm_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: elbow_comm_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: roll_comm_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wrist_pitch_comm_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wrist_roll_comm_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: base_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: shoulder_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: elbow_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: roll_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wrist_pitch_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wrist_roll_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: base_faults
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: shoulder_faults
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: elbow_faults
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: roll_faults
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wrist_pitch_faults
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wrist_roll_faults
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ArmStatusMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rover_arm_interface__msg__ArmStatusMessage(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ArmStatusMessage = {
  "rover_arm_interface::msg",
  "ArmStatusMessage",
  _ArmStatusMessage__cdr_serialize,
  _ArmStatusMessage__cdr_deserialize,
  _ArmStatusMessage__get_serialized_size,
  _ArmStatusMessage__max_serialized_size
};

static rosidl_message_type_support_t _ArmStatusMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ArmStatusMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rover_arm_interface, msg, ArmStatusMessage)() {
  return &_ArmStatusMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
