/*
 *                                                        ____  _____
 *                            ________  _________  ____  / __ \/ ___/
 *                           / ___/ _ \/ ___/ __ \/ __ \/ / / /\__ \
 *                          / /  /  __/ /__/ /_/ / / / / /_/ /___/ /
 *                         /_/   \___/\___/\____/_/ /_/\____//____/
 *
 * ======================================================================
 *
 *   title:        Application library
 *
 *   project:      ReconOS
 *   author:       Andreas Agne, University of Paderborn
 *                 Christoph Rüthing, University of Paderborn
 *   description:  Auto-generated application specific header file
 *                 including definitions of all resources and functions
 *                 to instantiate resources and threads automatically.
 *
 * ======================================================================
 */



#include "reconos_app.h"

#include "reconos.h"
#include "utils.h"



/* == Application resources ============================================ */

/*
 * @see header
 */








struct ros_node_t resources_node_1_s;
struct ros_node_t *resources_node_1 = &resources_node_1_s;



struct ros_subscriber_t resources_subdata_s;
struct ros_subscriber_t *resources_subdata = &resources_subdata_s;



struct ros_publisher_t resources_pubdata_s;
struct ros_publisher_t *resources_pubdata = &resources_pubdata_s;



sensor_msgs__msg__Image resources_image_msg_s;
sensor_msgs__msg__Image *resources_image_msg = &resources_image_msg_s;




struct reconos_resource resources_image_msg_res = {
	.ptr = &resources_image_msg_s,
	.type = RECONOS_RESOURCE_TYPE_ROSMSG
};

struct reconos_resource resources_node_1_res = {
	.ptr = &resources_node_1_s,
	.type = RECONOS_RESOURCE_TYPE_ROSNODE
};

struct reconos_resource resources_subdata_res = {
	.ptr = &resources_subdata_s,
	.type = RECONOS_RESOURCE_TYPE_ROSSUB
};

struct reconos_resource resources_pubdata_res = {
	.ptr = &resources_pubdata_s,
	.type = RECONOS_RESOURCE_TYPE_ROSPUB
};




/* == Application functions ============================================ */

/*
 * @see header
 */
void reconos_app_init() {
	

	

	

	

		ros_node_init(resources_node_1, "fiternode");
	

		ros_subscriber_init(resources_subdata, resources_node_1,rosidl_typesupport_c__get_message_type_support_handle__sensor_msgs__msg__Image(), "/image", 10000);
	

		ros_publisher_init(resources_pubdata, resources_node_1,rosidl_typesupport_c__get_message_type_support_handle__sensor_msgs__msg__Image(), "filtered");
	

		resources_image_msg = sensor_msgs__msg__Image__create( );
	// VERY; VERY UGLY
	memcpy(&resources_image_msg_s, resources_image_msg, sizeof(resources_image_msg_s));
	resources_image_msg = &resources_image_msg_s;
	


	
}

/*
 * @see header
 */
void reconos_app_cleanup() {
	

	

	

	

		ros_node_destroy(resources_node_1);
	

		ros_subscriber_destroy(resources_subdata);
	

		ros_publisher_destroy(resources_pubdata);
	


		sensor_msgs__msg__Image__destroy(resources_image_msg);
	

	


}

/*
 * Empty software thread if no software specified
 *
 *   data - pointer to ReconOS thread
 */
void *swt_idle(void *data) {
	pthread_exit(0);
}

struct reconos_resource *resources_filterdemo[] = {&resources_image_msg_res,&resources_node_1_res,&resources_subdata_res,&resources_pubdata_res};

/*
 * @see header
 */
struct reconos_thread *reconos_thread_create_hwt_filterdemo(void * init_data) {
	struct reconos_thread *rt = (struct reconos_thread *)malloc(sizeof(struct reconos_thread));
	if (!rt) {
		panic("[reconos-core] ERROR: failed to allocate memory for thread\n");
	}

	int slots[] = {0,1};
	reconos_thread_init(rt, "filterdemo", 0);
	reconos_thread_setinitdata(rt, init_data);
	reconos_thread_setallowedslots(rt, slots, 2);
	reconos_thread_setresourcepointers(rt, resources_filterdemo, 4);
	reconos_thread_create_auto(rt, RECONOS_THREAD_HW);

	return rt;
}


extern void *rt_filterdemo(void *data);

/*
 * @see header
 */
struct reconos_thread *reconos_thread_create_swt_filterdemo(void * init_data, int priority) {
	struct reconos_thread *rt = (struct reconos_thread *)malloc(sizeof(struct reconos_thread));
	if (!rt) {
		panic("[reconos-core] ERROR: failed to allocate memory for thread\n");
	}

	int slots[] = {0,1};
	reconos_thread_init(rt, "filterdemo", 0);
	reconos_thread_setpriority(rt, priority);
	reconos_thread_setinitdata(rt, init_data);
	reconos_thread_setallowedslots(rt, slots, 2);
	reconos_thread_setresourcepointers(rt, resources_filterdemo, 4);
	reconos_thread_setswentry(rt, rt_filterdemo);
	reconos_thread_create_auto(rt, RECONOS_THREAD_SW);

	return rt;
}


/*
 * @see header
 */
void reconos_thread_destroy_filterdemo(struct reconos_thread *rt) {
	// not implemented yet
}



/*
 * @see header
 */
int reconos_clock_system_set(int f)
{
	return reconos_clock_set(0, 8, f);
}

/*
 * @see header
 */
int reconos_clock_threads_set(int f)
{
	return reconos_clock_set(1, 12, f);
}


