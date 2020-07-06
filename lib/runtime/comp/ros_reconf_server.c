#include "ros_reconf_server.h"

#include "reconros/action/reconf.h"

void * agent_thread(t_ros_reconf_server * ros_reconf_server)
{
    while(ros_reconf_server->bEnable)
    {

    }
}


void ros_reconf_server_init( t_ros_reconf_server * ros_reconf_server, struct ros_node_t * _ros_node, char * _action_name)
{

    rosidl_action_type_support_t * ts = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    reconros,
    action,
    Reconf_GetResult_Response)();


    rcl_ret_t ret = rcl_action_server_init(
        ros_reconf_server->action_server,
        &_ros_node->node,
        rcl_clock_t * clock,
        ts,
        _action_name,
         NULL);

    pthread_create(&ros_reconf_server->agent, NULL, &agent_thread, ros_reconf_server);
}