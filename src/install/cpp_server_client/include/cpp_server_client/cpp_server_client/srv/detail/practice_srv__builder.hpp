// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cpp_server_client:srv/PracticeSrv.idl
// generated code does not contain a copyright notice

#ifndef CPP_SERVER_CLIENT__SRV__DETAIL__PRACTICE_SRV__BUILDER_HPP_
#define CPP_SERVER_CLIENT__SRV__DETAIL__PRACTICE_SRV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cpp_server_client/srv/detail/practice_srv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cpp_server_client
{

namespace srv
{

namespace builder
{

class Init_PracticeSrv_Request_b
{
public:
  explicit Init_PracticeSrv_Request_b(::cpp_server_client::srv::PracticeSrv_Request & msg)
  : msg_(msg)
  {}
  ::cpp_server_client::srv::PracticeSrv_Request b(::cpp_server_client::srv::PracticeSrv_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cpp_server_client::srv::PracticeSrv_Request msg_;
};

class Init_PracticeSrv_Request_a
{
public:
  explicit Init_PracticeSrv_Request_a(::cpp_server_client::srv::PracticeSrv_Request & msg)
  : msg_(msg)
  {}
  Init_PracticeSrv_Request_b a(::cpp_server_client::srv::PracticeSrv_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_PracticeSrv_Request_b(msg_);
  }

private:
  ::cpp_server_client::srv::PracticeSrv_Request msg_;
};

class Init_PracticeSrv_Request_num_vector
{
public:
  Init_PracticeSrv_Request_num_vector()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PracticeSrv_Request_a num_vector(::cpp_server_client::srv::PracticeSrv_Request::_num_vector_type arg)
  {
    msg_.num_vector = std::move(arg);
    return Init_PracticeSrv_Request_a(msg_);
  }

private:
  ::cpp_server_client::srv::PracticeSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cpp_server_client::srv::PracticeSrv_Request>()
{
  return cpp_server_client::srv::builder::Init_PracticeSrv_Request_num_vector();
}

}  // namespace cpp_server_client


namespace cpp_server_client
{

namespace srv
{

namespace builder
{

class Init_PracticeSrv_Response_cumulative_sum
{
public:
  Init_PracticeSrv_Response_cumulative_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cpp_server_client::srv::PracticeSrv_Response cumulative_sum(::cpp_server_client::srv::PracticeSrv_Response::_cumulative_sum_type arg)
  {
    msg_.cumulative_sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cpp_server_client::srv::PracticeSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cpp_server_client::srv::PracticeSrv_Response>()
{
  return cpp_server_client::srv::builder::Init_PracticeSrv_Response_cumulative_sum();
}

}  // namespace cpp_server_client

#endif  // CPP_SERVER_CLIENT__SRV__DETAIL__PRACTICE_SRV__BUILDER_HPP_
