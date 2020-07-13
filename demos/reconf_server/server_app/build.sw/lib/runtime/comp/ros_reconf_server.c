#include "ros_reconf_server.h"
#include "reconros/action/reconf.h"

void * agent_thread(void * arg)
{
    rcl_ret_t ret = 0;
    t_ros_reconf_server * ros_reconf_server = (t_ros_reconf_server*)arg;
    rmw_request_id_t request_header;

    rmw_request_id_t response_header;


    reconros__action__Reconf_SendGoal_Request * reconf_goal_request;    
    reconros__action__Reconf_SendGoal_Response * reconf_goal_response;

    reconros__action__Reconf_GetResult_Request * reconf_response_request;
    reconros__action__Reconf_GetResult_Response * reconf_response_response;

    //reconros__action__Reconf_SendGoal_Request__init(reconf_goal_request);  

    reconf_goal_request = reconros__action__Reconf_SendGoal_Request__create();
    reconf_goal_response = reconros__action__Reconf_SendGoal_Response__create();
    
    reconf_response_request = reconros__action__Reconf_GetResult_Request__create();
    reconf_response_response = reconros__action__Reconf_GetResult_Response__create();
    
    reconros__action__Reconf_Feedback * reconros__action__Reconf_Feedback;
    reconros__action__Reconf_Feedback = reconros__action__Reconf_Feedback__create();

    while(ros_reconf_server->bEnable)
    {

        do{
            //Try to get a goal        
            ret = rcl_action_take_goal_request(
                &ros_reconf_server->action_server,
                &request_header,
                reconf_goal_request);

            usleep(100);

        }while(ret == 0);



        //do something
        rcl_action_goal_info_t goal_info = rcl_action_get_zero_initialized_goal_info();
        // ... populate goal_info.uuid (unique_identifier_msgs/UUID)
        // ... populate goal_info.stamp (builtin_interfaces/Time)
        rcl_action_goal_handle_t * goal_handle = rcl_action_accept_new_goal(&ros_reconf_server->action_server, &goal_info);
        // ... error_handling
        // ... Populate goal response (client library type)
        ret |= rcl_action_send_goal_response(
                &ros_reconf_server->action_server, 
                &request_header, 
                &reconf_goal_response);

        //Send something on the feedback channel

        ret |= rcl_action_take_result_request(
        &ros_reconf_server->action_server,
        &response_header,
        reconf_response_request);

        
        ret |= rcl_action_publish_feedback(
        &ros_reconf_server->action_server,
        reconros__action__Reconf_Feedback);



        ret |= rcl_action_send_result_response(
            &ros_reconf_server->action_server,
            &response_header,
            reconf_response_response);


        // undefined reference
        //ret = rcl_action_goal_info_fini(&goal_info, &ros_reconf_server->action_server);
        
    }

    return 0;
}


void ros_reconf_server_init( t_ros_reconf_server * ros_reconf_server, struct ros_node_t * _ros_node, char * _action_name)
{
    rcl_ret_t ret = 0;

    ros_reconf_server->ros_node = _ros_node;


    const rosidl_action_type_support_t * ts = ROSIDL_GET_ACTION_TYPE_SUPPORT(reconros, Reconf);

    rcl_action_server_options_t action_server_options = rcl_action_server_get_default_options();

    ret |= rcl_clock_init(  RCL_STEADY_TIME, &ros_reconf_server->clock,&_ros_node->allocator);

    ret |= rcl_action_server_init(
        &ros_reconf_server->action_server,
        &_ros_node->node,
        &ros_reconf_server->clock,
        ts,
        _action_name,
        &action_server_options);

    pthread_create(&ros_reconf_server->agent, NULL, &agent_thread, (void*)ros_reconf_server);
}


void ros_reconf_server_destroy( t_ros_reconf_server * ros_reconf_server)
{
    void * thread_ret;

    ros_reconf_server->bEnable = 0;

    pthread_join(ros_reconf_server->agent, &thread_ret);
    rcl_action_server_fini(&ros_reconf_server->action_server, &ros_reconf_server->ros_node->node);

}