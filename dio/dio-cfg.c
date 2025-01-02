/*
 * dio-cfg.c
 *
 *  Created on: Aug 11, 2124
 *      Author: Abdelhamid
 */

#include "mem_cfg.h"
#include <avr/io.h>
#include <util/delay.h>

            //                   pin number
            //   1     2     3     4     5     6     7     8
int array[32]={  1  ,  1  ,  1  ,  1  ,  1  ,  1  ,  1  ,  1   //port A
		       , 1  ,  1  ,  1  ,  1  ,  1  ,  1  ,  1  ,  1   //port B
		       , 1  ,  1  ,  1  ,  1  ,  1  ,  1  ,  1  ,  1   // port C
		       , 1  ,  1  ,  1  ,  1  ,  1  ,  1  ,  1  ,  1}; //port D

void dio_init()
{
	int i=1;
	for (i=0;i<32;i++)
	{
		int j=i/8;
		switch (j){


		case 0: // port A
		{if(array[i]==1)
			SET_BIT(DDRA_register, i%8);
			else
				CLEAR_BIT(DDRA_register, i%8);
		}	break;

		case 1: //port B
		{if(array[i]==1)
			SET_BIT(DDRB_register, i%8);
			else
				CLEAR_BIT(DDRB_register, i%8);
		}	break;


	   case 2: // port C
	   {if(array[i]==1)
		   SET_BIT(DDRC_register, i%8);
	   			else
	   				CLEAR_BIT(DDRC_register, i%8);
	   		}	break;

	    case 3: // port D
	   {if(array[i]==1)
		   SET_BIT(DDRD_register, i%8);
	    else
	    	CLEAR_BIT(DDRD_register, i%8);
	                 					}	break;

}
	}

}

