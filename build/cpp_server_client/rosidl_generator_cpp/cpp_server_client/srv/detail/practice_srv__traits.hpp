// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cpp_server_client:srv/PracticeSrv.idl
// generated code does not contain a copyright notice

#ifndef CPP_SERVER_CLIENT__SRV__DETAIL__PRACTICE_SRV__TRAITS_HPP_
#define CPP_SERVER_CLIENT__SRV__DETAIL__PRACTICE_SRV__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cpp_server_client/srv/detail/practice_srv__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace cpp_server_client
{

namespace srv
{

inline void to_flow_style_yaml(
  const PracticeSrv_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: num_vector
  {
    if (msg.num_vector.size() == 0) {
      out << "num_vector: []";
    } else {
      out << "num_vector: [";
      size_t pending_items = msg.num_vector.size();
      for (auto item : msg.num_vector) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PracticeSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num_vector
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.num_vector.size() == 0) {
      out << "num_vector: []\n";
    } else {
      out << "num_vector:\n";
      for (auto item : msg.num_vector) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PracticeSrv_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace cpp_server_client

namespace rosidl_generator_traits
{

[[deprecated("use cpp_server_client::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cpp_server_client::srv::PracticeSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  cpp_server_client::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cpp_server_client::srv::to_yaml() instead")]]
inline std::string to_yaml(const cpp_server_client::srv::PracticeSrv_Request & msg)
{
  return cpp_server_client::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cpp_server_client::srv::PracticeSrv_Request>()
{
  return "cpp_server_client::srv::PracticeSrv_Request";
}

template<>
inline const char * name<cpp_server_client::srv::PracticeSrv_Request>()
{
  return "cpp_server_client/srv/PracticeSrv_Request";
}

template<>
struct has_fixed_size<cpp_server_client::srv::PracticeSrv_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cpp_server_client::srv::PracticeSrv_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cpp_server_client::srv::PracticeSrv_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace cpp_server_client
{

namespace srv
{

inline void to_flow_style_yaml(
  const PracticeSrv_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: cumulative_sum
  {
    out << "cumulative_sum: ";
    rosidl_generator_traits::value_to_yaml(msg.cumulative_sum, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PracticeSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cumulative_sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cumulative_sum: ";
    rosidl_generator_traits::value_to_yaml(msg.cumulative_sum, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PracticeSrv_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace cpp_server_client

namespace rosidl_generator_traits
{

[[deprecated("use cpp_server_client::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cpp_server_client::srv::PracticeSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  cpp_server_client::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cpp_server_client::srv::to_yaml() instead")]]
inline std::string to_yaml(const cpp_server_client::srv::PracticeSrv_Response & msg)
{
  return cpp_server_client::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cpp_server_client::srv::PracticeSrv_Response>()
{
  return "cpp_server_client::srv::PracticeSrv_Response";
}

template<>
inline const char * name<cpp_server_client::srv::PracticeSrv_Response>()
{
  return "cpp_server_client/srv/PracticeSrv_Response";
}

template<>
struct has_fixed_size<cpp_server_client::srv::PracticeSrv_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cpp_server_client::srv::PracticeSrv_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cpp_server_client::srv::PracticeSrv_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cpp_server_client::srv::PracticeSrv>()
{
  return "cpp_server_client::srv::PracticeSrv";
}

template<>
inline const char * name<cpp_server_client::srv::PracticeSrv>()
{
  return "cpp_server_client/srv/PracticeSrv";
}

template<>
struct has_fixed_size<cpp_server_client::srv::PracticeSrv>
  : std::integral_constant<
    bool,
    has_fixed_size<cpp_server_client::srv::PracticeSrv_Request>::value &&
    has_fixed_size<cpp_server_client::srv::PracticeSrv_Response>::value
  >
{
};

template<>
struct has_bounded_size<cpp_server_client::srv::PracticeSrv>
  : std::integral_constant<
    bool,
    has_bounded_size<cpp_server_client::srv::PracticeSrv_Request>::value &&
    has_bounded_size<cpp_server_client::srv::PracticeSrv_Response>::value
  >
{
};

template<>
struct is_service<cpp_server_client::srv::PracticeSrv>
  : std::true_type
{
};

template<>
struct is_service_request<cpp_server_client::srv::PracticeSrv_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cpp_server_client::srv::PracticeSrv_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CPP_SERVER_CLIENT__SRV__DETAIL__PRACTICE_SRV__TRAITS_HPP_
