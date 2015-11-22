/**
  Switch Source File

  Company:
    Microchip Technology Inc.

  File Name:
    switch.c

  Summary:
    This is the source file used to switch to the next lab

  Description:
    This source file contains the code on how the switch works to cycle through the labs. 
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
                             Application    
 */
void Switch(void){
    // Check if S1 is previously down (pressed).
    if(btnState == NOT_PRESSED){
        // Check if S1 is down (pressed)
        if(S1_PORT == DOWN){       
            // Change the button's state to PRESSED
            btnState = PRESSED;
        }  
    }else{
        // Check if S1 is up (not pressed)
        if(S1_PORT == UP){        
            // Change the button's state to NOT_PRESSED
            btnState = NOT_PRESSED;   
            
            // Indicate a switch event
            switchEvent = 1;                                                   
        }
    }
}
/**
 End of File
 */