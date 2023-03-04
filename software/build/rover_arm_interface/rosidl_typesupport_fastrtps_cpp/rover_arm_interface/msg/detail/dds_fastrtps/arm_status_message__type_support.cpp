// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rover_arm_interface:msg/ArmStatusMessage.idl
// generated code does not contain a copyright notice
#include "rover_arm_interface/msg/detail/arm_status_message__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rover_arm_interface/msg/detail/arm_status_message__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace rover_arm_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rover_arm_interface
cdr_serialize(
  const rover_arm_interface::msg::ArmStatusMessage & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: base
  cdr << ros_message.base;
  // Member: shoulder
  cdr << ros_message.shoulder;
  // Member: elbow
  cdr << ros_message.elbow;
  // Member: roll
  cdr << ros_message.roll;
  // Member: wrist_pitch
  cdr << ros_message.wrist_pitch;
  // Member: wrist_roll
  cdr << ros_message.wrist_roll;
  // Member: base_comm_status
  cdr << ros_message.base_comm_status;
  // Member: shoulder_comm_status
  cdr << ros_message.shoulder_comm_status;
  // Member: elbow_comm_status
  cdr << ros_message.elbow_comm_status;
  // Member: roll_comm_status
  cdr << ros_message.roll_comm_status;
  // Member: wrist_pitch_comm_status
  cdr << ros_message.wrist_pitch_comm_status;
  // Member: wrist_roll_comm_status
  cdr << ros_message.wrist_roll_comm_status;
  // Member: base_status
  cdr << ros_message.base_status;
  // Member: shoulder_status
  cdr << ros_message.shoulder_status;
  // Member: elbow_status
  cdr << ros_message.elbow_status;
  // Member: roll_status
  cdr << ros_message.roll_status;
  // Member: wrist_pitch_status
  cdr << ros_message.wrist_pitch_status;
  // Member: wrist_roll_status
  cdr << ros_message.wrist_roll_status;
  // Member: base_faults
  cdr << ros_message.base_faults;
  // Member: shoulder_faults
  cdr << ros_message.shoulder_faults;
  // Member: elbow_faults
  cdr << ros_message.elbow_faults;
  // Member: roll_faults
  cdr << ros_message.roll_faults;
  // Member: wrist_pitch_faults
  cdr << ros_message.wrist_pitch_faults;
  // Member: wrist_roll_faults
  cdr << ros_message.wrist_roll_faults;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rover_arm_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rover_arm_interface::msg::ArmStatusMessage & ros_message)
{
  // Member: base
  cdr >> ros_message.base;

  // Member: shoulder
  cdr >> ros_message.shoulder;

  // Member: elbow
  cdr >> ros_message.elbow;

  // Member: roll
  cdr >> ros_message.roll;

  // Member: wrist_pitch
  cdr >> ros_message.wrist_pitch;

  // Member: wrist_roll
  cdr >> ros_message.wrist_roll;

  // Member: base_comm_status
  cdr >> ros_message.base_comm_status;

  // Member: shoulder_comm_status
  cdr >> ros_message.shoulder_comm_status;

  // Member: elbow_comm_status
  cdr >> ros_message.elbow_comm_status;

  // Member: roll_comm_status
  cdr >> ros_message.roll_comm_status;

  // Member: wrist_pitch_comm_status
  cdr >> ros_message.wrist_pitch_comm_status;

  // Member: wrist_roll_comm_status
  cdr >> ros_message.wrist_roll_comm_status;

  // Member: base_status
  cdr >> ros_message.base_status;

  // Member: shoulder_status
  cdr >> ros_message.shoulder_status;

  // Member: elbow_status
  cdr >> ros_message.elbow_status;

  // Member: roll_status
  cdr >> ros_message.roll_status;

  // Member: wrist_pitch_status
  cdr >> ros_message.wrist_pitch_status;

  // Member: wrist_roll_status
  cdr >> ros_message.wrist_roll_status;

  // Member: base_faults
  cdr >> ros_message.base_faults;

  // Member: shoulder_faults
  cdr >> ros_message.shoulder_faults;

  // Member: elbow_faults
  cdr >> ros_message.elbow_faults;

  // Member: roll_faults
  cdr >> ros_message.roll_faults;

  // Member: wrist_pitch_faults
  cdr >> ros_message.wrist_pitch_faults;

  // Member: wrist_roll_faults
  cdr >> ros_message.wrist_roll_faults;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rover_arm_interface
get_serialized_size(
  const rover_arm_interface::msg::ArmStatusMessage & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: base
  {
    size_t item_size = sizeof(ros_message.base);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: shoulder
  {
    size_t item_size = sizeof(ros_message.shoulder);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: elbow
  {
    size_t item_size = sizeof(ros_message.elbow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: roll
  {
    size_t item_size = sizeof(ros_message.roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wrist_pitch
  {
    size_t item_size = sizeof(ros_message.wrist_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wrist_roll
  {
    size_t item_size = sizeof(ros_message.wrist_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: base_comm_status
  {
    size_t item_size = sizeof(ros_message.base_comm_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: shoulder_comm_status
  {
    size_t item_size = sizeof(ros_message.shoulder_comm_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: elbow_comm_status
  {
    size_t item_size = sizeof(ros_message.elbow_comm_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: roll_comm_status
  {
    size_t item_size = sizeof(ros_message.roll_comm_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wrist_pitch_comm_status
  {
    size_t item_size = sizeof(ros_message.wrist_pitch_comm_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wrist_roll_comm_status
  {
    size_t item_size = sizeof(ros_message.wrist_roll_comm_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: base_status
  {
    size_t item_size = sizeof(ros_message.base_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: shoulder_status
  {
    size_t item_size = sizeof(ros_message.shoulder_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: elbow_status
  {
    size_t item_size = sizeof(ros_message.elbow_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: roll_status
  {
    size_t item_size = sizeof(ros_message.roll_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wrist_pitch_status
  {
    size_t item_size = sizeof(ros_message.wrist_pitch_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wrist_roll_status
  {
    size_t item_size = sizeof(ros_message.wrist_roll_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: base_faults
  {
    size_t item_size = sizeof(ros_message.base_faults);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: shoulder_faults
  {
    size_t item_size = sizeof(ros_message.shoulder_faults);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: elbow_faults
  {
    size_t item_size = sizeof(ros_message.elbow_faults);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: roll_faults
  {
    size_t item_size = sizeof(ros_message.roll_faults);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wrist_pitch_faults
  {
    size_t item_size = sizeof(ros_message.wrist_pitch_faults);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wrist_roll_faults
  {
    size_t item_size = sizeof(ros_message.wrist_roll_faults);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rover_arm_interface
max_serialized_size_ArmStatusMessage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: base
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: shoulder
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: elbow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: roll
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: wrist_pitch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: wrist_roll
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: base_comm_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: shoulder_comm_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: elbow_comm_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: roll_comm_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wrist_pitch_comm_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wrist_roll_comm_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: base_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: shoulder_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: elbow_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: roll_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wrist_pitch_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wrist_roll_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: base_faults
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: shoulder_faults
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: elbow_faults
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: roll_faults
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wrist_pitch_faults
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wrist_roll_faults
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _ArmStatusMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rover_arm_interface::msg::ArmStatusMessage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ArmStatusMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rover_arm_interface::msg::ArmStatusMessage *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ArmStatusMessage__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rover_arm_interface::msg::ArmStatusMessage *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ArmStatusMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ArmStatusMessage(full_bounded, 0);
}

static message_type_support_callbacks_t _ArmStatusMessage__callbacks = {
  "rover_arm_interface::msg",
  "ArmStatusMessage",
  _ArmStatusMessage__cdr_serialize,
  _ArmStatusMessage__cdr_deserialize,
  _ArmStatusMessage__get_serialized_size,
  _ArmStatusMessage__max_serialized_size
};

static rosidl_message_type_support_t _ArmStatusMessage__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ArmStatusMessage__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rover_arm_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rover_arm_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<rover_arm_interface::msg::ArmStatusMessage>()
{
  return &rover_arm_interface::msg::typesupport_fastrtps_cpp::_ArmStatusMessage__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rover_arm_interface, msg, ArmStatusMessage)() {
  return &rover_arm_interface::msg::typesupport_fastrtps_cpp::_ArmStatusMessage__handle;
}

#ifdef __cplusplus
}
#endif
