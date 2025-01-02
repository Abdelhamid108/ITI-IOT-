#include "mem_cfg.h"
#include <avr/io.h>
#include <util/delay.h>
 int main ()
 {



	 dio_init();
	 	while(1)
	 	{
	 		dio_write_pin('B',2,1);
	 	}
	 	return 0;
 }
