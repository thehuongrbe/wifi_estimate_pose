// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from action_tutorials_interfaces:action/Boiso.idl
// generated code does not contain a copyright notice

#ifndef ACTION_TUTORIALS_INTERFACES__ACTION__DETAIL__BOISO__TRAITS_HPP_
#define ACTION_TUTORIALS_INTERFACES__ACTION__DETAIL__BOISO__TRAITS_HPP_

#include "action_tutorials_interfaces/action/detail/boiso__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_tutorials_interfaces::action::Boiso_Goal>()
{
  return "action_tutorials_interfaces::action::Boiso_Goal";
}

template<>
inline const char * name<action_tutorials_interfaces::action::Boiso_Goal>()
{
  return "action_tutorials_interfaces/action/Boiso_Goal";
}

template<>
struct has_fixed_size<action_tutorials_interfaces::action::Boiso_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<action_tutorials_interfaces::action::Boiso_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<action_tutorials_interfaces::action::Boiso_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_tutorials_interfaces::action::Boiso_Result>()
{
  return "action_tutorials_interfaces::action::Boiso_Result";
}

template<>
inline const char * name<action_tutorials_interfaces::action::Boiso_Result>()
{
  return "action_tutorials_interfaces/action/Boiso_Result";
}

template<>
struct has_fixed_size<action_tutorials_interfaces::action::Boiso_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<action_tutorials_interfaces::action::Boiso_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<action_tutorials_interfaces::action::Boiso_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_tutorials_interfaces::action::Boiso_Feedback>()
{
  return "action_tutorials_interfaces::action::Boiso_Feedback";
}

template<>
inline const char * name<action_tutorials_interfaces::action::Boiso_Feedback>()
{
  return "action_tutorials_interfaces/action/Boiso_Feedback";
}

template<>
struct has_fixed_size<action_tutorials_interfaces::action::Boiso_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<action_tutorials_interfaces::action::Boiso_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<action_tutorials_interfaces::action::Boiso_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "action_tutorials_interfaces/action/detail/boiso__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_tutorials_interfaces::action::Boiso_SendGoal_Request>()
{
  return "action_tutorials_interfaces::action::Boiso_SendGoal_Request";
}

template<>
inline const char * name<action_tutorials_interfaces::action::Boiso_SendGoal_Request>()
{
  return "action_tutorials_interfaces/action/Boiso_SendGoal_Request";
}

template<>
struct has_fixed_size<action_tutorials_interfaces::action::Boiso_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<action_tutorials_interfaces::action::Boiso_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<action_tutorials_interfaces::action::Boiso_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<action_tutorials_interfaces::action::Boiso_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<action_tutorials_interfaces::action::Boiso_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_tutorials_interfaces::action::Boiso_SendGoal_Response>()
{
  return "action_tutorials_interfaces::action::Boiso_SendGoal_Response";
}

template<>
inline const char * name<action_tutorials_interfaces::action::Boiso_SendGoal_Response>()
{
  return "action_tutorials_interfaces/action/Boiso_SendGoal_Response";
}

template<>
struct has_fixed_size<action_tutorials_interfaces::action::Boiso_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<action_tutorials_interfaces::action::Boiso_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<action_tutorials_interfaces::action::Boiso_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_tutorials_interfaces::action::Boiso_SendGoal>()
{
  return "action_tutorials_interfaces::action::Boiso_SendGoal";
}

template<>
inline const char * name<action_tutorials_interfaces::action::Boiso_SendGoal>()
{
  return "action_tutorials_interfaces/action/Boiso_SendGoal";
}

template<>
struct has_fixed_size<action_tutorials_interfaces::action::Boiso_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<action_tutorials_interfaces::action::Boiso_SendGoal_Request>::value &&
    has_fixed_size<action_tutorials_interfaces::action::Boiso_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<action_tutorials_interfaces::action::Boiso_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<action_tutorials_interfaces::action::Boiso_SendGoal_Request>::value &&
    has_bounded_size<action_tutorials_interfaces::action::Boiso_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<action_tutorials_interfaces::action::Boiso_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<action_tutorials_interfaces::action::Boiso_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<action_tutorials_interfaces::action::Boiso_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_tutorials_interfaces::action::Boiso_GetResult_Request>()
{
  return "action_tutorials_interfaces::action::Boiso_GetResult_Request";
}

template<>
inline const char * name<action_tutorials_interfaces::action::Boiso_GetResult_Request>()
{
  return "action_tutorials_interfaces/action/Boiso_GetResult_Request";
}

template<>
struct has_fixed_size<action_tutorials_interfaces::action::Boiso_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<action_tutorials_interfaces::action::Boiso_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<action_tutorials_interfaces::action::Boiso_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "action_tutorials_interfaces/action/detail/boiso__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_tutorials_interfaces::action::Boiso_GetResult_Response>()
{
  return "action_tutorials_interfaces::action::Boiso_GetResult_Response";
}

template<>
inline const char * name<action_tutorials_interfaces::action::Boiso_GetResult_Response>()
{
  return "action_tutorials_interfaces/action/Boiso_GetResult_Response";
}

template<>
struct has_fixed_size<action_tutorials_interfaces::action::Boiso_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<action_tutorials_interfaces::action::Boiso_Result>::value> {};

template<>
struct has_bounded_size<action_tutorials_interfaces::action::Boiso_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<action_tutorials_interfaces::action::Boiso_Result>::value> {};

template<>
struct is_message<action_tutorials_interfaces::action::Boiso_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_tutorials_interfaces::action::Boiso_GetResult>()
{
  return "action_tutorials_interfaces::action::Boiso_GetResult";
}

template<>
inline const char * name<action_tutorials_interfaces::action::Boiso_GetResult>()
{
  return "action_tutorials_interfaces/action/Boiso_GetResult";
}

template<>
struct has_fixed_size<action_tutorials_interfaces::action::Boiso_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<action_tutorials_interfaces::action::Boiso_GetResult_Request>::value &&
    has_fixed_size<action_tutorials_interfaces::action::Boiso_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<action_tutorials_interfaces::action::Boiso_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<action_tutorials_interfaces::action::Boiso_GetResult_Request>::value &&
    has_bounded_size<action_tutorials_interfaces::action::Boiso_GetResult_Response>::value
  >
{
};

template<>
struct is_service<action_tutorials_interfaces::action::Boiso_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<action_tutorials_interfaces::action::Boiso_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<action_tutorials_interfaces::action::Boiso_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "action_tutorials_interfaces/action/detail/boiso__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_tutorials_interfaces::action::Boiso_FeedbackMessage>()
{
  return "action_tutorials_interfaces::action::Boiso_FeedbackMessage";
}

template<>
inline const char * name<action_tutorials_interfaces::action::Boiso_FeedbackMessage>()
{
  return "action_tutorials_interfaces/action/Boiso_FeedbackMessage";
}

template<>
struct has_fixed_size<action_tutorials_interfaces::action::Boiso_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<action_tutorials_interfaces::action::Boiso_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<action_tutorials_interfaces::action::Boiso_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<action_tutorials_interfaces::action::Boiso_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<action_tutorials_interfaces::action::Boiso_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<action_tutorials_interfaces::action::Boiso>
  : std::true_type
{
};

template<>
struct is_action_goal<action_tutorials_interfaces::action::Boiso_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<action_tutorials_interfaces::action::Boiso_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<action_tutorials_interfaces::action::Boiso_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ACTION_TUTORIALS_INTERFACES__ACTION__DETAIL__BOISO__TRAITS_HPP_
