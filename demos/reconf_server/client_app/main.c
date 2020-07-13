#include <stdio.h>

#include <rcl/rcl.h>
#include <rcl_action/action_client.h>
#include "reconros/action/reconf.h"
#include <rcl_action/action_client.h>



int main(int argc, char** argv)
{

    rcl_context_t context = rcl_get_zero_initialized_context();
    rcl_node_t node = rcl_get_zero_initialized_node();
    rcl_node_options_t node_ops = rcl_node_get_default_options();
    rcl_ret_t ret = rcl_node_init(&node, "node_name", "/node_ns", &context, &node_ops);

    // ... error handling
    const rosidl_action_type_support_t * ts =  ROSIDL_GET_ACTION_TYPE_SUPPORT(reconros, Reconf);
    
    rcl_action_client_t action_client = rcl_action_get_zero_initialized_client();
    rcl_action_client_options_t action_client_ops = rcl_action_client_get_default_options();
    ret = rcl_action_client_init(&action_client, &node, ts, "fibonacci", &action_client_ops);
    // ... error handling, and on shutdown do finalization:









    
    ret = rcl_action_client_fini(&action_client, &node);
    // ... error handling for rcl_action_client_fini()
    ret = rcl_node_fini(&node);
    // ... error handling for rcl_node_fini()


    return 0;
}