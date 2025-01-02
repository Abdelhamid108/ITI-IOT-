#include <avr/interrupt.h>
#include <util/delay.h>
#include "s_segment.h"
#include "mem_cfg.h"

#define F_CPU 8000000UL

int main(void) {


	    dio_init();
		UART_init();
		PORTC_DATA=0x00;
		while(1)
		{
		/*UART_char_trans('a'); //for transmit
	    _delay_ms(50); // Send each character in the string
		}*/


		if(UART_Char_Read()== 'a') // for receive
					{
					SET_BIT(PORTC_DATA,6);
					_delay_ms(1000);
					}
		}
			return 0;


		}
