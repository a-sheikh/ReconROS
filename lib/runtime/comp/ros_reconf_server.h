#include <stdint.h>
#include <pthread.h>

#include "ros.h"

#include <rcl_action/action_server.h>
#include <rcl/time.h>

typedef struct
{
    uint32_t slot_id;
    pthread_t agent;

    uint32_t bEnable;


    rcl_action_server_t  action_server;
    rcl_clock_t clock;


    uint32_t active_task_id;

} t_ros_reconf_server;