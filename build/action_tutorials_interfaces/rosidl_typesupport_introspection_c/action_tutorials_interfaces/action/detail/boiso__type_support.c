// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from action_tutorials_interfaces:action/Boiso.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "action_tutorials_interfaces/action/detail/boiso__rosidl_typesupport_introspection_c.h"
#include "action_tutorials_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "action_tutorials_interfaces/action/detail/boiso__functions.h"
#include "action_tutorials_interfaces/action/detail/boiso__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Boiso_Goal__rosidl_typesupport_introspection_c__Boiso_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_tutorials_interfaces__action__Boiso_Goal__init(message_memory);
}

void Boiso_Goal__rosidl_typesupport_introspection_c__Boiso_Goal_fini_function(void * message_memory)
{
  action_tutorials_interfaces__action__Boiso_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Boiso_Goal__rosidl_typesupport_introspection_c__Boiso_Goal_message_member_array[1] = {
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_tutorials_interfaces__action__Boiso_Goal, request),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Boiso_Goal__rosidl_typesupport_introspection_c__Boiso_Goal_message_members = {
  "action_tutorials_interfaces__action",  // message namespace
  "Boiso_Goal",  // message name
  1,  // number of fields
  sizeof(action_tutorials_interfaces__action__Boiso_Goal),
  Boiso_Goal__rosidl_typesupport_introspection_c__Boiso_Goal_message_member_array,  // message members
  Boiso_Goal__rosidl_typesupport_introspection_c__Boiso_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  Boiso_Goal__rosidl_typesupport_introspection_c__Boiso_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Boiso_Goal__rosidl_typesupport_introspection_c__Boiso_Goal_message_type_support_handle = {
  0,
  &Boiso_Goal__rosidl_typesupport_introspection_c__Boiso_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_tutorials_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_tutorials_interfaces, action, Boiso_Goal)() {
  if (!Boiso_Goal__rosidl_typesupport_introspection_c__Boiso_Goal_message_type_support_handle.typesupport_identifier) {
    Boiso_Goal__rosidl_typesupport_introspection_c__Boiso_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Boiso_Goal__rosidl_typesupport_introspection_c__Boiso_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_tutorials_interfaces/action/detail/boiso__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_tutorials_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_tutorials_interfaces/action/detail/boiso__functions.h"
// already included above
// #include "action_tutorials_interfaces/action/detail/boiso__struct.h"


// Include directives for member types
// Member `result`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Boiso_Result__rosidl_typesupport_introspection_c__Boiso_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_tutorials_interfaces__action__Boiso_Result__init(message_memory);
}

void Boiso_Result__rosidl_typesupport_introspection_c__Boiso_Result_fini_function(void * message_memory)
{
  action_tutorials_interfaces__action__Boiso_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Boiso_Result__rosidl_typesupport_introspection_c__Boiso_Result_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_tutorials_interfaces__action__Boiso_Result, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Boiso_Result__rosidl_typesupport_introspection_c__Boiso_Result_message_members = {
  "action_tutorials_interfaces__action",  // message namespace
  "Boiso_Result",  // message name
  1,  // number of fields
  sizeof(action_tutorials_interfaces__action__Boiso_Result),
  Boiso_Result__rosidl_typesupport_introspection_c__Boiso_Result_message_member_array,  // message members
  Boiso_Result__rosidl_typesupport_introspection_c__Boiso_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  Boiso_Result__rosidl_typesupport_introspection_c__Boiso_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Boiso_Result__rosidl_typesupport_introspection_c__Boiso_Result_message_type_support_handle = {
  0,
  &Boiso_Result__rosidl_typesupport_introspection_c__Boiso_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_tutorials_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_tutorials_interfaces, action, Boiso_Result)() {
  if (!Boiso_Result__rosidl_typesupport_introspection_c__Boiso_Result_message_type_support_handle.typesupport_identifier) {
    Boiso_Result__rosidl_typesupport_introspection_c__Boiso_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Boiso_Result__rosidl_typesupport_introspection_c__Boiso_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_tutorials_interfaces/action/detail/boiso__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_tutorials_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_tutorials_interfaces/action/detail/boiso__functions.h"
// already included above
// #include "action_tutorials_interfaces/action/detail/boiso__struct.h"


// Include directives for member types
// Member `feedback`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Boiso_Feedback__rosidl_typesupport_introspection_c__Boiso_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_tutorials_interfaces__action__Boiso_Feedback__init(message_memory);
}

void Boiso_Feedback__rosidl_typesupport_introspection_c__Boiso_Feedback_fini_function(void * message_memory)
{
  action_tutorials_interfaces__action__Boiso_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Boiso_Feedback__rosidl_typesupport_introspection_c__Boiso_Feedback_message_member_array[1] = {
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_tutorials_interfaces__action__Boiso_Feedback, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Boiso_Feedback__rosidl_typesupport_introspection_c__Boiso_Feedback_message_members = {
  "action_tutorials_interfaces__action",  // message namespace
  "Boiso_Feedback",  // message name
  1,  // number of fields
  sizeof(action_tutorials_interfaces__action__Boiso_Feedback),
  Boiso_Feedback__rosidl_typesupport_introspection_c__Boiso_Feedback_message_member_array,  // message members
  Boiso_Feedback__rosidl_typesupport_introspection_c__Boiso_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  Boiso_Feedback__rosidl_typesupport_introspection_c__Boiso_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Boiso_Feedback__rosidl_typesupport_introspection_c__Boiso_Feedback_message_type_support_handle = {
  0,
  &Boiso_Feedback__rosidl_typesupport_introspection_c__Boiso_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_tutorials_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_tutorials_interfaces, action, Boiso_Feedback)() {
  if (!Boiso_Feedback__rosidl_typesupport_introspection_c__Boiso_Feedback_message_type_support_handle.typesupport_identifier) {
    Boiso_Feedback__rosidl_typesupport_introspection_c__Boiso_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Boiso_Feedback__rosidl_typesupport_introspection_c__Boiso_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_tutorials_interfaces/action/detail/boiso__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_tutorials_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_tutorials_interfaces/action/detail/boiso__functions.h"
// already included above
// #include "action_tutorials_interfaces/action/detail/boiso__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "action_tutorials_interfaces/action/boiso.h"
// Member `goal`
// already included above
// #include "action_tutorials_interfaces/action/detail/boiso__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Boiso_SendGoal_Request__rosidl_typesupport_introspection_c__Boiso_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_tutorials_interfaces__action__Boiso_SendGoal_Request__init(message_memory);
}

void Boiso_SendGoal_Request__rosidl_typesupport_introspection_c__Boiso_SendGoal_Request_fini_function(void * message_memory)
{
  action_tutorials_interfaces__action__Boiso_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Boiso_SendGoal_Request__rosidl_typesupport_introspection_c__Boiso_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_tutorials_interfaces__action__Boiso_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_tutorials_interfaces__action__Boiso_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Boiso_SendGoal_Request__rosidl_typesupport_introspection_c__Boiso_SendGoal_Request_message_members = {
  "action_tutorials_interfaces__action",  // message namespace
  "Boiso_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(action_tutorials_interfaces__action__Boiso_SendGoal_Request),
  Boiso_SendGoal_Request__rosidl_typesupport_introspection_c__Boiso_SendGoal_Request_message_member_array,  // message members
  Boiso_SendGoal_Request__rosidl_typesupport_introspection_c__Boiso_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Boiso_SendGoal_Request__rosidl_typesupport_introspection_c__Boiso_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Boiso_SendGoal_Request__rosidl_typesupport_introspection_c__Boiso_SendGoal_Request_message_type_support_handle = {
  0,
  &Boiso_SendGoal_Request__rosidl_typesupport_introspection_c__Boiso_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_tutorials_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_tutorials_interfaces, action, Boiso_SendGoal_Request)() {
  Boiso_SendGoal_Request__rosidl_typesupport_introspection_c__Boiso_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Boiso_SendGoal_Request__rosidl_typesupport_introspection_c__Boiso_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_tutorials_interfaces, action, Boiso_Goal)();
  if (!Boiso_SendGoal_Request__rosidl_typesupport_introspection_c__Boiso_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    Boiso_SendGoal_Request__rosidl_typesupport_introspection_c__Boiso_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Boiso_SendGoal_Request__rosidl_typesupport_introspection_c__Boiso_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_tutorials_interfaces/action/detail/boiso__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_tutorials_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_tutorials_interfaces/action/detail/boiso__functions.h"
// already included above
// #include "action_tutorials_interfaces/action/detail/boiso__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Boiso_SendGoal_Response__rosidl_typesupport_introspection_c__Boiso_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_tutorials_interfaces__action__Boiso_SendGoal_Response__init(message_memory);
}

void Boiso_SendGoal_Response__rosidl_typesupport_introspection_c__Boiso_SendGoal_Response_fini_function(void * message_memory)
{
  action_tutorials_interfaces__action__Boiso_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Boiso_SendGoal_Response__rosidl_typesupport_introspection_c__Boiso_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_tutorials_interfaces__action__Boiso_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_tutorials_interfaces__action__Boiso_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Boiso_SendGoal_Response__rosidl_typesupport_introspection_c__Boiso_SendGoal_Response_message_members = {
  "action_tutorials_interfaces__action",  // message namespace
  "Boiso_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(action_tutorials_interfaces__action__Boiso_SendGoal_Response),
  Boiso_SendGoal_Response__rosidl_typesupport_introspection_c__Boiso_SendGoal_Response_message_member_array,  // message members
  Boiso_SendGoal_Response__rosidl_typesupport_introspection_c__Boiso_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Boiso_SendGoal_Response__rosidl_typesupport_introspection_c__Boiso_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Boiso_SendGoal_Response__rosidl_typesupport_introspection_c__Boiso_SendGoal_Response_message_type_support_handle = {
  0,
  &Boiso_SendGoal_Response__rosidl_typesupport_introspection_c__Boiso_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_tutorials_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_tutorials_interfaces, action, Boiso_SendGoal_Response)() {
  Boiso_SendGoal_Response__rosidl_typesupport_introspection_c__Boiso_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!Boiso_SendGoal_Response__rosidl_typesupport_introspection_c__Boiso_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    Boiso_SendGoal_Response__rosidl_typesupport_introspection_c__Boiso_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Boiso_SendGoal_Response__rosidl_typesupport_introspection_c__Boiso_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "action_tutorials_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "action_tutorials_interfaces/action/detail/boiso__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers action_tutorials_interfaces__action__detail__boiso__rosidl_typesupport_introspection_c__Boiso_SendGoal_service_members = {
  "action_tutorials_interfaces__action",  // service namespace
  "Boiso_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // action_tutorials_interfaces__action__detail__boiso__rosidl_typesupport_introspection_c__Boiso_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // action_tutorials_interfaces__action__detail__boiso__rosidl_typesupport_introspection_c__Boiso_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t action_tutorials_interfaces__action__detail__boiso__rosidl_typesupport_introspection_c__Boiso_SendGoal_service_type_support_handle = {
  0,
  &action_tutorials_interfaces__action__detail__boiso__rosidl_typesupport_introspection_c__Boiso_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_tutorials_interfaces, action, Boiso_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_tutorials_interfaces, action, Boiso_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_tutorials_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_tutorials_interfaces, action, Boiso_SendGoal)() {
  if (!action_tutorials_interfaces__action__detail__boiso__rosidl_typesupport_introspection_c__Boiso_SendGoal_service_type_support_handle.typesupport_identifier) {
    action_tutorials_interfaces__action__detail__boiso__rosidl_typesupport_introspection_c__Boiso_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)action_tutorials_interfaces__action__detail__boiso__rosidl_typesupport_introspection_c__Boiso_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_tutorials_interfaces, action, Boiso_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_tutorials_interfaces, action, Boiso_SendGoal_Response)()->data;
  }

  return &action_tutorials_interfaces__action__detail__boiso__rosidl_typesupport_introspection_c__Boiso_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "action_tutorials_interfaces/action/detail/boiso__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_tutorials_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_tutorials_interfaces/action/detail/boiso__functions.h"
// already included above
// #include "action_tutorials_interfaces/action/detail/boiso__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Boiso_GetResult_Request__rosidl_typesupport_introspection_c__Boiso_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_tutorials_interfaces__action__Boiso_GetResult_Request__init(message_memory);
}

void Boiso_GetResult_Request__rosidl_typesupport_introspection_c__Boiso_GetResult_Request_fini_function(void * message_memory)
{
  action_tutorials_interfaces__action__Boiso_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Boiso_GetResult_Request__rosidl_typesupport_introspection_c__Boiso_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_tutorials_interfaces__action__Boiso_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Boiso_GetResult_Request__rosidl_typesupport_introspection_c__Boiso_GetResult_Request_message_members = {
  "action_tutorials_interfaces__action",  // message namespace
  "Boiso_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(action_tutorials_interfaces__action__Boiso_GetResult_Request),
  Boiso_GetResult_Request__rosidl_typesupport_introspection_c__Boiso_GetResult_Request_message_member_array,  // message members
  Boiso_GetResult_Request__rosidl_typesupport_introspection_c__Boiso_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Boiso_GetResult_Request__rosidl_typesupport_introspection_c__Boiso_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Boiso_GetResult_Request__rosidl_typesupport_introspection_c__Boiso_GetResult_Request_message_type_support_handle = {
  0,
  &Boiso_GetResult_Request__rosidl_typesupport_introspection_c__Boiso_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_tutorials_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_tutorials_interfaces, action, Boiso_GetResult_Request)() {
  Boiso_GetResult_Request__rosidl_typesupport_introspection_c__Boiso_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!Boiso_GetResult_Request__rosidl_typesupport_introspection_c__Boiso_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    Boiso_GetResult_Request__rosidl_typesupport_introspection_c__Boiso_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Boiso_GetResult_Request__rosidl_typesupport_introspection_c__Boiso_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_tutorials_interfaces/action/detail/boiso__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_tutorials_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_tutorials_interfaces/action/detail/boiso__functions.h"
// already included above
// #include "action_tutorials_interfaces/action/detail/boiso__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "action_tutorials_interfaces/action/boiso.h"
// Member `result`
// already included above
// #include "action_tutorials_interfaces/action/detail/boiso__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Boiso_GetResult_Response__rosidl_typesupport_introspection_c__Boiso_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_tutorials_interfaces__action__Boiso_GetResult_Response__init(message_memory);
}

void Boiso_GetResult_Response__rosidl_typesupport_introspection_c__Boiso_GetResult_Response_fini_function(void * message_memory)
{
  action_tutorials_interfaces__action__Boiso_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Boiso_GetResult_Response__rosidl_typesupport_introspection_c__Boiso_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_tutorials_interfaces__action__Boiso_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_tutorials_interfaces__action__Boiso_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Boiso_GetResult_Response__rosidl_typesupport_introspection_c__Boiso_GetResult_Response_message_members = {
  "action_tutorials_interfaces__action",  // message namespace
  "Boiso_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(action_tutorials_interfaces__action__Boiso_GetResult_Response),
  Boiso_GetResult_Response__rosidl_typesupport_introspection_c__Boiso_GetResult_Response_message_member_array,  // message members
  Boiso_GetResult_Response__rosidl_typesupport_introspection_c__Boiso_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Boiso_GetResult_Response__rosidl_typesupport_introspection_c__Boiso_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Boiso_GetResult_Response__rosidl_typesupport_introspection_c__Boiso_GetResult_Response_message_type_support_handle = {
  0,
  &Boiso_GetResult_Response__rosidl_typesupport_introspection_c__Boiso_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_tutorials_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_tutorials_interfaces, action, Boiso_GetResult_Response)() {
  Boiso_GetResult_Response__rosidl_typesupport_introspection_c__Boiso_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_tutorials_interfaces, action, Boiso_Result)();
  if (!Boiso_GetResult_Response__rosidl_typesupport_introspection_c__Boiso_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    Boiso_GetResult_Response__rosidl_typesupport_introspection_c__Boiso_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Boiso_GetResult_Response__rosidl_typesupport_introspection_c__Boiso_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "action_tutorials_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "action_tutorials_interfaces/action/detail/boiso__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers action_tutorials_interfaces__action__detail__boiso__rosidl_typesupport_introspection_c__Boiso_GetResult_service_members = {
  "action_tutorials_interfaces__action",  // service namespace
  "Boiso_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // action_tutorials_interfaces__action__detail__boiso__rosidl_typesupport_introspection_c__Boiso_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // action_tutorials_interfaces__action__detail__boiso__rosidl_typesupport_introspection_c__Boiso_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t action_tutorials_interfaces__action__detail__boiso__rosidl_typesupport_introspection_c__Boiso_GetResult_service_type_support_handle = {
  0,
  &action_tutorials_interfaces__action__detail__boiso__rosidl_typesupport_introspection_c__Boiso_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_tutorials_interfaces, action, Boiso_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_tutorials_interfaces, action, Boiso_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_tutorials_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_tutorials_interfaces, action, Boiso_GetResult)() {
  if (!action_tutorials_interfaces__action__detail__boiso__rosidl_typesupport_introspection_c__Boiso_GetResult_service_type_support_handle.typesupport_identifier) {
    action_tutorials_interfaces__action__detail__boiso__rosidl_typesupport_introspection_c__Boiso_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)action_tutorials_interfaces__action__detail__boiso__rosidl_typesupport_introspection_c__Boiso_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_tutorials_interfaces, action, Boiso_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_tutorials_interfaces, action, Boiso_GetResult_Response)()->data;
  }

  return &action_tutorials_interfaces__action__detail__boiso__rosidl_typesupport_introspection_c__Boiso_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "action_tutorials_interfaces/action/detail/boiso__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_tutorials_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_tutorials_interfaces/action/detail/boiso__functions.h"
// already included above
// #include "action_tutorials_interfaces/action/detail/boiso__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "action_tutorials_interfaces/action/boiso.h"
// Member `feedback`
// already included above
// #include "action_tutorials_interfaces/action/detail/boiso__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Boiso_FeedbackMessage__rosidl_typesupport_introspection_c__Boiso_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_tutorials_interfaces__action__Boiso_FeedbackMessage__init(message_memory);
}

void Boiso_FeedbackMessage__rosidl_typesupport_introspection_c__Boiso_FeedbackMessage_fini_function(void * message_memory)
{
  action_tutorials_interfaces__action__Boiso_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Boiso_FeedbackMessage__rosidl_typesupport_introspection_c__Boiso_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_tutorials_interfaces__action__Boiso_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_tutorials_interfaces__action__Boiso_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Boiso_FeedbackMessage__rosidl_typesupport_introspection_c__Boiso_FeedbackMessage_message_members = {
  "action_tutorials_interfaces__action",  // message namespace
  "Boiso_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(action_tutorials_interfaces__action__Boiso_FeedbackMessage),
  Boiso_FeedbackMessage__rosidl_typesupport_introspection_c__Boiso_FeedbackMessage_message_member_array,  // message members
  Boiso_FeedbackMessage__rosidl_typesupport_introspection_c__Boiso_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  Boiso_FeedbackMessage__rosidl_typesupport_introspection_c__Boiso_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Boiso_FeedbackMessage__rosidl_typesupport_introspection_c__Boiso_FeedbackMessage_message_type_support_handle = {
  0,
  &Boiso_FeedbackMessage__rosidl_typesupport_introspection_c__Boiso_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_tutorials_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_tutorials_interfaces, action, Boiso_FeedbackMessage)() {
  Boiso_FeedbackMessage__rosidl_typesupport_introspection_c__Boiso_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Boiso_FeedbackMessage__rosidl_typesupport_introspection_c__Boiso_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_tutorials_interfaces, action, Boiso_Feedback)();
  if (!Boiso_FeedbackMessage__rosidl_typesupport_introspection_c__Boiso_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    Boiso_FeedbackMessage__rosidl_typesupport_introspection_c__Boiso_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Boiso_FeedbackMessage__rosidl_typesupport_introspection_c__Boiso_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
