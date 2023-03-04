// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rover_arm_interface:msg/ArmControlMessage.idl
// generated code does not contain a copyright notice

#ifndef ROVER_ARM_INTERFACE__MSG__DETAIL__ARM_CONTROL_MESSAGE__STRUCT_HPP_
#define ROVER_ARM_INTERFACE__MSG__DETAIL__ARM_CONTROL_MESSAGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__rover_arm_interface__msg__ArmControlMessage __attribute__((deprecated))
#else
# define DEPRECATED__rover_arm_interface__msg__ArmControlMessage __declspec(deprecated)
#endif

namespace rover_arm_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArmControlMessage_
{
  using Type = ArmControlMessage_<ContainerAllocator>;

  explicit ArmControlMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->base = 0.0;
      this->shoulder = 0.0;
      this->elbow = 0.0;
      this->roll = 0.0;
      this->wrist_pitch = 0.0;
      this->wrist_roll = 0.0;
      this->clear_faults = false;
      this->reset_controllers = false;
      this->calibrate = false;
    }
  }

  explicit ArmControlMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->base = 0.0;
      this->shoulder = 0.0;
      this->elbow = 0.0;
      this->roll = 0.0;
      this->wrist_pitch = 0.0;
      this->wrist_roll = 0.0;
      this->clear_faults = false;
      this->reset_controllers = false;
      this->calibrate = false;
    }
  }

  // field types and members
  using _base_type =
    double;
  _base_type base;
  using _shoulder_type =
    double;
  _shoulder_type shoulder;
  using _elbow_type =
    double;
  _elbow_type elbow;
  using _roll_type =
    double;
  _roll_type roll;
  using _wrist_pitch_type =
    double;
  _wrist_pitch_type wrist_pitch;
  using _wrist_roll_type =
    double;
  _wrist_roll_type wrist_roll;
  using _clear_faults_type =
    bool;
  _clear_faults_type clear_faults;
  using _reset_controllers_type =
    bool;
  _reset_controllers_type reset_controllers;
  using _calibrate_type =
    bool;
  _calibrate_type calibrate;

  // setters for named parameter idiom
  Type & set__base(
    const double & _arg)
  {
    this->base = _arg;
    return *this;
  }
  Type & set__shoulder(
    const double & _arg)
  {
    this->shoulder = _arg;
    return *this;
  }
  Type & set__elbow(
    const double & _arg)
  {
    this->elbow = _arg;
    return *this;
  }
  Type & set__roll(
    const double & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__wrist_pitch(
    const double & _arg)
  {
    this->wrist_pitch = _arg;
    return *this;
  }
  Type & set__wrist_roll(
    const double & _arg)
  {
    this->wrist_roll = _arg;
    return *this;
  }
  Type & set__clear_faults(
    const bool & _arg)
  {
    this->clear_faults = _arg;
    return *this;
  }
  Type & set__reset_controllers(
    const bool & _arg)
  {
    this->reset_controllers = _arg;
    return *this;
  }
  Type & set__calibrate(
    const bool & _arg)
  {
    this->calibrate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rover_arm_interface::msg::ArmControlMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const rover_arm_interface::msg::ArmControlMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rover_arm_interface::msg::ArmControlMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rover_arm_interface::msg::ArmControlMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rover_arm_interface::msg::ArmControlMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rover_arm_interface::msg::ArmControlMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rover_arm_interface::msg::ArmControlMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rover_arm_interface::msg::ArmControlMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rover_arm_interface::msg::ArmControlMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rover_arm_interface::msg::ArmControlMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rover_arm_interface__msg__ArmControlMessage
    std::shared_ptr<rover_arm_interface::msg::ArmControlMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rover_arm_interface__msg__ArmControlMessage
    std::shared_ptr<rover_arm_interface::msg::ArmControlMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmControlMessage_ & other) const
  {
    if (this->base != other.base) {
      return false;
    }
    if (this->shoulder != other.shoulder) {
      return false;
    }
    if (this->elbow != other.elbow) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->wrist_pitch != other.wrist_pitch) {
      return false;
    }
    if (this->wrist_roll != other.wrist_roll) {
      return false;
    }
    if (this->clear_faults != other.clear_faults) {
      return false;
    }
    if (this->reset_controllers != other.reset_controllers) {
      return false;
    }
    if (this->calibrate != other.calibrate) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmControlMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmControlMessage_

// alias to use template instance with default allocator
using ArmControlMessage =
  rover_arm_interface::msg::ArmControlMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rover_arm_interface

#endif  // ROVER_ARM_INTERFACE__MSG__DETAIL__ARM_CONTROL_MESSAGE__STRUCT_HPP_
