// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_interfaces:srv/SumInt.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES__SRV__DETAIL__SUM_INT__STRUCT_H_
#define TEST_INTERFACES__SRV__DETAIL__SUM_INT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/SumInt in the package test_interfaces.
typedef struct test_interfaces__srv__SumInt_Request
{
  int64_t a;
  int64_t b;
} test_interfaces__srv__SumInt_Request;

// Struct for a sequence of test_interfaces__srv__SumInt_Request.
typedef struct test_interfaces__srv__SumInt_Request__Sequence
{
  test_interfaces__srv__SumInt_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_interfaces__srv__SumInt_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SumInt in the package test_interfaces.
typedef struct test_interfaces__srv__SumInt_Response
{
  int64_t sum;
} test_interfaces__srv__SumInt_Response;

// Struct for a sequence of test_interfaces__srv__SumInt_Response.
typedef struct test_interfaces__srv__SumInt_Response__Sequence
{
  test_interfaces__srv__SumInt_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_interfaces__srv__SumInt_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_INTERFACES__SRV__DETAIL__SUM_INT__STRUCT_H_
