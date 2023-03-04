// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rover_arm_interface:msg/ArmControlMessage.idl
// generated code does not contain a copyright notice

#ifndef ROVER_ARM_INTERFACE__MSG__DETAIL__ARM_CONTROL_MESSAGE__TRAITS_HPP_
#define ROVER_ARM_INTERFACE__MSG__DETAIL__ARM_CONTROL_MESSAGE__TRAITS_HPP_

#include "rover_arm_interface/msg/detail/arm_control_message__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rover_arm_interface::msg::ArmControlMessage>()
{
  return "rover_arm_interface::msg::ArmControlMessage";
}

template<>
inline const char * name<rover_arm_interface::msg::ArmControlMessage>()
{
  return "rover_arm_interface/msg/ArmControlMessage";
}

template<>
struct has_fixed_size<rover_arm_interface::msg::ArmControlMessage>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rover_arm_interface::msg::ArmControlMessage>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rover_arm_interface::msg::ArmControlMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROVER_ARM_INTERFACE__MSG__DETAIL__ARM_CONTROL_MESSAGE__TRAITS_HPP_
