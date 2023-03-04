// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rover_arm_interface:msg/ArmStatusMessage.idl
// generated code does not contain a copyright notice

#ifndef ROVER_ARM_INTERFACE__MSG__DETAIL__ARM_STATUS_MESSAGE__BUILDER_HPP_
#define ROVER_ARM_INTERFACE__MSG__DETAIL__ARM_STATUS_MESSAGE__BUILDER_HPP_

#include "rover_arm_interface/msg/detail/arm_status_message__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rover_arm_interface
{

namespace msg
{

namespace builder
{

class Init_ArmStatusMessage_wrist_roll_faults
{
public:
  explicit Init_ArmStatusMessage_wrist_roll_faults(::rover_arm_interface::msg::ArmStatusMessage & msg)
  : msg_(msg)
  {}
  ::rover_arm_interface::msg::ArmStatusMessage wrist_roll_faults(::rover_arm_interface::msg::ArmStatusMessage::_wrist_roll_faults_type arg)
  {
    msg_.wrist_roll_faults = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rover_arm_interface::msg::ArmStatusMessage msg_;
};

class Init_ArmStatusMessage_wrist_pitch_faults
{
public:
  explicit Init_ArmStatusMessage_wrist_pitch_faults(::rover_arm_interface::msg::ArmStatusMessage & msg)
  : msg_(msg)
  {}
  Init_ArmStatusMessage_wrist_roll_faults wrist_pitch_faults(::rover_arm_interface::msg::ArmStatusMessage::_wrist_pitch_faults_type arg)
  {
    msg_.wrist_pitch_faults = std::move(arg);
    return Init_ArmStatusMessage_wrist_roll_faults(msg_);
  }

private:
  ::rover_arm_interface::msg::ArmStatusMessage msg_;
};

class Init_ArmStatusMessage_roll_faults
{
public:
  explicit Init_ArmStatusMessage_roll_faults(::rover_arm_interface::msg::ArmStatusMessage & msg)
  : msg_(msg)
  {}
  Init_ArmStatusMessage_wrist_pitch_faults roll_faults(::rover_arm_interface::msg::ArmStatusMessage::_roll_faults_type arg)
  {
    msg_.roll_faults = std::move(arg);
    return Init_ArmStatusMessage_wrist_pitch_faults(msg_);
  }

private:
  ::rover_arm_interface::msg::ArmStatusMessage msg_;
};

class Init_ArmStatusMessage_elbow_faults
{
public:
  explicit Init_ArmStatusMessage_elbow_faults(::rover_arm_interface::msg::ArmStatusMessage & msg)
  : msg_(msg)
  {}
  Init_ArmStatusMessage_roll_faults elbow_faults(::rover_arm_interface::msg::ArmStatusMessage::_elbow_faults_type arg)
  {
    msg_.elbow_faults = std::move(arg);
    return Init_ArmStatusMessage_roll_faults(msg_);
  }

private:
  ::rover_arm_interface::msg::ArmStatusMessage msg_;
};

class Init_ArmStatusMessage_shoulder_faults
{
public:
  explicit Init_ArmStatusMessage_shoulder_faults(::rover_arm_interface::msg::ArmStatusMessage & msg)
  : msg_(msg)
  {}
  Init_ArmStatusMessage_elbow_faults shoulder_faults(::rover_arm_interface::msg::ArmStatusMessage::_shoulder_faults_type arg)
  {
    msg_.shoulder_faults = std::move(arg);
    return Init_ArmStatusMessage_elbow_faults(msg_);
  }

private:
  ::rover_arm_interface::msg::ArmStatusMessage msg_;
};

class Init_ArmStatusMessage_base_faults
{
public:
  explicit Init_ArmStatusMessage_base_faults(::rover_arm_interface::msg::ArmStatusMessage & msg)
  : msg_(msg)
  {}
  Init_ArmStatusMessage_shoulder_faults base_faults(::rover_arm_interface::msg::ArmStatusMessage::_base_faults_type arg)
  {
    msg_.base_faults = std::move(arg);
    return Init_ArmStatusMessage_shoulder_faults(msg_);
  }

private:
  ::rover_arm_interface::msg::ArmStatusMessage msg_;
};

class Init_ArmStatusMessage_wrist_roll_status
{
public:
  explicit Init_ArmStatusMessage_wrist_roll_status(::rover_arm_interface::msg::ArmStatusMessage & msg)
  : msg_(msg)
  {}
  Init_ArmStatusMessage_base_faults wrist_roll_status(::rover_arm_interface::msg::ArmStatusMessage::_wrist_roll_status_type arg)
  {
    msg_.wrist_roll_status = std::move(arg);
    return Init_ArmStatusMessage_base_faults(msg_);
  }

private:
  ::rover_arm_interface::msg::ArmStatusMessage msg_;
};

class Init_ArmStatusMessage_wrist_pitch_status
{
public:
  explicit Init_ArmStatusMessage_wrist_pitch_status(::rover_arm_interface::msg::ArmStatusMessage & msg)
  : msg_(msg)
  {}
  Init_ArmStatusMessage_wrist_roll_status wrist_pitch_status(::rover_arm_interface::msg::ArmStatusMessage::_wrist_pitch_status_type arg)
  {
    msg_.wrist_pitch_status = std::move(arg);
    return Init_ArmStatusMessage_wrist_roll_status(msg_);
  }

private:
  ::rover_arm_interface::msg::ArmStatusMessage msg_;
};

class Init_ArmStatusMessage_roll_status
{
public:
  explicit Init_ArmStatusMessage_roll_status(::rover_arm_interface::msg::ArmStatusMessage & msg)
  : msg_(msg)
  {}
  Init_ArmStatusMessage_wrist_pitch_status roll_status(::rover_arm_interface::msg::ArmStatusMessage::_roll_status_type arg)
  {
    msg_.roll_status = std::move(arg);
    return Init_ArmStatusMessage_wrist_pitch_status(msg_);
  }

private:
  ::rover_arm_interface::msg::ArmStatusMessage msg_;
};

class Init_ArmStatusMessage_elbow_status
{
public:
  explicit Init_ArmStatusMessage_elbow_status(::rover_arm_interface::msg::ArmStatusMessage & msg)
  : msg_(msg)
  {}
  Init_ArmStatusMessage_roll_status elbow_status(::rover_arm_interface::msg::ArmStatusMessage::_elbow_status_type arg)
  {
    msg_.elbow_status = std::move(arg);
    return Init_ArmStatusMessage_roll_status(msg_);
  }

private:
  ::rover_arm_interface::msg::ArmStatusMessage msg_;
};

class Init_ArmStatusMessage_shoulder_status
{
public:
  explicit Init_ArmStatusMessage_shoulder_status(::rover_arm_interface::msg::ArmStatusMessage & msg)
  : msg_(msg)
  {}
  Init_ArmStatusMessage_elbow_status shoulder_status(::rover_arm_interface::msg::ArmStatusMessage::_shoulder_status_type arg)
  {
    msg_.shoulder_status = std::move(arg);
    return Init_ArmStatusMessage_elbow_status(msg_);
  }

private:
  ::rover_arm_interface::msg::ArmStatusMessage msg_;
};

class Init_ArmStatusMessage_base_status
{
public:
  explicit Init_ArmStatusMessage_base_status(::rover_arm_interface::msg::ArmStatusMessage & msg)
  : msg_(msg)
  {}
  Init_ArmStatusMessage_shoulder_status base_status(::rover_arm_interface::msg::ArmStatusMessage::_base_status_type arg)
  {
    msg_.base_status = std::move(arg);
    return Init_ArmStatusMessage_shoulder_status(msg_);
  }

private:
  ::rover_arm_interface::msg::ArmStatusMessage msg_;
};

class Init_ArmStatusMessage_wrist_roll_comm_status
{
public:
  explicit Init_ArmStatusMessage_wrist_roll_comm_status(::rover_arm_interface::msg::ArmStatusMessage & msg)
  : msg_(msg)
  {}
  Init_ArmStatusMessage_base_status wrist_roll_comm_status(::rover_arm_interface::msg::ArmStatusMessage::_wrist_roll_comm_status_type arg)
  {
    msg_.wrist_roll_comm_status = std::move(arg);
    return Init_ArmStatusMessage_base_status(msg_);
  }

private:
  ::rover_arm_interface::msg::ArmStatusMessage msg_;
};

class Init_ArmStatusMessage_wrist_pitch_comm_status
{
public:
  explicit Init_ArmStatusMessage_wrist_pitch_comm_status(::rover_arm_interface::msg::ArmStatusMessage & msg)
  : msg_(msg)
  {}
  Init_ArmStatusMessage_wrist_roll_comm_status wrist_pitch_comm_status(::rover_arm_interface::msg::ArmStatusMessage::_wrist_pitch_comm_status_type arg)
  {
    msg_.wrist_pitch_comm_status = std::move(arg);
    return Init_ArmStatusMessage_wrist_roll_comm_status(msg_);
  }

private:
  ::rover_arm_interface::msg::ArmStatusMessage msg_;
};

class Init_ArmStatusMessage_roll_comm_status
{
public:
  explicit Init_ArmStatusMessage_roll_comm_status(::rover_arm_interface::msg::ArmStatusMessage & msg)
  : msg_(msg)
  {}
  Init_ArmStatusMessage_wrist_pitch_comm_status roll_comm_status(::rover_arm_interface::msg::ArmStatusMessage::_roll_comm_status_type arg)
  {
    msg_.roll_comm_status = std::move(arg);
    return Init_ArmStatusMessage_wrist_pitch_comm_status(msg_);
  }

private:
  ::rover_arm_interface::msg::ArmStatusMessage msg_;
};

class Init_ArmStatusMessage_elbow_comm_status
{
public:
  explicit Init_ArmStatusMessage_elbow_comm_status(::rover_arm_interface::msg::ArmStatusMessage & msg)
  : msg_(msg)
  {}
  Init_ArmStatusMessage_roll_comm_status elbow_comm_status(::rover_arm_interface::msg::ArmStatusMessage::_elbow_comm_status_type arg)
  {
    msg_.elbow_comm_status = std::move(arg);
    return Init_ArmStatusMessage_roll_comm_status(msg_);
  }

private:
  ::rover_arm_interface::msg::ArmStatusMessage msg_;
};

class Init_ArmStatusMessage_shoulder_comm_status
{
public:
  explicit Init_ArmStatusMessage_shoulder_comm_status(::rover_arm_interface::msg::ArmStatusMessage & msg)
  : msg_(msg)
  {}
  Init_ArmStatusMessage_elbow_comm_status shoulder_comm_status(::rover_arm_interface::msg::ArmStatusMessage::_shoulder_comm_status_type arg)
  {
    msg_.shoulder_comm_status = std::move(arg);
    return Init_ArmStatusMessage_elbow_comm_status(msg_);
  }

private:
  ::rover_arm_interface::msg::ArmStatusMessage msg_;
};

class Init_ArmStatusMessage_base_comm_status
{
public:
  explicit Init_ArmStatusMessage_base_comm_status(::rover_arm_interface::msg::ArmStatusMessage & msg)
  : msg_(msg)
  {}
  Init_ArmStatusMessage_shoulder_comm_status base_comm_status(::rover_arm_interface::msg::ArmStatusMessage::_base_comm_status_type arg)
  {
    msg_.base_comm_status = std::move(arg);
    return Init_ArmStatusMessage_shoulder_comm_status(msg_);
  }

private:
  ::rover_arm_interface::msg::ArmStatusMessage msg_;
};

class Init_ArmStatusMessage_wrist_roll
{
public:
  explicit Init_ArmStatusMessage_wrist_roll(::rover_arm_interface::msg::ArmStatusMessage & msg)
  : msg_(msg)
  {}
  Init_ArmStatusMessage_base_comm_status wrist_roll(::rover_arm_interface::msg::ArmStatusMessage::_wrist_roll_type arg)
  {
    msg_.wrist_roll = std::move(arg);
    return Init_ArmStatusMessage_base_comm_status(msg_);
  }

private:
  ::rover_arm_interface::msg::ArmStatusMessage msg_;
};

class Init_ArmStatusMessage_wrist_pitch
{
public:
  explicit Init_ArmStatusMessage_wrist_pitch(::rover_arm_interface::msg::ArmStatusMessage & msg)
  : msg_(msg)
  {}
  Init_ArmStatusMessage_wrist_roll wrist_pitch(::rover_arm_interface::msg::ArmStatusMessage::_wrist_pitch_type arg)
  {
    msg_.wrist_pitch = std::move(arg);
    return Init_ArmStatusMessage_wrist_roll(msg_);
  }

private:
  ::rover_arm_interface::msg::ArmStatusMessage msg_;
};

class Init_ArmStatusMessage_roll
{
public:
  explicit Init_ArmStatusMessage_roll(::rover_arm_interface::msg::ArmStatusMessage & msg)
  : msg_(msg)
  {}
  Init_ArmStatusMessage_wrist_pitch roll(::rover_arm_interface::msg::ArmStatusMessage::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_ArmStatusMessage_wrist_pitch(msg_);
  }

private:
  ::rover_arm_interface::msg::ArmStatusMessage msg_;
};

class Init_ArmStatusMessage_elbow
{
public:
  explicit Init_ArmStatusMessage_elbow(::rover_arm_interface::msg::ArmStatusMessage & msg)
  : msg_(msg)
  {}
  Init_ArmStatusMessage_roll elbow(::rover_arm_interface::msg::ArmStatusMessage::_elbow_type arg)
  {
    msg_.elbow = std::move(arg);
    return Init_ArmStatusMessage_roll(msg_);
  }

private:
  ::rover_arm_interface::msg::ArmStatusMessage msg_;
};

class Init_ArmStatusMessage_shoulder
{
public:
  explicit Init_ArmStatusMessage_shoulder(::rover_arm_interface::msg::ArmStatusMessage & msg)
  : msg_(msg)
  {}
  Init_ArmStatusMessage_elbow shoulder(::rover_arm_interface::msg::ArmStatusMessage::_shoulder_type arg)
  {
    msg_.shoulder = std::move(arg);
    return Init_ArmStatusMessage_elbow(msg_);
  }

private:
  ::rover_arm_interface::msg::ArmStatusMessage msg_;
};

class Init_ArmStatusMessage_base
{
public:
  Init_ArmStatusMessage_base()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmStatusMessage_shoulder base(::rover_arm_interface::msg::ArmStatusMessage::_base_type arg)
  {
    msg_.base = std::move(arg);
    return Init_ArmStatusMessage_shoulder(msg_);
  }

private:
  ::rover_arm_interface::msg::ArmStatusMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rover_arm_interface::msg::ArmStatusMessage>()
{
  return rover_arm_interface::msg::builder::Init_ArmStatusMessage_base();
}

}  // namespace rover_arm_interface

#endif  // ROVER_ARM_INTERFACE__MSG__DETAIL__ARM_STATUS_MESSAGE__BUILDER_HPP_
