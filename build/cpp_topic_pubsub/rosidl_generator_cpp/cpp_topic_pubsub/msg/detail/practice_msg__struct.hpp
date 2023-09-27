// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cpp_topic_pubsub:msg/PracticeMsg.idl
// generated code does not contain a copyright notice

#ifndef CPP_TOPIC_PUBSUB__MSG__DETAIL__PRACTICE_MSG__STRUCT_HPP_
#define CPP_TOPIC_PUBSUB__MSG__DETAIL__PRACTICE_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__cpp_topic_pubsub__msg__PracticeMsg __attribute__((deprecated))
#else
# define DEPRECATED__cpp_topic_pubsub__msg__PracticeMsg __declspec(deprecated)
#endif

namespace cpp_topic_pubsub
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PracticeMsg_
{
  using Type = PracticeMsg_<ContainerAllocator>;

  explicit PracticeMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->product_type = 0;
      this->price = 0ul;
    }
  }

  explicit PracticeMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->product_type = 0;
      this->price = 0ul;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _product_type_type =
    uint8_t;
  _product_type_type product_type;
  using _price_type =
    uint32_t;
  _price_type price;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__product_type(
    const uint8_t & _arg)
  {
    this->product_type = _arg;
    return *this;
  }
  Type & set__price(
    const uint32_t & _arg)
  {
    this->price = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t PRODUCT_TYPE_GIN =
    0u;
  static constexpr uint8_t PRODUCT_TYPE_WHISKEY =
    1u;
  static constexpr uint8_t PRODUCT_TYPE_VODKA =
    2u;

  // pointer types
  using RawPtr =
    cpp_topic_pubsub::msg::PracticeMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const cpp_topic_pubsub::msg::PracticeMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cpp_topic_pubsub::msg::PracticeMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cpp_topic_pubsub::msg::PracticeMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cpp_topic_pubsub::msg::PracticeMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cpp_topic_pubsub::msg::PracticeMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cpp_topic_pubsub::msg::PracticeMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cpp_topic_pubsub::msg::PracticeMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cpp_topic_pubsub::msg::PracticeMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cpp_topic_pubsub::msg::PracticeMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cpp_topic_pubsub__msg__PracticeMsg
    std::shared_ptr<cpp_topic_pubsub::msg::PracticeMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cpp_topic_pubsub__msg__PracticeMsg
    std::shared_ptr<cpp_topic_pubsub::msg::PracticeMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PracticeMsg_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->product_type != other.product_type) {
      return false;
    }
    if (this->price != other.price) {
      return false;
    }
    return true;
  }
  bool operator!=(const PracticeMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PracticeMsg_

// alias to use template instance with default allocator
using PracticeMsg =
  cpp_topic_pubsub::msg::PracticeMsg_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PracticeMsg_<ContainerAllocator>::PRODUCT_TYPE_GIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PracticeMsg_<ContainerAllocator>::PRODUCT_TYPE_WHISKEY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PracticeMsg_<ContainerAllocator>::PRODUCT_TYPE_VODKA;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace cpp_topic_pubsub

#endif  // CPP_TOPIC_PUBSUB__MSG__DETAIL__PRACTICE_MSG__STRUCT_HPP_
