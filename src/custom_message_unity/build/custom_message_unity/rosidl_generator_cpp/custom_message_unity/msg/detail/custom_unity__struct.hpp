// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_message_unity:msg/CustomUnity.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGE_UNITY__MSG__DETAIL__CUSTOM_UNITY__STRUCT_HPP_
#define CUSTOM_MESSAGE_UNITY__MSG__DETAIL__CUSTOM_UNITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_message_unity__msg__CustomUnity __attribute__((deprecated))
#else
# define DEPRECATED__custom_message_unity__msg__CustomUnity __declspec(deprecated)
#endif

namespace custom_message_unity
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CustomUnity_
{
  using Type = CustomUnity_<ContainerAllocator>;

  explicit CustomUnity_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->f1 = 0.0;
      this->f2 = 0.0;
      this->f3 = 0.0;
    }
  }

  explicit CustomUnity_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->f1 = 0.0;
      this->f2 = 0.0;
      this->f3 = 0.0;
    }
  }

  // field types and members
  using _f1_type =
    double;
  _f1_type f1;
  using _f2_type =
    double;
  _f2_type f2;
  using _f3_type =
    double;
  _f3_type f3;

  // setters for named parameter idiom
  Type & set__f1(
    const double & _arg)
  {
    this->f1 = _arg;
    return *this;
  }
  Type & set__f2(
    const double & _arg)
  {
    this->f2 = _arg;
    return *this;
  }
  Type & set__f3(
    const double & _arg)
  {
    this->f3 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_message_unity::msg::CustomUnity_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_message_unity::msg::CustomUnity_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_message_unity::msg::CustomUnity_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_message_unity::msg::CustomUnity_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_message_unity::msg::CustomUnity_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_message_unity::msg::CustomUnity_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_message_unity::msg::CustomUnity_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_message_unity::msg::CustomUnity_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_message_unity::msg::CustomUnity_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_message_unity::msg::CustomUnity_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_message_unity__msg__CustomUnity
    std::shared_ptr<custom_message_unity::msg::CustomUnity_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_message_unity__msg__CustomUnity
    std::shared_ptr<custom_message_unity::msg::CustomUnity_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CustomUnity_ & other) const
  {
    if (this->f1 != other.f1) {
      return false;
    }
    if (this->f2 != other.f2) {
      return false;
    }
    if (this->f3 != other.f3) {
      return false;
    }
    return true;
  }
  bool operator!=(const CustomUnity_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CustomUnity_

// alias to use template instance with default allocator
using CustomUnity =
  custom_message_unity::msg::CustomUnity_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_message_unity

#endif  // CUSTOM_MESSAGE_UNITY__MSG__DETAIL__CUSTOM_UNITY__STRUCT_HPP_
