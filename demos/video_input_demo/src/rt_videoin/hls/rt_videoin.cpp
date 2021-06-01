#include "reconos_thread.h"
#include "reconos_calls.h"

#define CNT_THRES  76800

THREAD_ENTRY()
{
	#pragma HLS INTERFACE axis port=Cam1
	
	THREAD_INIT();
	uint32 cnt = 0;
	uint32 output_buffer_addr = GET_INIT_DATA();
	uint32 addr_cnt = output_buffer_addr;
	while (1)
	{
		int i = 0;

		t_stream datain;
		uint32 ram[128];

		for(i = 0; i < 128; i++)
		{
			datain = Cam1.read();
			cnt++;
			ram[i] = datain.data;
			
			if(datain.last)
				break;
		}
		
		MEM_WRITE( ram, addr_cnt, i*4);

		if((cnt >= CNT_THRES) || datain.last)
		{
			addr_cnt = output_buffer_addr;
			cnt = 0;
		}			
		else
		{
			addr_cnt += 128 * 4;
			
		}
			

		

	}
}
