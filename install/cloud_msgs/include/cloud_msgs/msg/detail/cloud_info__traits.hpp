// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cloud_msgs:msg/CloudInfo.idl
// generated code does not contain a copyright notice

#ifndef CLOUD_MSGS__MSG__DETAIL__CLOUD_INFO__TRAITS_HPP_
#define CLOUD_MSGS__MSG__DETAIL__CLOUD_INFO__TRAITS_HPP_

#include "cloud_msgs/msg/detail/cloud_info__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cloud_msgs::msg::CloudInfo>()
{
  return "cloud_msgs::msg::CloudInfo";
}

template<>
inline const char * name<cloud_msgs::msg::CloudInfo>()
{
  return "cloud_msgs/msg/CloudInfo";
}

template<>
struct has_fixed_size<cloud_msgs::msg::CloudInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cloud_msgs::msg::CloudInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cloud_msgs::msg::CloudInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CLOUD_MSGS__MSG__DETAIL__CLOUD_INFO__TRAITS_HPP_
