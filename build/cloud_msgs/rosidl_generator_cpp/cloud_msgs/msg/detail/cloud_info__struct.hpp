// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cloud_msgs:msg/CloudInfo.idl
// generated code does not contain a copyright notice

#ifndef CLOUD_MSGS__MSG__DETAIL__CLOUD_INFO__STRUCT_HPP_
#define CLOUD_MSGS__MSG__DETAIL__CLOUD_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cloud_msgs__msg__CloudInfo __attribute__((deprecated))
#else
# define DEPRECATED__cloud_msgs__msg__CloudInfo __declspec(deprecated)
#endif

namespace cloud_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CloudInfo_
{
  using Type = CloudInfo_<ContainerAllocator>;

  explicit CloudInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_orientation = 0.0f;
      this->end_orientation = 0.0f;
      this->orientation_diff = 0.0f;
    }
  }

  explicit CloudInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_orientation = 0.0f;
      this->end_orientation = 0.0f;
      this->orientation_diff = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _start_ring_index_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _start_ring_index_type start_ring_index;
  using _end_ring_index_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _end_ring_index_type end_ring_index;
  using _start_orientation_type =
    float;
  _start_orientation_type start_orientation;
  using _end_orientation_type =
    float;
  _end_orientation_type end_orientation;
  using _orientation_diff_type =
    float;
  _orientation_diff_type orientation_diff;
  using _segmented_cloud_ground_flag_type =
    std::vector<bool, typename ContainerAllocator::template rebind<bool>::other>;
  _segmented_cloud_ground_flag_type segmented_cloud_ground_flag;
  using _segmented_cloud_col_ind_type =
    std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other>;
  _segmented_cloud_col_ind_type segmented_cloud_col_ind;
  using _segmented_cloud_range_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _segmented_cloud_range_type segmented_cloud_range;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__start_ring_index(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->start_ring_index = _arg;
    return *this;
  }
  Type & set__end_ring_index(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->end_ring_index = _arg;
    return *this;
  }
  Type & set__start_orientation(
    const float & _arg)
  {
    this->start_orientation = _arg;
    return *this;
  }
  Type & set__end_orientation(
    const float & _arg)
  {
    this->end_orientation = _arg;
    return *this;
  }
  Type & set__orientation_diff(
    const float & _arg)
  {
    this->orientation_diff = _arg;
    return *this;
  }
  Type & set__segmented_cloud_ground_flag(
    const std::vector<bool, typename ContainerAllocator::template rebind<bool>::other> & _arg)
  {
    this->segmented_cloud_ground_flag = _arg;
    return *this;
  }
  Type & set__segmented_cloud_col_ind(
    const std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other> & _arg)
  {
    this->segmented_cloud_col_ind = _arg;
    return *this;
  }
  Type & set__segmented_cloud_range(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->segmented_cloud_range = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cloud_msgs::msg::CloudInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const cloud_msgs::msg::CloudInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cloud_msgs::msg::CloudInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cloud_msgs::msg::CloudInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cloud_msgs::msg::CloudInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cloud_msgs::msg::CloudInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cloud_msgs::msg::CloudInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cloud_msgs::msg::CloudInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cloud_msgs::msg::CloudInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cloud_msgs::msg::CloudInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cloud_msgs__msg__CloudInfo
    std::shared_ptr<cloud_msgs::msg::CloudInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cloud_msgs__msg__CloudInfo
    std::shared_ptr<cloud_msgs::msg::CloudInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CloudInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->start_ring_index != other.start_ring_index) {
      return false;
    }
    if (this->end_ring_index != other.end_ring_index) {
      return false;
    }
    if (this->start_orientation != other.start_orientation) {
      return false;
    }
    if (this->end_orientation != other.end_orientation) {
      return false;
    }
    if (this->orientation_diff != other.orientation_diff) {
      return false;
    }
    if (this->segmented_cloud_ground_flag != other.segmented_cloud_ground_flag) {
      return false;
    }
    if (this->segmented_cloud_col_ind != other.segmented_cloud_col_ind) {
      return false;
    }
    if (this->segmented_cloud_range != other.segmented_cloud_range) {
      return false;
    }
    return true;
  }
  bool operator!=(const CloudInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CloudInfo_

// alias to use template instance with default allocator
using CloudInfo =
  cloud_msgs::msg::CloudInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cloud_msgs

#endif  // CLOUD_MSGS__MSG__DETAIL__CLOUD_INFO__STRUCT_HPP_
