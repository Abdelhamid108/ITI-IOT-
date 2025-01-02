/*
 * 7segment.c
 *
 *  Created on: Aug 10, 2024
 *      Author: Abdelhamid
 */
/*
 * 7segment.c
 *
 *  Created on: Aug 10, 2024
 *      Author: Abdelhamid
 */
#include "mem_cfg.h"
#include "s_segment.h"
#include <avr/io.h>
#include <util/delay.h>

void S_SEGMENT_count(int no)
{
    dio_init();
    switch (no)
    {
        case 0: PORTB_DATA =~ SEGMENT_0; break;
        case 1: PORTB_DATA =~ SEGMENT_1; break;
        case 2: PORTB_DATA =~ SEGMENT_2; break;
        case 3: PORTB_DATA =~ SEGMENT_3; break;
        case 4: PORTB_DATA =~ SEGMENT_4; break;
        case 5: PORTB_DATA =~ SEGMENT_5; break;
        case 6: PORTB_DATA =~ SEGMENT_6; break;
        case 7: PORTB_DATA =~ SEGMENT_7; break;
        case 8: PORTB_DATA =~ SEGMENT_8; break;
        case 9: PORTB_DATA =~ SEGMENT_9; break;
        default: PORTB_DATA = 0x00; break;
    }
}

