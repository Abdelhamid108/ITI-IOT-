/*
 * mem_cfg.h
 *
 *  Created on: Aug 9, 2024
 *      Author: Abdelhamid
 */

#ifndef MEM_CFG_H_
#define MEM_CFG_H_
# define DDRA_register *((volatile char*)0x3A)
# define DDRB_register *((volatile char*)0x37)
# define DDRC_register *((volatile char*)0x34)
# define DDRD_register *((volatile char*)0x31)


# define PORTA_DATA *((volatile char*)0x3B)
# define PORTB_DATA *((volatile char*)0x38)
# define PORTC_DATA *((volatile char*)0x35)
# define PORTD_DATA *((volatile char*)0x32)

# define PINA *((volatile char*)0x39)
# define PINB *((volatile char*)0x36)
# define PINC *((volatile char*)0x33)
# define PIND *((volatile char*)0x30)


# define UCSRC *((volatile char*)0x40)
# define UCSRB *((volatile char*)0x2A)
# define UCSRA *((volatile char*)0x2B)
# define UBRRL *((volatile char*)0x29)
# define UDR *((volatile char*)0x2c)









//Macro to clear a specific bit
#define CLEAR_BIT(value, bit) ((value) &= ~(1 << (bit)))

//Macro to set a specific bit
#define SET_BIT(value, bit) ((value) |= (1 << (bit)))

//Macro to read a specific bit
#define READ_BIT(value, bit) (((value) >> (bit)) & 1)

//Macro to toggle a specific bit
#define TOGGLE_BIT(value, bit) ((value) ^=(1 << (bit)))
unsigned int UART_Char_Read();
void UART_init();
void dio_init();
void dio_write_pin(char port, int Pin ,int value);
char read_bit(char port ,int pin);
void UART_char_trans(char x);



#endif /* MEM_CFG_H_ */
