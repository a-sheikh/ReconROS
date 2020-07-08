// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from reconros:action/Reconf.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "reconros/action/reconf__rosidl_typesupport_introspection_c.h"
#include "reconros/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "reconros/action/reconf__struct.h"


// Include directives for member types
// Member `bitstream`
// Member `request_data`
#include "rosidl_generator_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember Reconf_Goal__rosidl_typesupport_introspection_c__Reconf_Goal_message_member_array[4] = {
  {
    "task_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(reconros__action__Reconf_Goal, task_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "priority",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(reconros__action__Reconf_Goal, priority),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bitstream",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(reconros__action__Reconf_Goal, bitstream),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(reconros__action__Reconf_Goal, request_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Reconf_Goal__rosidl_typesupport_introspection_c__Reconf_Goal_message_members = {
  "reconros__action",  // message namespace
  "Reconf_Goal",  // message name
  4,  // number of fields
  sizeof(reconros__action__Reconf_Goal),
  Reconf_Goal__rosidl_typesupport_introspection_c__Reconf_Goal_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Reconf_Goal__rosidl_typesupport_introspection_c__Reconf_Goal_message_type_support_handle = {
  0,
  &Reconf_Goal__rosidl_typesupport_introspection_c__Reconf_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_reconros
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reconros, action, Reconf_Goal)() {
  if (!Reconf_Goal__rosidl_typesupport_introspection_c__Reconf_Goal_message_type_support_handle.typesupport_identifier) {
    Reconf_Goal__rosidl_typesupport_introspection_c__Reconf_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Reconf_Goal__rosidl_typesupport_introspection_c__Reconf_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "reconros/action/reconf__rosidl_typesupport_introspection_c.h"
// already included above
// #include "reconros/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "reconros/action/reconf__struct.h"


// Include directives for member types
// Member `response_data`
// already included above
// #include "rosidl_generator_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember Reconf_Result__rosidl_typesupport_introspection_c__Reconf_Result_message_member_array[1] = {
  {
    "response_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(reconros__action__Reconf_Result, response_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Reconf_Result__rosidl_typesupport_introspection_c__Reconf_Result_message_members = {
  "reconros__action",  // message namespace
  "Reconf_Result",  // message name
  1,  // number of fields
  sizeof(reconros__action__Reconf_Result),
  Reconf_Result__rosidl_typesupport_introspection_c__Reconf_Result_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Reconf_Result__rosidl_typesupport_introspection_c__Reconf_Result_message_type_support_handle = {
  0,
  &Reconf_Result__rosidl_typesupport_introspection_c__Reconf_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_reconros
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reconros, action, Reconf_Result)() {
  if (!Reconf_Result__rosidl_typesupport_introspection_c__Reconf_Result_message_type_support_handle.typesupport_identifier) {
    Reconf_Result__rosidl_typesupport_introspection_c__Reconf_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Reconf_Result__rosidl_typesupport_introspection_c__Reconf_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "reconros/action/reconf__rosidl_typesupport_introspection_c.h"
// already included above
// #include "reconros/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "reconros/action/reconf__struct.h"


// Include directives for member types
// Member `feedback_data`
// already included above
// #include "rosidl_generator_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember Reconf_Feedback__rosidl_typesupport_introspection_c__Reconf_Feedback_message_member_array[1] = {
  {
    "feedback_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(reconros__action__Reconf_Feedback, feedback_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Reconf_Feedback__rosidl_typesupport_introspection_c__Reconf_Feedback_message_members = {
  "reconros__action",  // message namespace
  "Reconf_Feedback",  // message name
  1,  // number of fields
  sizeof(reconros__action__Reconf_Feedback),
  Reconf_Feedback__rosidl_typesupport_introspection_c__Reconf_Feedback_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Reconf_Feedback__rosidl_typesupport_introspection_c__Reconf_Feedback_message_type_support_handle = {
  0,
  &Reconf_Feedback__rosidl_typesupport_introspection_c__Reconf_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_reconros
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reconros, action, Reconf_Feedback)() {
  if (!Reconf_Feedback__rosidl_typesupport_introspection_c__Reconf_Feedback_message_type_support_handle.typesupport_identifier) {
    Reconf_Feedback__rosidl_typesupport_introspection_c__Reconf_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Reconf_Feedback__rosidl_typesupport_introspection_c__Reconf_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "reconros/action/reconf__rosidl_typesupport_introspection_c.h"
// already included above
// #include "reconros/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "reconros/action/reconf__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "reconros/action/reconf.h"
// Member `goal`
// already included above
// #include "reconros/action/reconf__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember Reconf_SendGoal_Request__rosidl_typesupport_introspection_c__Reconf_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(reconros__action__Reconf_SendGoal_Request, goal_id),  // bytes offset in struct
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
    offsetof(reconros__action__Reconf_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Reconf_SendGoal_Request__rosidl_typesupport_introspection_c__Reconf_SendGoal_Request_message_members = {
  "reconros__action",  // message namespace
  "Reconf_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(reconros__action__Reconf_SendGoal_Request),
  Reconf_SendGoal_Request__rosidl_typesupport_introspection_c__Reconf_SendGoal_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Reconf_SendGoal_Request__rosidl_typesupport_introspection_c__Reconf_SendGoal_Request_message_type_support_handle = {
  0,
  &Reconf_SendGoal_Request__rosidl_typesupport_introspection_c__Reconf_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_reconros
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reconros, action, Reconf_SendGoal_Request)() {
  Reconf_SendGoal_Request__rosidl_typesupport_introspection_c__Reconf_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Reconf_SendGoal_Request__rosidl_typesupport_introspection_c__Reconf_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reconros, action, Reconf_Goal)();
  if (!Reconf_SendGoal_Request__rosidl_typesupport_introspection_c__Reconf_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    Reconf_SendGoal_Request__rosidl_typesupport_introspection_c__Reconf_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Reconf_SendGoal_Request__rosidl_typesupport_introspection_c__Reconf_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "reconros/action/reconf__rosidl_typesupport_introspection_c.h"
// already included above
// #include "reconros/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "reconros/action/reconf__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember Reconf_SendGoal_Response__rosidl_typesupport_introspection_c__Reconf_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(reconros__action__Reconf_SendGoal_Response, accepted),  // bytes offset in struct
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
    offsetof(reconros__action__Reconf_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Reconf_SendGoal_Response__rosidl_typesupport_introspection_c__Reconf_SendGoal_Response_message_members = {
  "reconros__action",  // message namespace
  "Reconf_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(reconros__action__Reconf_SendGoal_Response),
  Reconf_SendGoal_Response__rosidl_typesupport_introspection_c__Reconf_SendGoal_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Reconf_SendGoal_Response__rosidl_typesupport_introspection_c__Reconf_SendGoal_Response_message_type_support_handle = {
  0,
  &Reconf_SendGoal_Response__rosidl_typesupport_introspection_c__Reconf_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_reconros
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reconros, action, Reconf_SendGoal_Response)() {
  Reconf_SendGoal_Response__rosidl_typesupport_introspection_c__Reconf_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!Reconf_SendGoal_Response__rosidl_typesupport_introspection_c__Reconf_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    Reconf_SendGoal_Response__rosidl_typesupport_introspection_c__Reconf_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Reconf_SendGoal_Response__rosidl_typesupport_introspection_c__Reconf_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "reconros/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "reconros/action/reconf__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers reconros__action__reconf__rosidl_typesupport_introspection_c__Reconf_SendGoal_service_members = {
  "reconros__action",  // service namespace
  "Reconf_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // reconros__action__reconf__rosidl_typesupport_introspection_c__Reconf_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // reconros__action__reconf__rosidl_typesupport_introspection_c__Reconf_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t reconros__action__reconf__rosidl_typesupport_introspection_c__Reconf_SendGoal_service_type_support_handle = {
  0,
  &reconros__action__reconf__rosidl_typesupport_introspection_c__Reconf_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reconros, action, Reconf_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reconros, action, Reconf_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_reconros
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reconros, action, Reconf_SendGoal)() {
  if (!reconros__action__reconf__rosidl_typesupport_introspection_c__Reconf_SendGoal_service_type_support_handle.typesupport_identifier) {
    reconros__action__reconf__rosidl_typesupport_introspection_c__Reconf_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)reconros__action__reconf__rosidl_typesupport_introspection_c__Reconf_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reconros, action, Reconf_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reconros, action, Reconf_SendGoal_Response)()->data;
  }

  return &reconros__action__reconf__rosidl_typesupport_introspection_c__Reconf_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "reconros/action/reconf__rosidl_typesupport_introspection_c.h"
// already included above
// #include "reconros/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "reconros/action/reconf__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember Reconf_GetResult_Request__rosidl_typesupport_introspection_c__Reconf_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(reconros__action__Reconf_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Reconf_GetResult_Request__rosidl_typesupport_introspection_c__Reconf_GetResult_Request_message_members = {
  "reconros__action",  // message namespace
  "Reconf_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(reconros__action__Reconf_GetResult_Request),
  Reconf_GetResult_Request__rosidl_typesupport_introspection_c__Reconf_GetResult_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Reconf_GetResult_Request__rosidl_typesupport_introspection_c__Reconf_GetResult_Request_message_type_support_handle = {
  0,
  &Reconf_GetResult_Request__rosidl_typesupport_introspection_c__Reconf_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_reconros
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reconros, action, Reconf_GetResult_Request)() {
  Reconf_GetResult_Request__rosidl_typesupport_introspection_c__Reconf_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!Reconf_GetResult_Request__rosidl_typesupport_introspection_c__Reconf_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    Reconf_GetResult_Request__rosidl_typesupport_introspection_c__Reconf_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Reconf_GetResult_Request__rosidl_typesupport_introspection_c__Reconf_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "reconros/action/reconf__rosidl_typesupport_introspection_c.h"
// already included above
// #include "reconros/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "reconros/action/reconf__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "reconros/action/reconf.h"
// Member `result`
// already included above
// #include "reconros/action/reconf__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember Reconf_GetResult_Response__rosidl_typesupport_introspection_c__Reconf_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(reconros__action__Reconf_GetResult_Response, status),  // bytes offset in struct
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
    offsetof(reconros__action__Reconf_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Reconf_GetResult_Response__rosidl_typesupport_introspection_c__Reconf_GetResult_Response_message_members = {
  "reconros__action",  // message namespace
  "Reconf_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(reconros__action__Reconf_GetResult_Response),
  Reconf_GetResult_Response__rosidl_typesupport_introspection_c__Reconf_GetResult_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Reconf_GetResult_Response__rosidl_typesupport_introspection_c__Reconf_GetResult_Response_message_type_support_handle = {
  0,
  &Reconf_GetResult_Response__rosidl_typesupport_introspection_c__Reconf_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_reconros
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reconros, action, Reconf_GetResult_Response)() {
  Reconf_GetResult_Response__rosidl_typesupport_introspection_c__Reconf_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reconros, action, Reconf_Result)();
  if (!Reconf_GetResult_Response__rosidl_typesupport_introspection_c__Reconf_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    Reconf_GetResult_Response__rosidl_typesupport_introspection_c__Reconf_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Reconf_GetResult_Response__rosidl_typesupport_introspection_c__Reconf_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "reconros/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "reconros/action/reconf__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers reconros__action__reconf__rosidl_typesupport_introspection_c__Reconf_GetResult_service_members = {
  "reconros__action",  // service namespace
  "Reconf_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // reconros__action__reconf__rosidl_typesupport_introspection_c__Reconf_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // reconros__action__reconf__rosidl_typesupport_introspection_c__Reconf_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t reconros__action__reconf__rosidl_typesupport_introspection_c__Reconf_GetResult_service_type_support_handle = {
  0,
  &reconros__action__reconf__rosidl_typesupport_introspection_c__Reconf_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reconros, action, Reconf_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reconros, action, Reconf_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_reconros
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reconros, action, Reconf_GetResult)() {
  if (!reconros__action__reconf__rosidl_typesupport_introspection_c__Reconf_GetResult_service_type_support_handle.typesupport_identifier) {
    reconros__action__reconf__rosidl_typesupport_introspection_c__Reconf_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)reconros__action__reconf__rosidl_typesupport_introspection_c__Reconf_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reconros, action, Reconf_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reconros, action, Reconf_GetResult_Response)()->data;
  }

  return &reconros__action__reconf__rosidl_typesupport_introspection_c__Reconf_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "reconros/action/reconf__rosidl_typesupport_introspection_c.h"
// already included above
// #include "reconros/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "reconros/action/reconf__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "reconros/action/reconf.h"
// Member `feedback`
// already included above
// #include "reconros/action/reconf__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember Reconf_FeedbackMessage__rosidl_typesupport_introspection_c__Reconf_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(reconros__action__Reconf_FeedbackMessage, goal_id),  // bytes offset in struct
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
    offsetof(reconros__action__Reconf_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Reconf_FeedbackMessage__rosidl_typesupport_introspection_c__Reconf_FeedbackMessage_message_members = {
  "reconros__action",  // message namespace
  "Reconf_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(reconros__action__Reconf_FeedbackMessage),
  Reconf_FeedbackMessage__rosidl_typesupport_introspection_c__Reconf_FeedbackMessage_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Reconf_FeedbackMessage__rosidl_typesupport_introspection_c__Reconf_FeedbackMessage_message_type_support_handle = {
  0,
  &Reconf_FeedbackMessage__rosidl_typesupport_introspection_c__Reconf_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_reconros
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reconros, action, Reconf_FeedbackMessage)() {
  Reconf_FeedbackMessage__rosidl_typesupport_introspection_c__Reconf_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Reconf_FeedbackMessage__rosidl_typesupport_introspection_c__Reconf_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, reconros, action, Reconf_Feedback)();
  if (!Reconf_FeedbackMessage__rosidl_typesupport_introspection_c__Reconf_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    Reconf_FeedbackMessage__rosidl_typesupport_introspection_c__Reconf_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Reconf_FeedbackMessage__rosidl_typesupport_introspection_c__Reconf_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
