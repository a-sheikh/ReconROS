#include "memory.h"
#include <sys/mman.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <fcntl.h>


#include "reconos.h"
#include "reconos_app.h"


#define FB_SIZE 1920*1080*4*10


uint32_t calculate_hash(uint32_t* fb, uint32_t size)
{
    uint32_t ret = 0;

    for(int i = 0; i < size; i++)
        ret ^= fb[i];

    return ret;
}


int main(int argc, char **argv) {

    reconos_init();
    reconos_app_init();
	

	uint32_t* fb = malloc(FB_SIZE);
    
    if(fb == NULL)
    {
        printf("Erroc malloc fb \n");
        return -1;
    }

    reconos_thread_create_hwt_videoin((void*)fb);


    while(1)
    {
        sleep(1);
        printf("Hash: %x \n\r", calculate_hash(fb, FB_SIZE/4));
       
    }

	return 0;
}
