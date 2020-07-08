// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from reconros:action/Reconf.idl
// generated code does not contain a copyright notice

#ifndef RECONROS__ACTION__RECONF__TRAITS_HPP_
#define RECONROS__ACTION__RECONF__TRAITS_HPP_

#include "reconros/action/reconf__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<reconros::action::Reconf_Goal>()
{
  return "reconros::action::Reconf_Goal";
}

template<>
struct has_fixed_size<reconros::action::Reconf_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<reconros::action::Reconf_Goal>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<reconros::action::Reconf_Result>()
{
  return "reconros::action::Reconf_Result";
}

template<>
struct has_fixed_size<reconros::action::Reconf_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<reconros::action::Reconf_Result>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<reconros::action::Reconf_Feedback>()
{
  return "reconros::action::Reconf_Feedback";
}

template<>
struct has_fixed_size<reconros::action::Reconf_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<reconros::action::Reconf_Feedback>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__traits.hpp"
// Member 'goal'
#include "reconros/action/reconf__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<reconros::action::Reconf_SendGoal_Request>()
{
  return "reconros::action::Reconf_SendGoal_Request";
}

template<>
struct has_fixed_size<reconros::action::Reconf_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<reconros::action::Reconf_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<reconros::action::Reconf_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<reconros::action::Reconf_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<reconros::action::Reconf_SendGoal_Response>()
{
  return "reconros::action::Reconf_SendGoal_Response";
}

template<>
struct has_fixed_size<reconros::action::Reconf_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<reconros::action::Reconf_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<reconros::action::Reconf_SendGoal>()
{
  return "reconros::action::Reconf_SendGoal";
}

template<>
struct has_fixed_size<reconros::action::Reconf_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<reconros::action::Reconf_SendGoal_Request>::value &&
    has_fixed_size<reconros::action::Reconf_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<reconros::action::Reconf_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<reconros::action::Reconf_SendGoal_Request>::value &&
    has_bounded_size<reconros::action::Reconf_SendGoal_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<reconros::action::Reconf_GetResult_Request>()
{
  return "reconros::action::Reconf_GetResult_Request";
}

template<>
struct has_fixed_size<reconros::action::Reconf_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<reconros::action::Reconf_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "reconros/action/reconf__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<reconros::action::Reconf_GetResult_Response>()
{
  return "reconros::action::Reconf_GetResult_Response";
}

template<>
struct has_fixed_size<reconros::action::Reconf_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<reconros::action::Reconf_Result>::value> {};

template<>
struct has_bounded_size<reconros::action::Reconf_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<reconros::action::Reconf_Result>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<reconros::action::Reconf_GetResult>()
{
  return "reconros::action::Reconf_GetResult";
}

template<>
struct has_fixed_size<reconros::action::Reconf_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<reconros::action::Reconf_GetResult_Request>::value &&
    has_fixed_size<reconros::action::Reconf_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<reconros::action::Reconf_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<reconros::action::Reconf_GetResult_Request>::value &&
    has_bounded_size<reconros::action::Reconf_GetResult_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "reconros/action/reconf__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<reconros::action::Reconf_FeedbackMessage>()
{
  return "reconros::action::Reconf_FeedbackMessage";
}

template<>
struct has_fixed_size<reconros::action::Reconf_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<reconros::action::Reconf_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<reconros::action::Reconf_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<reconros::action::Reconf_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

#endif  // RECONROS__ACTION__RECONF__TRAITS_HPP_
