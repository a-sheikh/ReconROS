// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from reconros:action/Reconf.idl
// generated code does not contain a copyright notice

#ifndef RECONROS__ACTION__RECONF__STRUCT_H_
#define RECONROS__ACTION__RECONF__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'bitstream'
// Member 'request_data'
#include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in action/Reconf in the package reconros.
typedef struct reconros__action__Reconf_Goal
{
  uint32_t task_id;
  uint32_t priority;
  rosidl_generator_c__uint8__Sequence bitstream;
  rosidl_generator_c__uint8__Sequence request_data;
} reconros__action__Reconf_Goal;

// Struct for a sequence of reconros__action__Reconf_Goal.
typedef struct reconros__action__Reconf_Goal__Sequence
{
  reconros__action__Reconf_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} reconros__action__Reconf_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response_data'
// already included above
// #include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in action/Reconf in the package reconros.
typedef struct reconros__action__Reconf_Result
{
  rosidl_generator_c__uint8__Sequence response_data;
} reconros__action__Reconf_Result;

// Struct for a sequence of reconros__action__Reconf_Result.
typedef struct reconros__action__Reconf_Result__Sequence
{
  reconros__action__Reconf_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} reconros__action__Reconf_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'feedback_data'
// already included above
// #include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in action/Reconf in the package reconros.
typedef struct reconros__action__Reconf_Feedback
{
  rosidl_generator_c__uint8__Sequence feedback_data;
} reconros__action__Reconf_Feedback;

// Struct for a sequence of reconros__action__Reconf_Feedback.
typedef struct reconros__action__Reconf_Feedback__Sequence
{
  reconros__action__Reconf_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} reconros__action__Reconf_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__struct.h"
// Member 'goal'
#include "reconros/action/reconf__struct.h"

// Struct defined in action/Reconf in the package reconros.
typedef struct reconros__action__Reconf_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  reconros__action__Reconf_Goal goal;
} reconros__action__Reconf_SendGoal_Request;

// Struct for a sequence of reconros__action__Reconf_SendGoal_Request.
typedef struct reconros__action__Reconf_SendGoal_Request__Sequence
{
  reconros__action__Reconf_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} reconros__action__Reconf_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__struct.h"

// Struct defined in action/Reconf in the package reconros.
typedef struct reconros__action__Reconf_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} reconros__action__Reconf_SendGoal_Response;

// Struct for a sequence of reconros__action__Reconf_SendGoal_Response.
typedef struct reconros__action__Reconf_SendGoal_Response__Sequence
{
  reconros__action__Reconf_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} reconros__action__Reconf_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.h"

// Struct defined in action/Reconf in the package reconros.
typedef struct reconros__action__Reconf_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} reconros__action__Reconf_GetResult_Request;

// Struct for a sequence of reconros__action__Reconf_GetResult_Request.
typedef struct reconros__action__Reconf_GetResult_Request__Sequence
{
  reconros__action__Reconf_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} reconros__action__Reconf_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "reconros/action/reconf__struct.h"

// Struct defined in action/Reconf in the package reconros.
typedef struct reconros__action__Reconf_GetResult_Response
{
  int8_t status;
  reconros__action__Reconf_Result result;
} reconros__action__Reconf_GetResult_Response;

// Struct for a sequence of reconros__action__Reconf_GetResult_Response.
typedef struct reconros__action__Reconf_GetResult_Response__Sequence
{
  reconros__action__Reconf_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} reconros__action__Reconf_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "reconros/action/reconf__struct.h"

// Struct defined in action/Reconf in the package reconros.
typedef struct reconros__action__Reconf_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  reconros__action__Reconf_Feedback feedback;
} reconros__action__Reconf_FeedbackMessage;

// Struct for a sequence of reconros__action__Reconf_FeedbackMessage.
typedef struct reconros__action__Reconf_FeedbackMessage__Sequence
{
  reconros__action__Reconf_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} reconros__action__Reconf_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RECONROS__ACTION__RECONF__STRUCT_H_
