/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB� Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB� Code Configurator - v2.25.2
        Device            :  PIC16F1619
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 v1.34
        MPLAB             :  MPLAB X v3.05
 */

/*
Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
 */

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set D5 aliases
#define D5_TRIS               TRISA1
#define D5_LAT                LATA1
#define D5_PORT               RA1
#define D5_ANS                ANSA1
#define D5_SetHigh()    do { LATA1 = 1; } while(0)
#define D5_SetLow()   do { LATA1 = 0; } while(0)
#define D5_Toggle()   do { LATA1 = ~LATA1; } while(0)
#define D5_GetValue()         RA1
#define D5_SetDigitalInput()    do { TRISA1 = 1; } while(0)
#define D5_SetDigitalOutput()   do { TRISA1 = 0; } while(0)

#define D5_SetAnalogMode()   do { ANSA1 = 1; } while(0)
#define D5_SetDigitalMode()   do { ANSA1 = 0; } while(0)
// get/set D6 aliases
#define D6_TRIS               TRISA2
#define D6_LAT                LATA2
#define D6_PORT               RA2
#define D6_ANS                ANSA2
#define D6_SetHigh()    do { LATA2 = 1; } while(0)
#define D6_SetLow()   do { LATA2 = 0; } while(0)
#define D6_Toggle()   do { LATA2 = ~LATA2; } while(0)
#define D6_GetValue()         RA2
#define D6_SetDigitalInput()    do { TRISA2 = 1; } while(0)
#define D6_SetDigitalOutput()   do { TRISA2 = 0; } while(0)

#define D6_SetAnalogMode()   do { ANSA2 = 1; } while(0)
#define D6_SetDigitalMode()   do { ANSA2 = 0; } while(0)
// get/set D4 aliases
#define D4_TRIS               TRISA5
#define D4_LAT                LATA5
#define D4_PORT               RA5
#define D4_SetHigh()    do { LATA5 = 1; } while(0)
#define D4_SetLow()   do { LATA5 = 0; } while(0)
#define D4_Toggle()   do { LATA5 = ~LATA5; } while(0)
#define D4_GetValue()         RA5
#define D4_SetDigitalInput()    do { TRISA5 = 1; } while(0)
#define D4_SetDigitalOutput()   do { TRISA5 = 0; } while(0)

// get/set POT1 aliases
#define POT1_TRIS               TRISC0
#define POT1_LAT                LATC0
#define POT1_PORT               RC0
#define POT1_ANS                ANSC0
#define POT1_SetHigh()    do { LATC0 = 1; } while(0)
#define POT1_SetLow()   do { LATC0 = 0; } while(0)
#define POT1_Toggle()   do { LATC0 = ~LATC0; } while(0)
#define POT1_GetValue()         RC0
#define POT1_SetDigitalInput()    do { TRISC0 = 1; } while(0)
#define POT1_SetDigitalOutput()   do { TRISC0 = 0; } while(0)

#define POT1_SetAnalogMode()   do { ANSC0 = 1; } while(0)
#define POT1_SetDigitalMode()   do { ANSC0 = 0; } while(0)
// get/set S1 aliases
#define S1_TRIS               TRISC4
#define S1_LAT                LATC4
#define S1_PORT               RC4
#define S1_WPU                WPUC4
#define S1_SetHigh()    do { LATC4 = 1; } while(0)
#define S1_SetLow()   do { LATC4 = 0; } while(0)
#define S1_Toggle()   do { LATC4 = ~LATC4; } while(0)
#define S1_GetValue()         RC4
#define S1_SetDigitalInput()    do { TRISC4 = 1; } while(0)
#define S1_SetDigitalOutput()   do { TRISC4 = 0; } while(0)

#define S1_SetPullup()    do { WPUC4 = 1; } while(0)
#define S1_ResetPullup()   do { WPUC4 = 0; } while(0)
// get/set D7 aliases
#define D7_TRIS               TRISC5
#define D7_LAT                LATC5
#define D7_PORT               RC5
#define D7_WPU                WPUC5
#define D7_SetHigh()    do { LATC5 = 1; } while(0)
#define D7_SetLow()   do { LATC5 = 0; } while(0)
#define D7_Toggle()   do { LATC5 = ~LATC5; } while(0)
#define D7_GetValue()         RC5
#define D7_SetDigitalInput()    do { TRISC5 = 1; } while(0)
#define D7_SetDigitalOutput()   do { TRISC5 = 0; } while(0)

#define D7_SetPullup()    do { WPUC5 = 1; } while(0)
#define D7_ResetPullup()   do { WPUC5 = 0; } while(0)

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    GPIO and peripheral I/O initialization
 * @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize(void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);

#endif // PIN_MANAGER_H
/**
 End of File
 */