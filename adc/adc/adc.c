/*
 * adc.c
 *
 *  Created on: Aug 16, 2024
 *      Author: Abdelhamid
 */
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include "s_segment.h"
#include "mem_cfg.h"
int main ()
{
	SET_BIT(ADCSRA, ADEN);  // Enable ADC

	while (1)
	{
	    SET_BIT(ADCSRA, ADSC);  // Start ADC conversion
	    while (READ_BIT(ADCSRA, ADSC)) {
	        // Wait for the conversion to complete
	    }

	    uint16_t adc_value = ADCW;  // Read the ADC value
	    float voltage = (adc_value / 1023.0) * 5;  // Convert ADC value to voltage

	    if (voltage <= 2) {
	        dio_write_pin('b', 1, 1);  // Turn on pin B1
	        dio_write_pin('b', 2, 0);
	        dio_write_pin('b', 3, 0);
	    } else if (voltage > 2 && voltage <= 3.5) {
	    	dio_write_pin('b', 1, 0);
	        dio_write_pin('b', 2, 1);  // Turn on pin B2
	        dio_write_pin('b', 3, 0);
	    } else {
	    	dio_write_pin('b', 1, 0);
	    	dio_write_pin('b', 2, 0);
	        dio_write_pin('b', 3, 1);  // Turn on pin B3
	    }

	    _delay_ms(100);  // Small delay to avoid rapid toggling
	}

}
