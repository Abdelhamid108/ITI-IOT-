/*
 * main_segment.c

 *
 *  Created on: Aug 11, 2024
 *      Author: Abdelhamid
 */
#include "mem_cfg.h"
#include <avr/io.h>
#include <util/delay.h>

int main ()
{
	int i;
	 while (1)
	 {
		 for(i=0;i<10;i++)
		 {
			 S_SEGMENT_count(i);
			 _delay_ms(1000);
		 }
	 }
}

