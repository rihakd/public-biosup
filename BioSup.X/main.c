/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using MPLAB® Code Configurator

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB® Code Configurator - v2.25.2
        Device            :  PIC16F1619
        Driver Version    :  2.00
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

/**
  Section: Included Files
 */

#include "mcc_generated_files/mcc.h"
#include "global.h"

/*
                         Main application
 */
void main(void){
    SYSTEM_Initialize();                                                        
    
    while (1){
        ADC();
        /*
        Switch();
        // Executes the function depending on the value of labNumber
        switch(labNumber){
                case 1:     HelloWorld();       break;
                case 2:     Blink();            break;
                case 3:     Rotate();           break;
                case 4:     ADC();              break;
                case 5:     VSR();              break;
                case 6:     PWM();              break;
                case 7:     Timer1();           break;
                case 8:     Interrupt();        break;
                case 9:     SleepWakeUp();      break;
                case 10:    HEF();              break;
        }
        
        // Did a switch event occur? If yes, reset the event flag and increment labNumber
        if(switchEvent){
            switchEvent = 0; 
            labNumber++;                                                        
        }

        // Is labNumber equal to 11? If yes, reset labNumber to 1 (HelloWorld)
        if(labNumber == 11)                                                     
            labNumber = 1;
         */
        
    }
}
/**
 End of File
 */