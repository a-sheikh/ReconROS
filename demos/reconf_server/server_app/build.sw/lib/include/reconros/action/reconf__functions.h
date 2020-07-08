// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from reconros:action/Reconf.idl
// generated code does not contain a copyright notice

#ifndef RECONROS__ACTION__RECONF__FUNCTIONS_H_
#define RECONROS__ACTION__RECONF__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "reconros/msg/rosidl_generator_c__visibility_control.h"

#include "reconros/action/reconf__struct.h"

/// Initialize action/Reconf message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * reconros__action__Reconf_Goal
 * )) before or use
 * reconros__action__Reconf_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
bool
reconros__action__Reconf_Goal__init(reconros__action__Reconf_Goal * msg);

/// Finalize action/Reconf message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
void
reconros__action__Reconf_Goal__fini(reconros__action__Reconf_Goal * msg);

/// Create action/Reconf message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * reconros__action__Reconf_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
reconros__action__Reconf_Goal *
reconros__action__Reconf_Goal__create();

/// Destroy action/Reconf message.
/**
 * It calls
 * reconros__action__Reconf_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
void
reconros__action__Reconf_Goal__destroy(reconros__action__Reconf_Goal * msg);


/// Initialize array of action/Reconf messages.
/**
 * It allocates the memory for the number of elements and calls
 * reconros__action__Reconf_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
bool
reconros__action__Reconf_Goal__Sequence__init(reconros__action__Reconf_Goal__Sequence * array, size_t size);

/// Finalize array of action/Reconf messages.
/**
 * It calls
 * reconros__action__Reconf_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
void
reconros__action__Reconf_Goal__Sequence__fini(reconros__action__Reconf_Goal__Sequence * array);

/// Create array of action/Reconf messages.
/**
 * It allocates the memory for the array and calls
 * reconros__action__Reconf_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
reconros__action__Reconf_Goal__Sequence *
reconros__action__Reconf_Goal__Sequence__create(size_t size);

/// Destroy array of action/Reconf messages.
/**
 * It calls
 * reconros__action__Reconf_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
void
reconros__action__Reconf_Goal__Sequence__destroy(reconros__action__Reconf_Goal__Sequence * array);

/// Initialize action/Reconf message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * reconros__action__Reconf_Result
 * )) before or use
 * reconros__action__Reconf_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
bool
reconros__action__Reconf_Result__init(reconros__action__Reconf_Result * msg);

/// Finalize action/Reconf message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
void
reconros__action__Reconf_Result__fini(reconros__action__Reconf_Result * msg);

/// Create action/Reconf message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * reconros__action__Reconf_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
reconros__action__Reconf_Result *
reconros__action__Reconf_Result__create();

/// Destroy action/Reconf message.
/**
 * It calls
 * reconros__action__Reconf_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
void
reconros__action__Reconf_Result__destroy(reconros__action__Reconf_Result * msg);


/// Initialize array of action/Reconf messages.
/**
 * It allocates the memory for the number of elements and calls
 * reconros__action__Reconf_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
bool
reconros__action__Reconf_Result__Sequence__init(reconros__action__Reconf_Result__Sequence * array, size_t size);

/// Finalize array of action/Reconf messages.
/**
 * It calls
 * reconros__action__Reconf_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
void
reconros__action__Reconf_Result__Sequence__fini(reconros__action__Reconf_Result__Sequence * array);

/// Create array of action/Reconf messages.
/**
 * It allocates the memory for the array and calls
 * reconros__action__Reconf_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
reconros__action__Reconf_Result__Sequence *
reconros__action__Reconf_Result__Sequence__create(size_t size);

/// Destroy array of action/Reconf messages.
/**
 * It calls
 * reconros__action__Reconf_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
void
reconros__action__Reconf_Result__Sequence__destroy(reconros__action__Reconf_Result__Sequence * array);

/// Initialize action/Reconf message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * reconros__action__Reconf_Feedback
 * )) before or use
 * reconros__action__Reconf_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
bool
reconros__action__Reconf_Feedback__init(reconros__action__Reconf_Feedback * msg);

/// Finalize action/Reconf message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
void
reconros__action__Reconf_Feedback__fini(reconros__action__Reconf_Feedback * msg);

/// Create action/Reconf message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * reconros__action__Reconf_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
reconros__action__Reconf_Feedback *
reconros__action__Reconf_Feedback__create();

/// Destroy action/Reconf message.
/**
 * It calls
 * reconros__action__Reconf_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
void
reconros__action__Reconf_Feedback__destroy(reconros__action__Reconf_Feedback * msg);


/// Initialize array of action/Reconf messages.
/**
 * It allocates the memory for the number of elements and calls
 * reconros__action__Reconf_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
bool
reconros__action__Reconf_Feedback__Sequence__init(reconros__action__Reconf_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Reconf messages.
/**
 * It calls
 * reconros__action__Reconf_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
void
reconros__action__Reconf_Feedback__Sequence__fini(reconros__action__Reconf_Feedback__Sequence * array);

/// Create array of action/Reconf messages.
/**
 * It allocates the memory for the array and calls
 * reconros__action__Reconf_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
reconros__action__Reconf_Feedback__Sequence *
reconros__action__Reconf_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Reconf messages.
/**
 * It calls
 * reconros__action__Reconf_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
void
reconros__action__Reconf_Feedback__Sequence__destroy(reconros__action__Reconf_Feedback__Sequence * array);

/// Initialize action/Reconf message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * reconros__action__Reconf_SendGoal_Request
 * )) before or use
 * reconros__action__Reconf_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
bool
reconros__action__Reconf_SendGoal_Request__init(reconros__action__Reconf_SendGoal_Request * msg);

/// Finalize action/Reconf message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
void
reconros__action__Reconf_SendGoal_Request__fini(reconros__action__Reconf_SendGoal_Request * msg);

/// Create action/Reconf message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * reconros__action__Reconf_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
reconros__action__Reconf_SendGoal_Request *
reconros__action__Reconf_SendGoal_Request__create();

/// Destroy action/Reconf message.
/**
 * It calls
 * reconros__action__Reconf_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
void
reconros__action__Reconf_SendGoal_Request__destroy(reconros__action__Reconf_SendGoal_Request * msg);


/// Initialize array of action/Reconf messages.
/**
 * It allocates the memory for the number of elements and calls
 * reconros__action__Reconf_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
bool
reconros__action__Reconf_SendGoal_Request__Sequence__init(reconros__action__Reconf_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Reconf messages.
/**
 * It calls
 * reconros__action__Reconf_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
void
reconros__action__Reconf_SendGoal_Request__Sequence__fini(reconros__action__Reconf_SendGoal_Request__Sequence * array);

/// Create array of action/Reconf messages.
/**
 * It allocates the memory for the array and calls
 * reconros__action__Reconf_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
reconros__action__Reconf_SendGoal_Request__Sequence *
reconros__action__Reconf_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Reconf messages.
/**
 * It calls
 * reconros__action__Reconf_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
void
reconros__action__Reconf_SendGoal_Request__Sequence__destroy(reconros__action__Reconf_SendGoal_Request__Sequence * array);

/// Initialize action/Reconf message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * reconros__action__Reconf_SendGoal_Response
 * )) before or use
 * reconros__action__Reconf_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
bool
reconros__action__Reconf_SendGoal_Response__init(reconros__action__Reconf_SendGoal_Response * msg);

/// Finalize action/Reconf message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
void
reconros__action__Reconf_SendGoal_Response__fini(reconros__action__Reconf_SendGoal_Response * msg);

/// Create action/Reconf message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * reconros__action__Reconf_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
reconros__action__Reconf_SendGoal_Response *
reconros__action__Reconf_SendGoal_Response__create();

/// Destroy action/Reconf message.
/**
 * It calls
 * reconros__action__Reconf_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
void
reconros__action__Reconf_SendGoal_Response__destroy(reconros__action__Reconf_SendGoal_Response * msg);


/// Initialize array of action/Reconf messages.
/**
 * It allocates the memory for the number of elements and calls
 * reconros__action__Reconf_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
bool
reconros__action__Reconf_SendGoal_Response__Sequence__init(reconros__action__Reconf_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Reconf messages.
/**
 * It calls
 * reconros__action__Reconf_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
void
reconros__action__Reconf_SendGoal_Response__Sequence__fini(reconros__action__Reconf_SendGoal_Response__Sequence * array);

/// Create array of action/Reconf messages.
/**
 * It allocates the memory for the array and calls
 * reconros__action__Reconf_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
reconros__action__Reconf_SendGoal_Response__Sequence *
reconros__action__Reconf_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Reconf messages.
/**
 * It calls
 * reconros__action__Reconf_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
void
reconros__action__Reconf_SendGoal_Response__Sequence__destroy(reconros__action__Reconf_SendGoal_Response__Sequence * array);

/// Initialize action/Reconf message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * reconros__action__Reconf_GetResult_Request
 * )) before or use
 * reconros__action__Reconf_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
bool
reconros__action__Reconf_GetResult_Request__init(reconros__action__Reconf_GetResult_Request * msg);

/// Finalize action/Reconf message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
void
reconros__action__Reconf_GetResult_Request__fini(reconros__action__Reconf_GetResult_Request * msg);

/// Create action/Reconf message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * reconros__action__Reconf_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
reconros__action__Reconf_GetResult_Request *
reconros__action__Reconf_GetResult_Request__create();

/// Destroy action/Reconf message.
/**
 * It calls
 * reconros__action__Reconf_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
void
reconros__action__Reconf_GetResult_Request__destroy(reconros__action__Reconf_GetResult_Request * msg);


/// Initialize array of action/Reconf messages.
/**
 * It allocates the memory for the number of elements and calls
 * reconros__action__Reconf_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
bool
reconros__action__Reconf_GetResult_Request__Sequence__init(reconros__action__Reconf_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Reconf messages.
/**
 * It calls
 * reconros__action__Reconf_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
void
reconros__action__Reconf_GetResult_Request__Sequence__fini(reconros__action__Reconf_GetResult_Request__Sequence * array);

/// Create array of action/Reconf messages.
/**
 * It allocates the memory for the array and calls
 * reconros__action__Reconf_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
reconros__action__Reconf_GetResult_Request__Sequence *
reconros__action__Reconf_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Reconf messages.
/**
 * It calls
 * reconros__action__Reconf_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
void
reconros__action__Reconf_GetResult_Request__Sequence__destroy(reconros__action__Reconf_GetResult_Request__Sequence * array);

/// Initialize action/Reconf message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * reconros__action__Reconf_GetResult_Response
 * )) before or use
 * reconros__action__Reconf_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
bool
reconros__action__Reconf_GetResult_Response__init(reconros__action__Reconf_GetResult_Response * msg);

/// Finalize action/Reconf message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
void
reconros__action__Reconf_GetResult_Response__fini(reconros__action__Reconf_GetResult_Response * msg);

/// Create action/Reconf message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * reconros__action__Reconf_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
reconros__action__Reconf_GetResult_Response *
reconros__action__Reconf_GetResult_Response__create();

/// Destroy action/Reconf message.
/**
 * It calls
 * reconros__action__Reconf_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
void
reconros__action__Reconf_GetResult_Response__destroy(reconros__action__Reconf_GetResult_Response * msg);


/// Initialize array of action/Reconf messages.
/**
 * It allocates the memory for the number of elements and calls
 * reconros__action__Reconf_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
bool
reconros__action__Reconf_GetResult_Response__Sequence__init(reconros__action__Reconf_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Reconf messages.
/**
 * It calls
 * reconros__action__Reconf_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
void
reconros__action__Reconf_GetResult_Response__Sequence__fini(reconros__action__Reconf_GetResult_Response__Sequence * array);

/// Create array of action/Reconf messages.
/**
 * It allocates the memory for the array and calls
 * reconros__action__Reconf_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
reconros__action__Reconf_GetResult_Response__Sequence *
reconros__action__Reconf_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Reconf messages.
/**
 * It calls
 * reconros__action__Reconf_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
void
reconros__action__Reconf_GetResult_Response__Sequence__destroy(reconros__action__Reconf_GetResult_Response__Sequence * array);

/// Initialize action/Reconf message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * reconros__action__Reconf_FeedbackMessage
 * )) before or use
 * reconros__action__Reconf_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
bool
reconros__action__Reconf_FeedbackMessage__init(reconros__action__Reconf_FeedbackMessage * msg);

/// Finalize action/Reconf message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
void
reconros__action__Reconf_FeedbackMessage__fini(reconros__action__Reconf_FeedbackMessage * msg);

/// Create action/Reconf message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * reconros__action__Reconf_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
reconros__action__Reconf_FeedbackMessage *
reconros__action__Reconf_FeedbackMessage__create();

/// Destroy action/Reconf message.
/**
 * It calls
 * reconros__action__Reconf_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
void
reconros__action__Reconf_FeedbackMessage__destroy(reconros__action__Reconf_FeedbackMessage * msg);


/// Initialize array of action/Reconf messages.
/**
 * It allocates the memory for the number of elements and calls
 * reconros__action__Reconf_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
bool
reconros__action__Reconf_FeedbackMessage__Sequence__init(reconros__action__Reconf_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Reconf messages.
/**
 * It calls
 * reconros__action__Reconf_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
void
reconros__action__Reconf_FeedbackMessage__Sequence__fini(reconros__action__Reconf_FeedbackMessage__Sequence * array);

/// Create array of action/Reconf messages.
/**
 * It allocates the memory for the array and calls
 * reconros__action__Reconf_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
reconros__action__Reconf_FeedbackMessage__Sequence *
reconros__action__Reconf_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Reconf messages.
/**
 * It calls
 * reconros__action__Reconf_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_reconros
void
reconros__action__Reconf_FeedbackMessage__Sequence__destroy(reconros__action__Reconf_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // RECONROS__ACTION__RECONF__FUNCTIONS_H_
