// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rover_arm_interface:msg/ArmControlMessage.idl
// generated code does not contain a copyright notice

#ifndef ROVER_ARM_INTERFACE__MSG__DETAIL__ARM_CONTROL_MESSAGE__BUILDER_HPP_
#define ROVER_ARM_INTERFACE__MSG__DETAIL__ARM_CONTROL_MESSAGE__BUILDER_HPP_

#include "rover_arm_interface/msg/detail/arm_control_message__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rover_arm_interface
{

namespace msg
{

namespace builder
{

class Init_ArmControlMessage_calibrate
{
public:
  explicit Init_ArmControlMessage_calibrate(::rover_arm_interface::msg::ArmControlMessage & msg)
  : msg_(msg)
  {}
  ::rover_arm_interface::msg::ArmControlMessage calibrate(::rover_arm_interface::msg::ArmControlMessage::_calibrate_type arg)
  {
    msg_.calibrate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rover_arm_interface::msg::ArmControlMessage msg_;
};

class Init_ArmControlMessage_reset_controllers
{
public:
  explicit Init_ArmControlMessage_reset_controllers(::rover_arm_interface::msg::ArmControlMessage & msg)
  : msg_(msg)
  {}
  Init_ArmControlMessage_calibrate reset_controllers(::rover_arm_interface::msg::ArmControlMessage::_reset_controllers_type arg)
  {
    msg_.reset_controllers = std::move(arg);
    return Init_ArmControlMessage_calibrate(msg_);
  }

private:
  ::rover_arm_interface::msg::ArmControlMessage msg_;
};

class Init_ArmControlMessage_clear_faults
{
public:
  explicit Init_ArmControlMessage_clear_faults(::rover_arm_interface::msg::ArmControlMessage & msg)
  : msg_(msg)
  {}
  Init_ArmControlMessage_reset_controllers clear_faults(::rover_arm_interface::msg::ArmControlMessage::_clear_faults_type arg)
  {
    msg_.clear_faults = std::move(arg);
    return Init_ArmControlMessage_reset_controllers(msg_);
  }

private:
  ::rover_arm_interface::msg::ArmControlMessage msg_;
};

class Init_ArmControlMessage_wrist_roll
{
public:
  explicit Init_ArmControlMessage_wrist_roll(::rover_arm_interface::msg::ArmControlMessage & msg)
  : msg_(msg)
  {}
  Init_ArmControlMessage_clear_faults wrist_roll(::rover_arm_interface::msg::ArmControlMessage::_wrist_roll_type arg)
  {
    msg_.wrist_roll = std::move(arg);
    return Init_ArmControlMessage_clear_faults(msg_);
  }

private:
  ::rover_arm_interface::msg::ArmControlMessage msg_;
};

class Init_ArmControlMessage_wrist_pitch
{
public:
  explicit Init_ArmControlMessage_wrist_pitch(::rover_arm_interface::msg::ArmControlMessage & msg)
  : msg_(msg)
  {}
  Init_ArmControlMessage_wrist_roll wrist_pitch(::rover_arm_interface::msg::ArmControlMessage::_wrist_pitch_type arg)
  {
    msg_.wrist_pitch = std::move(arg);
    return Init_ArmControlMessage_wrist_roll(msg_);
  }

private:
  ::rover_arm_interface::msg::ArmControlMessage msg_;
};

class Init_ArmControlMessage_roll
{
public:
  explicit Init_ArmControlMessage_roll(::rover_arm_interface::msg::ArmControlMessage & msg)
  : msg_(msg)
  {}
  Init_ArmControlMessage_wrist_pitch roll(::rover_arm_interface::msg::ArmControlMessage::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_ArmControlMessage_wrist_pitch(msg_);
  }

private:
  ::rover_arm_interface::msg::ArmControlMessage msg_;
};

class Init_ArmControlMessage_elbow
{
public:
  explicit Init_ArmControlMessage_elbow(::rover_arm_interface::msg::ArmControlMessage & msg)
  : msg_(msg)
  {}
  Init_ArmControlMessage_roll elbow(::rover_arm_interface::msg::ArmControlMessage::_elbow_type arg)
  {
    msg_.elbow = std::move(arg);
    return Init_ArmControlMessage_roll(msg_);
  }

private:
  ::rover_arm_interface::msg::ArmControlMessage msg_;
};

class Init_ArmControlMessage_shoulder
{
public:
  explicit Init_ArmControlMessage_shoulder(::rover_arm_interface::msg::ArmControlMessage & msg)
  : msg_(msg)
  {}
  Init_ArmControlMessage_elbow shoulder(::rover_arm_interface::msg::ArmControlMessage::_shoulder_type arg)
  {
    msg_.shoulder = std::move(arg);
    return Init_ArmControlMessage_elbow(msg_);
  }

private:
  ::rover_arm_interface::msg::ArmControlMessage msg_;
};

class Init_ArmControlMessage_base
{
public:
  Init_ArmControlMessage_base()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmControlMessage_shoulder base(::rover_arm_interface::msg::ArmControlMessage::_base_type arg)
  {
    msg_.base = std::move(arg);
    return Init_ArmControlMessage_shoulder(msg_);
  }

private:
  ::rover_arm_interface::msg::ArmControlMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rover_arm_interface::msg::ArmControlMessage>()
{
  return rover_arm_interface::msg::builder::Init_ArmControlMessage_base();
}

}  // namespace rover_arm_interface

#endif  // ROVER_ARM_INTERFACE__MSG__DETAIL__ARM_CONTROL_MESSAGE__BUILDER_HPP_
