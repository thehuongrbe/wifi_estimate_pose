// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from test_interfaces:srv/SumInt.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES__SRV__DETAIL__SUM_INT__BUILDER_HPP_
#define TEST_INTERFACES__SRV__DETAIL__SUM_INT__BUILDER_HPP_

#include "test_interfaces/srv/detail/sum_int__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace test_interfaces
{

namespace srv
{

namespace builder
{

class Init_SumInt_Request_b
{
public:
  explicit Init_SumInt_Request_b(::test_interfaces::srv::SumInt_Request & msg)
  : msg_(msg)
  {}
  ::test_interfaces::srv::SumInt_Request b(::test_interfaces::srv::SumInt_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test_interfaces::srv::SumInt_Request msg_;
};

class Init_SumInt_Request_a
{
public:
  Init_SumInt_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SumInt_Request_b a(::test_interfaces::srv::SumInt_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_SumInt_Request_b(msg_);
  }

private:
  ::test_interfaces::srv::SumInt_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_interfaces::srv::SumInt_Request>()
{
  return test_interfaces::srv::builder::Init_SumInt_Request_a();
}

}  // namespace test_interfaces


namespace test_interfaces
{

namespace srv
{

namespace builder
{

class Init_SumInt_Response_sum
{
public:
  Init_SumInt_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::test_interfaces::srv::SumInt_Response sum(::test_interfaces::srv::SumInt_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test_interfaces::srv::SumInt_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_interfaces::srv::SumInt_Response>()
{
  return test_interfaces::srv::builder::Init_SumInt_Response_sum();
}

}  // namespace test_interfaces

#endif  // TEST_INTERFACES__SRV__DETAIL__SUM_INT__BUILDER_HPP_
