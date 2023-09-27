// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cpp_server_client:srv/PracticeSrv.idl
// generated code does not contain a copyright notice

#ifndef CPP_SERVER_CLIENT__SRV__DETAIL__PRACTICE_SRV__STRUCT_HPP_
#define CPP_SERVER_CLIENT__SRV__DETAIL__PRACTICE_SRV__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__cpp_server_client__srv__PracticeSrv_Request __attribute__((deprecated))
#else
# define DEPRECATED__cpp_server_client__srv__PracticeSrv_Request __declspec(deprecated)
#endif

namespace cpp_server_client
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PracticeSrv_Request_
{
  using Type = PracticeSrv_Request_<ContainerAllocator>;

  explicit PracticeSrv_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0ll;
      this->b = 0ll;
    }
  }

  explicit PracticeSrv_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0ll;
      this->b = 0ll;
    }
  }

  // field types and members
  using _num_vector_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _num_vector_type num_vector;
  using _a_type =
    int64_t;
  _a_type a;
  using _b_type =
    int64_t;
  _b_type b;

  // setters for named parameter idiom
  Type & set__num_vector(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->num_vector = _arg;
    return *this;
  }
  Type & set__a(
    const int64_t & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const int64_t & _arg)
  {
    this->b = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cpp_server_client::srv::PracticeSrv_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cpp_server_client::srv::PracticeSrv_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cpp_server_client::srv::PracticeSrv_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cpp_server_client::srv::PracticeSrv_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cpp_server_client::srv::PracticeSrv_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cpp_server_client::srv::PracticeSrv_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cpp_server_client::srv::PracticeSrv_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cpp_server_client::srv::PracticeSrv_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cpp_server_client::srv::PracticeSrv_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cpp_server_client::srv::PracticeSrv_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cpp_server_client__srv__PracticeSrv_Request
    std::shared_ptr<cpp_server_client::srv::PracticeSrv_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cpp_server_client__srv__PracticeSrv_Request
    std::shared_ptr<cpp_server_client::srv::PracticeSrv_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PracticeSrv_Request_ & other) const
  {
    if (this->num_vector != other.num_vector) {
      return false;
    }
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    return true;
  }
  bool operator!=(const PracticeSrv_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PracticeSrv_Request_

// alias to use template instance with default allocator
using PracticeSrv_Request =
  cpp_server_client::srv::PracticeSrv_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cpp_server_client


#ifndef _WIN32
# define DEPRECATED__cpp_server_client__srv__PracticeSrv_Response __attribute__((deprecated))
#else
# define DEPRECATED__cpp_server_client__srv__PracticeSrv_Response __declspec(deprecated)
#endif

namespace cpp_server_client
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PracticeSrv_Response_
{
  using Type = PracticeSrv_Response_<ContainerAllocator>;

  explicit PracticeSrv_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cumulative_sum = 0ll;
    }
  }

  explicit PracticeSrv_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cumulative_sum = 0ll;
    }
  }

  // field types and members
  using _cumulative_sum_type =
    int64_t;
  _cumulative_sum_type cumulative_sum;

  // setters for named parameter idiom
  Type & set__cumulative_sum(
    const int64_t & _arg)
  {
    this->cumulative_sum = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cpp_server_client::srv::PracticeSrv_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cpp_server_client::srv::PracticeSrv_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cpp_server_client::srv::PracticeSrv_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cpp_server_client::srv::PracticeSrv_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cpp_server_client::srv::PracticeSrv_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cpp_server_client::srv::PracticeSrv_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cpp_server_client::srv::PracticeSrv_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cpp_server_client::srv::PracticeSrv_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cpp_server_client::srv::PracticeSrv_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cpp_server_client::srv::PracticeSrv_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cpp_server_client__srv__PracticeSrv_Response
    std::shared_ptr<cpp_server_client::srv::PracticeSrv_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cpp_server_client__srv__PracticeSrv_Response
    std::shared_ptr<cpp_server_client::srv::PracticeSrv_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PracticeSrv_Response_ & other) const
  {
    if (this->cumulative_sum != other.cumulative_sum) {
      return false;
    }
    return true;
  }
  bool operator!=(const PracticeSrv_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PracticeSrv_Response_

// alias to use template instance with default allocator
using PracticeSrv_Response =
  cpp_server_client::srv::PracticeSrv_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cpp_server_client

namespace cpp_server_client
{

namespace srv
{

struct PracticeSrv
{
  using Request = cpp_server_client::srv::PracticeSrv_Request;
  using Response = cpp_server_client::srv::PracticeSrv_Response;
};

}  // namespace srv

}  // namespace cpp_server_client

#endif  // CPP_SERVER_CLIENT__SRV__DETAIL__PRACTICE_SRV__STRUCT_HPP_
