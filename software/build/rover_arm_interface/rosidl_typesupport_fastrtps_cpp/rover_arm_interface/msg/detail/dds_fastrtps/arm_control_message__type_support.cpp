// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rover_arm_interface:msg/ArmControlMessage.idl
// generated code does not contain a copyright notice
#include "rover_arm_interface/msg/detail/arm_control_message__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rover_arm_interface/msg/detail/arm_control_message__struct.hpp"

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
  const rover_arm_interface::msg::ArmControlMessage & ros_message,
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
  // Member: clear_faults
  cdr << (ros_message.clear_faults ? true : false);
  // Member: reset_controllers
  cdr << (ros_message.reset_controllers ? true : false);
  // Member: calibrate
  cdr << (ros_message.calibrate ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rover_arm_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rover_arm_interface::msg::ArmControlMessage & ros_message)
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

  // Member: clear_faults
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.clear_faults = tmp ? true : false;
  }

  // Member: reset_controllers
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.reset_controllers = tmp ? true : false;
  }

  // Member: calibrate
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.calibrate = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rover_arm_interface
get_serialized_size(
  const rover_arm_interface::msg::ArmControlMessage & ros_message,
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
  // Member: clear_faults
  {
    size_t item_size = sizeof(ros_message.clear_faults);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reset_controllers
  {
    size_t item_size = sizeof(ros_message.reset_controllers);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: calibrate
  {
    size_t item_size = sizeof(ros_message.calibrate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rover_arm_interface
max_serialized_size_ArmControlMessage(
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

  // Member: clear_faults
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reset_controllers
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: calibrate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _ArmControlMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rover_arm_interface::msg::ArmControlMessage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ArmControlMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rover_arm_interface::msg::ArmControlMessage *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ArmControlMessage__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rover_arm_interface::msg::ArmControlMessage *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ArmControlMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ArmControlMessage(full_bounded, 0);
}

static message_type_support_callbacks_t _ArmControlMessage__callbacks = {
  "rover_arm_interface::msg",
  "ArmControlMessage",
  _ArmControlMessage__cdr_serialize,
  _ArmControlMessage__cdr_deserialize,
  _ArmControlMessage__get_serialized_size,
  _ArmControlMessage__max_serialized_size
};

static rosidl_message_type_support_t _ArmControlMessage__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ArmControlMessage__callbacks,
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
get_message_type_support_handle<rover_arm_interface::msg::ArmControlMessage>()
{
  return &rover_arm_interface::msg::typesupport_fastrtps_cpp::_ArmControlMessage__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rover_arm_interface, msg, ArmControlMessage)() {
  return &rover_arm_interface::msg::typesupport_fastrtps_cpp::_ArmControlMessage__handle;
}

#ifdef __cplusplus
}
#endif
