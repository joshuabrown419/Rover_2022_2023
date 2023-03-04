// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rover_arm_interface:msg/ArmStatusMessage.idl
// generated code does not contain a copyright notice

#ifndef ROVER_ARM_INTERFACE__MSG__DETAIL__ARM_STATUS_MESSAGE__STRUCT_HPP_
#define ROVER_ARM_INTERFACE__MSG__DETAIL__ARM_STATUS_MESSAGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__rover_arm_interface__msg__ArmStatusMessage __attribute__((deprecated))
#else
# define DEPRECATED__rover_arm_interface__msg__ArmStatusMessage __declspec(deprecated)
#endif

namespace rover_arm_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArmStatusMessage_
{
  using Type = ArmStatusMessage_<ContainerAllocator>;

  explicit ArmStatusMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
      this->base_comm_status = 0l;
      this->shoulder_comm_status = 0l;
      this->elbow_comm_status = 0l;
      this->roll_comm_status = 0l;
      this->wrist_pitch_comm_status = 0l;
      this->wrist_roll_comm_status = 0l;
      this->base_status = 0l;
      this->shoulder_status = 0l;
      this->elbow_status = 0l;
      this->roll_status = 0l;
      this->wrist_pitch_status = 0l;
      this->wrist_roll_status = 0l;
      this->base_faults = 0l;
      this->shoulder_faults = 0l;
      this->elbow_faults = 0l;
      this->roll_faults = 0l;
      this->wrist_pitch_faults = 0l;
      this->wrist_roll_faults = 0l;
    }
  }

  explicit ArmStatusMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
      this->base_comm_status = 0l;
      this->shoulder_comm_status = 0l;
      this->elbow_comm_status = 0l;
      this->roll_comm_status = 0l;
      this->wrist_pitch_comm_status = 0l;
      this->wrist_roll_comm_status = 0l;
      this->base_status = 0l;
      this->shoulder_status = 0l;
      this->elbow_status = 0l;
      this->roll_status = 0l;
      this->wrist_pitch_status = 0l;
      this->wrist_roll_status = 0l;
      this->base_faults = 0l;
      this->shoulder_faults = 0l;
      this->elbow_faults = 0l;
      this->roll_faults = 0l;
      this->wrist_pitch_faults = 0l;
      this->wrist_roll_faults = 0l;
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
  using _base_comm_status_type =
    int32_t;
  _base_comm_status_type base_comm_status;
  using _shoulder_comm_status_type =
    int32_t;
  _shoulder_comm_status_type shoulder_comm_status;
  using _elbow_comm_status_type =
    int32_t;
  _elbow_comm_status_type elbow_comm_status;
  using _roll_comm_status_type =
    int32_t;
  _roll_comm_status_type roll_comm_status;
  using _wrist_pitch_comm_status_type =
    int32_t;
  _wrist_pitch_comm_status_type wrist_pitch_comm_status;
  using _wrist_roll_comm_status_type =
    int32_t;
  _wrist_roll_comm_status_type wrist_roll_comm_status;
  using _base_status_type =
    int32_t;
  _base_status_type base_status;
  using _shoulder_status_type =
    int32_t;
  _shoulder_status_type shoulder_status;
  using _elbow_status_type =
    int32_t;
  _elbow_status_type elbow_status;
  using _roll_status_type =
    int32_t;
  _roll_status_type roll_status;
  using _wrist_pitch_status_type =
    int32_t;
  _wrist_pitch_status_type wrist_pitch_status;
  using _wrist_roll_status_type =
    int32_t;
  _wrist_roll_status_type wrist_roll_status;
  using _base_faults_type =
    int32_t;
  _base_faults_type base_faults;
  using _shoulder_faults_type =
    int32_t;
  _shoulder_faults_type shoulder_faults;
  using _elbow_faults_type =
    int32_t;
  _elbow_faults_type elbow_faults;
  using _roll_faults_type =
    int32_t;
  _roll_faults_type roll_faults;
  using _wrist_pitch_faults_type =
    int32_t;
  _wrist_pitch_faults_type wrist_pitch_faults;
  using _wrist_roll_faults_type =
    int32_t;
  _wrist_roll_faults_type wrist_roll_faults;

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
  Type & set__base_comm_status(
    const int32_t & _arg)
  {
    this->base_comm_status = _arg;
    return *this;
  }
  Type & set__shoulder_comm_status(
    const int32_t & _arg)
  {
    this->shoulder_comm_status = _arg;
    return *this;
  }
  Type & set__elbow_comm_status(
    const int32_t & _arg)
  {
    this->elbow_comm_status = _arg;
    return *this;
  }
  Type & set__roll_comm_status(
    const int32_t & _arg)
  {
    this->roll_comm_status = _arg;
    return *this;
  }
  Type & set__wrist_pitch_comm_status(
    const int32_t & _arg)
  {
    this->wrist_pitch_comm_status = _arg;
    return *this;
  }
  Type & set__wrist_roll_comm_status(
    const int32_t & _arg)
  {
    this->wrist_roll_comm_status = _arg;
    return *this;
  }
  Type & set__base_status(
    const int32_t & _arg)
  {
    this->base_status = _arg;
    return *this;
  }
  Type & set__shoulder_status(
    const int32_t & _arg)
  {
    this->shoulder_status = _arg;
    return *this;
  }
  Type & set__elbow_status(
    const int32_t & _arg)
  {
    this->elbow_status = _arg;
    return *this;
  }
  Type & set__roll_status(
    const int32_t & _arg)
  {
    this->roll_status = _arg;
    return *this;
  }
  Type & set__wrist_pitch_status(
    const int32_t & _arg)
  {
    this->wrist_pitch_status = _arg;
    return *this;
  }
  Type & set__wrist_roll_status(
    const int32_t & _arg)
  {
    this->wrist_roll_status = _arg;
    return *this;
  }
  Type & set__base_faults(
    const int32_t & _arg)
  {
    this->base_faults = _arg;
    return *this;
  }
  Type & set__shoulder_faults(
    const int32_t & _arg)
  {
    this->shoulder_faults = _arg;
    return *this;
  }
  Type & set__elbow_faults(
    const int32_t & _arg)
  {
    this->elbow_faults = _arg;
    return *this;
  }
  Type & set__roll_faults(
    const int32_t & _arg)
  {
    this->roll_faults = _arg;
    return *this;
  }
  Type & set__wrist_pitch_faults(
    const int32_t & _arg)
  {
    this->wrist_pitch_faults = _arg;
    return *this;
  }
  Type & set__wrist_roll_faults(
    const int32_t & _arg)
  {
    this->wrist_roll_faults = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rover_arm_interface::msg::ArmStatusMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const rover_arm_interface::msg::ArmStatusMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rover_arm_interface::msg::ArmStatusMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rover_arm_interface::msg::ArmStatusMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rover_arm_interface::msg::ArmStatusMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rover_arm_interface::msg::ArmStatusMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rover_arm_interface::msg::ArmStatusMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rover_arm_interface::msg::ArmStatusMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rover_arm_interface::msg::ArmStatusMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rover_arm_interface::msg::ArmStatusMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rover_arm_interface__msg__ArmStatusMessage
    std::shared_ptr<rover_arm_interface::msg::ArmStatusMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rover_arm_interface__msg__ArmStatusMessage
    std::shared_ptr<rover_arm_interface::msg::ArmStatusMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmStatusMessage_ & other) const
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
    if (this->base_comm_status != other.base_comm_status) {
      return false;
    }
    if (this->shoulder_comm_status != other.shoulder_comm_status) {
      return false;
    }
    if (this->elbow_comm_status != other.elbow_comm_status) {
      return false;
    }
    if (this->roll_comm_status != other.roll_comm_status) {
      return false;
    }
    if (this->wrist_pitch_comm_status != other.wrist_pitch_comm_status) {
      return false;
    }
    if (this->wrist_roll_comm_status != other.wrist_roll_comm_status) {
      return false;
    }
    if (this->base_status != other.base_status) {
      return false;
    }
    if (this->shoulder_status != other.shoulder_status) {
      return false;
    }
    if (this->elbow_status != other.elbow_status) {
      return false;
    }
    if (this->roll_status != other.roll_status) {
      return false;
    }
    if (this->wrist_pitch_status != other.wrist_pitch_status) {
      return false;
    }
    if (this->wrist_roll_status != other.wrist_roll_status) {
      return false;
    }
    if (this->base_faults != other.base_faults) {
      return false;
    }
    if (this->shoulder_faults != other.shoulder_faults) {
      return false;
    }
    if (this->elbow_faults != other.elbow_faults) {
      return false;
    }
    if (this->roll_faults != other.roll_faults) {
      return false;
    }
    if (this->wrist_pitch_faults != other.wrist_pitch_faults) {
      return false;
    }
    if (this->wrist_roll_faults != other.wrist_roll_faults) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmStatusMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmStatusMessage_

// alias to use template instance with default allocator
using ArmStatusMessage =
  rover_arm_interface::msg::ArmStatusMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rover_arm_interface

#endif  // ROVER_ARM_INTERFACE__MSG__DETAIL__ARM_STATUS_MESSAGE__STRUCT_HPP_
