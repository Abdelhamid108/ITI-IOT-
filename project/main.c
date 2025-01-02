

/*
 * main.c
 *
 *  contents written by : hazem yasser mahmoud
 *      G4
 */

/*
 * main.c
 *
 *  Created on: 27 aug 2024
 *      Author: abdelhameed nayel
 *      */

#include "Std_Types.h"
#include "Utils.h"
#include "DIO_Local.h"
#include "DIO_config.h"
#include "DIO.h"
#include "delay.h"
#include "UART.h"
#include "WiMOD_LoRaWAN_API.h"

// Device EUI:
unsigned char DeviceEUI[8] = {0x35, 0xff, 0xa9, 0x55, 0x34, 0xa4, 0x1d, 0xcf};

// Device address:
unsigned char DeviceAddress[4] = {0xe2, 0x16, 0x6e, 0x01};

// Application session key (LoRaWAN 1.0):
unsigned char ApplicationSessionKey[16] = {0xee, 0xf1, 0xbb, 0x14, 0x3e, 0x25, 0x60, 0x4f, 0xf8, 0xa8, 0x86, 0x09, 0x33, 0x28, 0x2c, 0xa2};

// Network session key (LoRaWAN 1.0):
unsigned char NetworkSessionKey[16] = {0xbf, 0x36, 0xd1, 0xfa, 0xb8, 0x9c, 0x84, 0x1d, 0x74, 0xae, 0x03, 0xc3, 0xa0, 0x58, 0xdc, 0xde};

int main(void)

{
	DIO_voidInit;
    // Initialize UART
	UART_VIDint;

    // Initialize LoRaWAN
    WiMOD_LoRaWAN_Init();

    // Activate the device using ABP (Activation by Personalization)
    if (WiMOD_LoRaWAN_ABP_Activate(DeviceAddress, NetworkSessionKey, ApplicationSessionKey) != LORAWAN_STATUS_OK) {
        // Handle activation error
        while (1);  // Stay here if activation fails
    }

    uint8 port = 1;  // Data port
    uint8 counter = 0;
    char data[50];

    while (1) {
        // Prepare data to send
        sprintf(data, "Abdelhameed Nayel Abdelhameed %d", counter);

        // Send the data as unconfirmed radio data
        if (WiMOD_LoRaWAN_SendURadioData(port, (uint8*)data, strlen(data)) != LORAWAN_STATUS_OK) {
            // Handle transmission error
            while (1);  // Stay here if transmission fails
        }

        // Increment the counter
        counter++;

        // Delay before sending the next message
        delay_ms(1000);
    }

    return 0;
}
