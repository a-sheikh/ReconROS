// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from reconros:action/Reconf.idl
// generated code does not contain a copyright notice
#include "reconros/action/reconf__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `bitstream`
// Member `request_data`
#include "rosidl_generator_c/primitives_sequence_functions.h"

bool
reconros__action__Reconf_Goal__init(reconros__action__Reconf_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // task_id
  // priority
  // bitstream
  if (!rosidl_generator_c__uint8__Sequence__init(&msg->bitstream, 0)) {
    reconros__action__Reconf_Goal__fini(msg);
    return false;
  }
  // request_data
  if (!rosidl_generator_c__uint8__Sequence__init(&msg->request_data, 0)) {
    reconros__action__Reconf_Goal__fini(msg);
    return false;
  }
  return true;
}

void
reconros__action__Reconf_Goal__fini(reconros__action__Reconf_Goal * msg)
{
  if (!msg) {
    return;
  }
  // task_id
  // priority
  // bitstream
  rosidl_generator_c__uint8__Sequence__fini(&msg->bitstream);
  // request_data
  rosidl_generator_c__uint8__Sequence__fini(&msg->request_data);
}

reconros__action__Reconf_Goal *
reconros__action__Reconf_Goal__create()
{
  reconros__action__Reconf_Goal * msg = (reconros__action__Reconf_Goal *)malloc(sizeof(reconros__action__Reconf_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(reconros__action__Reconf_Goal));
  bool success = reconros__action__Reconf_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
reconros__action__Reconf_Goal__destroy(reconros__action__Reconf_Goal * msg)
{
  if (msg) {
    reconros__action__Reconf_Goal__fini(msg);
  }
  free(msg);
}


bool
reconros__action__Reconf_Goal__Sequence__init(reconros__action__Reconf_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  reconros__action__Reconf_Goal * data = NULL;
  if (size) {
    data = (reconros__action__Reconf_Goal *)calloc(size, sizeof(reconros__action__Reconf_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = reconros__action__Reconf_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        reconros__action__Reconf_Goal__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
reconros__action__Reconf_Goal__Sequence__fini(reconros__action__Reconf_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      reconros__action__Reconf_Goal__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

reconros__action__Reconf_Goal__Sequence *
reconros__action__Reconf_Goal__Sequence__create(size_t size)
{
  reconros__action__Reconf_Goal__Sequence * array = (reconros__action__Reconf_Goal__Sequence *)malloc(sizeof(reconros__action__Reconf_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = reconros__action__Reconf_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
reconros__action__Reconf_Goal__Sequence__destroy(reconros__action__Reconf_Goal__Sequence * array)
{
  if (array) {
    reconros__action__Reconf_Goal__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `response_data`
// already included above
// #include "rosidl_generator_c/primitives_sequence_functions.h"

bool
reconros__action__Reconf_Result__init(reconros__action__Reconf_Result * msg)
{
  if (!msg) {
    return false;
  }
  // response_data
  if (!rosidl_generator_c__uint8__Sequence__init(&msg->response_data, 0)) {
    reconros__action__Reconf_Result__fini(msg);
    return false;
  }
  return true;
}

void
reconros__action__Reconf_Result__fini(reconros__action__Reconf_Result * msg)
{
  if (!msg) {
    return;
  }
  // response_data
  rosidl_generator_c__uint8__Sequence__fini(&msg->response_data);
}

reconros__action__Reconf_Result *
reconros__action__Reconf_Result__create()
{
  reconros__action__Reconf_Result * msg = (reconros__action__Reconf_Result *)malloc(sizeof(reconros__action__Reconf_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(reconros__action__Reconf_Result));
  bool success = reconros__action__Reconf_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
reconros__action__Reconf_Result__destroy(reconros__action__Reconf_Result * msg)
{
  if (msg) {
    reconros__action__Reconf_Result__fini(msg);
  }
  free(msg);
}


bool
reconros__action__Reconf_Result__Sequence__init(reconros__action__Reconf_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  reconros__action__Reconf_Result * data = NULL;
  if (size) {
    data = (reconros__action__Reconf_Result *)calloc(size, sizeof(reconros__action__Reconf_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = reconros__action__Reconf_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        reconros__action__Reconf_Result__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
reconros__action__Reconf_Result__Sequence__fini(reconros__action__Reconf_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      reconros__action__Reconf_Result__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

reconros__action__Reconf_Result__Sequence *
reconros__action__Reconf_Result__Sequence__create(size_t size)
{
  reconros__action__Reconf_Result__Sequence * array = (reconros__action__Reconf_Result__Sequence *)malloc(sizeof(reconros__action__Reconf_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = reconros__action__Reconf_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
reconros__action__Reconf_Result__Sequence__destroy(reconros__action__Reconf_Result__Sequence * array)
{
  if (array) {
    reconros__action__Reconf_Result__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `feedback_data`
// already included above
// #include "rosidl_generator_c/primitives_sequence_functions.h"

bool
reconros__action__Reconf_Feedback__init(reconros__action__Reconf_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // feedback_data
  if (!rosidl_generator_c__uint8__Sequence__init(&msg->feedback_data, 0)) {
    reconros__action__Reconf_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
reconros__action__Reconf_Feedback__fini(reconros__action__Reconf_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // feedback_data
  rosidl_generator_c__uint8__Sequence__fini(&msg->feedback_data);
}

reconros__action__Reconf_Feedback *
reconros__action__Reconf_Feedback__create()
{
  reconros__action__Reconf_Feedback * msg = (reconros__action__Reconf_Feedback *)malloc(sizeof(reconros__action__Reconf_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(reconros__action__Reconf_Feedback));
  bool success = reconros__action__Reconf_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
reconros__action__Reconf_Feedback__destroy(reconros__action__Reconf_Feedback * msg)
{
  if (msg) {
    reconros__action__Reconf_Feedback__fini(msg);
  }
  free(msg);
}


bool
reconros__action__Reconf_Feedback__Sequence__init(reconros__action__Reconf_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  reconros__action__Reconf_Feedback * data = NULL;
  if (size) {
    data = (reconros__action__Reconf_Feedback *)calloc(size, sizeof(reconros__action__Reconf_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = reconros__action__Reconf_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        reconros__action__Reconf_Feedback__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
reconros__action__Reconf_Feedback__Sequence__fini(reconros__action__Reconf_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      reconros__action__Reconf_Feedback__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

reconros__action__Reconf_Feedback__Sequence *
reconros__action__Reconf_Feedback__Sequence__create(size_t size)
{
  reconros__action__Reconf_Feedback__Sequence * array = (reconros__action__Reconf_Feedback__Sequence *)malloc(sizeof(reconros__action__Reconf_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = reconros__action__Reconf_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
reconros__action__Reconf_Feedback__Sequence__destroy(reconros__action__Reconf_Feedback__Sequence * array)
{
  if (array) {
    reconros__action__Reconf_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid__functions.h"
// Member `goal`
// already included above
// #include "reconros/action/reconf__functions.h"

bool
reconros__action__Reconf_SendGoal_Request__init(reconros__action__Reconf_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    reconros__action__Reconf_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!reconros__action__Reconf_Goal__init(&msg->goal)) {
    reconros__action__Reconf_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
reconros__action__Reconf_SendGoal_Request__fini(reconros__action__Reconf_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  reconros__action__Reconf_Goal__fini(&msg->goal);
}

reconros__action__Reconf_SendGoal_Request *
reconros__action__Reconf_SendGoal_Request__create()
{
  reconros__action__Reconf_SendGoal_Request * msg = (reconros__action__Reconf_SendGoal_Request *)malloc(sizeof(reconros__action__Reconf_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(reconros__action__Reconf_SendGoal_Request));
  bool success = reconros__action__Reconf_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
reconros__action__Reconf_SendGoal_Request__destroy(reconros__action__Reconf_SendGoal_Request * msg)
{
  if (msg) {
    reconros__action__Reconf_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
reconros__action__Reconf_SendGoal_Request__Sequence__init(reconros__action__Reconf_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  reconros__action__Reconf_SendGoal_Request * data = NULL;
  if (size) {
    data = (reconros__action__Reconf_SendGoal_Request *)calloc(size, sizeof(reconros__action__Reconf_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = reconros__action__Reconf_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        reconros__action__Reconf_SendGoal_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
reconros__action__Reconf_SendGoal_Request__Sequence__fini(reconros__action__Reconf_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      reconros__action__Reconf_SendGoal_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

reconros__action__Reconf_SendGoal_Request__Sequence *
reconros__action__Reconf_SendGoal_Request__Sequence__create(size_t size)
{
  reconros__action__Reconf_SendGoal_Request__Sequence * array = (reconros__action__Reconf_SendGoal_Request__Sequence *)malloc(sizeof(reconros__action__Reconf_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = reconros__action__Reconf_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
reconros__action__Reconf_SendGoal_Request__Sequence__destroy(reconros__action__Reconf_SendGoal_Request__Sequence * array)
{
  if (array) {
    reconros__action__Reconf_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time__functions.h"

bool
reconros__action__Reconf_SendGoal_Response__init(reconros__action__Reconf_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    reconros__action__Reconf_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
reconros__action__Reconf_SendGoal_Response__fini(reconros__action__Reconf_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

reconros__action__Reconf_SendGoal_Response *
reconros__action__Reconf_SendGoal_Response__create()
{
  reconros__action__Reconf_SendGoal_Response * msg = (reconros__action__Reconf_SendGoal_Response *)malloc(sizeof(reconros__action__Reconf_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(reconros__action__Reconf_SendGoal_Response));
  bool success = reconros__action__Reconf_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
reconros__action__Reconf_SendGoal_Response__destroy(reconros__action__Reconf_SendGoal_Response * msg)
{
  if (msg) {
    reconros__action__Reconf_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
reconros__action__Reconf_SendGoal_Response__Sequence__init(reconros__action__Reconf_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  reconros__action__Reconf_SendGoal_Response * data = NULL;
  if (size) {
    data = (reconros__action__Reconf_SendGoal_Response *)calloc(size, sizeof(reconros__action__Reconf_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = reconros__action__Reconf_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        reconros__action__Reconf_SendGoal_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
reconros__action__Reconf_SendGoal_Response__Sequence__fini(reconros__action__Reconf_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      reconros__action__Reconf_SendGoal_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

reconros__action__Reconf_SendGoal_Response__Sequence *
reconros__action__Reconf_SendGoal_Response__Sequence__create(size_t size)
{
  reconros__action__Reconf_SendGoal_Response__Sequence * array = (reconros__action__Reconf_SendGoal_Response__Sequence *)malloc(sizeof(reconros__action__Reconf_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = reconros__action__Reconf_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
reconros__action__Reconf_SendGoal_Response__Sequence__destroy(reconros__action__Reconf_SendGoal_Response__Sequence * array)
{
  if (array) {
    reconros__action__Reconf_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__functions.h"

bool
reconros__action__Reconf_GetResult_Request__init(reconros__action__Reconf_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    reconros__action__Reconf_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
reconros__action__Reconf_GetResult_Request__fini(reconros__action__Reconf_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

reconros__action__Reconf_GetResult_Request *
reconros__action__Reconf_GetResult_Request__create()
{
  reconros__action__Reconf_GetResult_Request * msg = (reconros__action__Reconf_GetResult_Request *)malloc(sizeof(reconros__action__Reconf_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(reconros__action__Reconf_GetResult_Request));
  bool success = reconros__action__Reconf_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
reconros__action__Reconf_GetResult_Request__destroy(reconros__action__Reconf_GetResult_Request * msg)
{
  if (msg) {
    reconros__action__Reconf_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
reconros__action__Reconf_GetResult_Request__Sequence__init(reconros__action__Reconf_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  reconros__action__Reconf_GetResult_Request * data = NULL;
  if (size) {
    data = (reconros__action__Reconf_GetResult_Request *)calloc(size, sizeof(reconros__action__Reconf_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = reconros__action__Reconf_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        reconros__action__Reconf_GetResult_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
reconros__action__Reconf_GetResult_Request__Sequence__fini(reconros__action__Reconf_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      reconros__action__Reconf_GetResult_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

reconros__action__Reconf_GetResult_Request__Sequence *
reconros__action__Reconf_GetResult_Request__Sequence__create(size_t size)
{
  reconros__action__Reconf_GetResult_Request__Sequence * array = (reconros__action__Reconf_GetResult_Request__Sequence *)malloc(sizeof(reconros__action__Reconf_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = reconros__action__Reconf_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
reconros__action__Reconf_GetResult_Request__Sequence__destroy(reconros__action__Reconf_GetResult_Request__Sequence * array)
{
  if (array) {
    reconros__action__Reconf_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "reconros/action/reconf__functions.h"

bool
reconros__action__Reconf_GetResult_Response__init(reconros__action__Reconf_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!reconros__action__Reconf_Result__init(&msg->result)) {
    reconros__action__Reconf_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
reconros__action__Reconf_GetResult_Response__fini(reconros__action__Reconf_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  reconros__action__Reconf_Result__fini(&msg->result);
}

reconros__action__Reconf_GetResult_Response *
reconros__action__Reconf_GetResult_Response__create()
{
  reconros__action__Reconf_GetResult_Response * msg = (reconros__action__Reconf_GetResult_Response *)malloc(sizeof(reconros__action__Reconf_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(reconros__action__Reconf_GetResult_Response));
  bool success = reconros__action__Reconf_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
reconros__action__Reconf_GetResult_Response__destroy(reconros__action__Reconf_GetResult_Response * msg)
{
  if (msg) {
    reconros__action__Reconf_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
reconros__action__Reconf_GetResult_Response__Sequence__init(reconros__action__Reconf_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  reconros__action__Reconf_GetResult_Response * data = NULL;
  if (size) {
    data = (reconros__action__Reconf_GetResult_Response *)calloc(size, sizeof(reconros__action__Reconf_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = reconros__action__Reconf_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        reconros__action__Reconf_GetResult_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
reconros__action__Reconf_GetResult_Response__Sequence__fini(reconros__action__Reconf_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      reconros__action__Reconf_GetResult_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

reconros__action__Reconf_GetResult_Response__Sequence *
reconros__action__Reconf_GetResult_Response__Sequence__create(size_t size)
{
  reconros__action__Reconf_GetResult_Response__Sequence * array = (reconros__action__Reconf_GetResult_Response__Sequence *)malloc(sizeof(reconros__action__Reconf_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = reconros__action__Reconf_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
reconros__action__Reconf_GetResult_Response__Sequence__destroy(reconros__action__Reconf_GetResult_Response__Sequence * array)
{
  if (array) {
    reconros__action__Reconf_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__functions.h"
// Member `feedback`
// already included above
// #include "reconros/action/reconf__functions.h"

bool
reconros__action__Reconf_FeedbackMessage__init(reconros__action__Reconf_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    reconros__action__Reconf_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!reconros__action__Reconf_Feedback__init(&msg->feedback)) {
    reconros__action__Reconf_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
reconros__action__Reconf_FeedbackMessage__fini(reconros__action__Reconf_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  reconros__action__Reconf_Feedback__fini(&msg->feedback);
}

reconros__action__Reconf_FeedbackMessage *
reconros__action__Reconf_FeedbackMessage__create()
{
  reconros__action__Reconf_FeedbackMessage * msg = (reconros__action__Reconf_FeedbackMessage *)malloc(sizeof(reconros__action__Reconf_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(reconros__action__Reconf_FeedbackMessage));
  bool success = reconros__action__Reconf_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
reconros__action__Reconf_FeedbackMessage__destroy(reconros__action__Reconf_FeedbackMessage * msg)
{
  if (msg) {
    reconros__action__Reconf_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
reconros__action__Reconf_FeedbackMessage__Sequence__init(reconros__action__Reconf_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  reconros__action__Reconf_FeedbackMessage * data = NULL;
  if (size) {
    data = (reconros__action__Reconf_FeedbackMessage *)calloc(size, sizeof(reconros__action__Reconf_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = reconros__action__Reconf_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        reconros__action__Reconf_FeedbackMessage__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
reconros__action__Reconf_FeedbackMessage__Sequence__fini(reconros__action__Reconf_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      reconros__action__Reconf_FeedbackMessage__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

reconros__action__Reconf_FeedbackMessage__Sequence *
reconros__action__Reconf_FeedbackMessage__Sequence__create(size_t size)
{
  reconros__action__Reconf_FeedbackMessage__Sequence * array = (reconros__action__Reconf_FeedbackMessage__Sequence *)malloc(sizeof(reconros__action__Reconf_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = reconros__action__Reconf_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
reconros__action__Reconf_FeedbackMessage__Sequence__destroy(reconros__action__Reconf_FeedbackMessage__Sequence * array)
{
  if (array) {
    reconros__action__Reconf_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
