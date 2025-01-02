
typedef unsigned char u8 ;
#include "mem_cfg.h"
#include <util/delay.h>

void UART_init()
{
	SET_BIT(UCSRC,7);
	SET_BIT(UCSRC,1);
	SET_BIT(UCSRC,2);
	UBRRL = 51;

// Enabl  e receiver and transmitter4
	SET_BIT(UCSRB,3);
	SET_BIT(UCSRB,4);


}
void UART_char_trans(char x) {
    // Wait until the transmit buffer is empty (UDRE flag set)
    while (!(UCSRA&(1<<5)))
    {

    }
    // Send the character
    UDR = x;
}
unsigned int UART_Char_Read()
{
	/* Wait for data to be received */
	while (!(UCSRA & (1<<7)) )
	;

	return UDR;
}
