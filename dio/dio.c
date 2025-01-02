/*
 * dio.c
 *
 *  Created on: Aug 10, 2024
 *      Author: Abdelhamid
 */
#include "mem_cfg.h"
#include <avr/io.h>
#include <util/delay.h>

void dio_write_pin(char port, int Pin ,int value)
{

	int pin_local=Pin-1;
		switch (port){


		case 'a':  //  port A
		case 'A':  //  port A
		{if(value==1)
			SET_BIT(PORTA_DATA, pin_local);
			else
				CLEAR_BIT(PORTA_DATA, pin_local);
		}	break;
		case 'b':  //port B
		case 'B':  //port B
		{if(value==1)
			SET_BIT(PORTB_DATA, pin_local);
			else
				CLEAR_BIT(PORTB_DATA, pin_local);
		}	break;
		case 'c':  //port C
		case 'C':  //port C
		{if(value==1)
		SET_BIT(PORTC_DATA, pin_local);
		else
		CLEAR_BIT(PORTC_DATA, pin_local);
						}	break;
		case 'd':  // port D
		case 'D':  // port D
	    {if(value==1)
		SET_BIT(PORTD_DATA, pin_local);
	      else
	  	CLEAR_BIT(PORTD_DATA, pin_local);
	                 					}	break;

}
}

char read_bit(char port ,int pin)
{
  char result=0;
	switch (port)
	{

		case 'a':  //  port A
		case 'A':  //  port A
		{
			result =READ_BIT(PINA, pin);
		}	break;
		case 'b':  //  port B
		case 'B':  //  port B
		{
			result =READ_BIT(PINB, pin);
		}	break;
		case 'c':  //  port C
		case 'C':  //  port C
		{
			result =READ_BIT(PINC, pin);
		}	break;
		case 'd':  //  port D
		case 'D':  //  port D
	    {
	    	result =READ_BIT(PIND, pin);
	    } break;
}
	return result;
}
