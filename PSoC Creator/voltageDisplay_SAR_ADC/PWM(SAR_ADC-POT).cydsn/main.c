/******************************************************************************
* File Name: Main.c
*
* Version 1.1
*
* Description:
* This file contains the main function for the voltage Display test.
*
* Note:
*
* Code tested with:
* PSoC Creator: 3.0
* Device Tested With: CY8C5868AXI-LP035
* Compiler    : ARMGCC 4.4.1, ARM RVDS Generic, ARM MDK Generic
*
********************************************************************************
* Copyright (2013), Cypress Semiconductor Corporation. All Rights Reserved.
********************************************************************************
* This software is owned by Cypress Semiconductor Corporation (Cypress)
* and is protected by and subject to worldwide patent protection (United
* States and foreign), United States copyright laws and international treaty
* provisions. Cypress hereby grants to licensee a personal, non-exclusive,
* non-transferable license to copy, use, modify, create derivative works of,
* and compile the Cypress Source Code and derivative works for the sole
* purpose of creating custom software in support of licensee product to be
* used only in conjunction with a Cypress integrated circuit as specified in
* the applicable agreement. Any reproduction, modification, translation,
* compilation, or representation of this software except as specified above 
* is prohibited without the express written permission of Cypress.
*
* Disclaimer: CYPRESS MAKES NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, WITH 
* REGARD TO THIS MATERIAL, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
* Cypress reserves the right to make changes without further notice to the 
* materials described herein. Cypress does not assume any liability arising out 
* of the application or use of any product or circuit described herein. Cypress 
* does not authorize its products for use as critical components in life-support 
* systems where a malfunction or failure may reasonably be expected to result in 
* significant injury to the user. The inclusion of Cypress' product in a life-
* support systems application implies that the manufacturer assumes all risk of 
* such use and in doing so indemnifies Cypress against all charges. 
*
* Use of this Software may be limited by and subject to the applicable Cypress
* software license agreement. 
*******************************************************************************/

/******************************************************************************
*                           THEORY OF OPERATION
* This project demonstrates how ADC is used to read the input voltage at 
* it's input and display it on the LCD.
* 
* The Potentiometer is connected to the input of the SAR ADC. ADC is 
* configured with 12 bit of resolution to measure the input voltage with 
* higher accuracy. ADC count is converted back to micro volts and 8 samples are 
* collected. After that the average of 8 samples is calculated and displayed
* on the LCD. 
*
* Hardware connection on the Kit
* Potentiometer - PORT 6[5] 
* LCD - PORT 2[0..6]
*******************************************************************************/
#include <device.h>
#include "stdio.h"

#define MAX_SAMPLE                  8

int main(void)
{
    /* Variable to hold ADC count */
    int32 voltCount = 0;
    
    /* Variable to hold the result in millivolts converted from ADC counts */

    /* Variable to count number of samples collected from ADC */
    uint8 sampleCount = 0;
	
    /* Variable to hold cumulative samples */
    int32 voltSamples = 0;
	
    /* Variable to hold the average volts for 8 samples */
    uint32 averageVolts = 0;
	
    /* Character array to hold the micro volts*/
    char displayStr[15] = {'\0'};
    
    CYGlobalIntEnable;
    
    clock_1_Enable();    
    
    PWM_1_Start(); 
    
    /* Start ADC and start conversion */
    ADC_Start();
    ADC_StartConvert();

    /* Start LCD and set position */
    LCD_Start();
    LCD_Position(0,1);
    LCD_PrintString("ADC input volt");
    
//    uint8 PWM_V =0x00u;
//    Control_Reg_1_Write(0x0Fu);
    //PWM_1_WritePeriod(0x01u);
    while(1)
    {
        /* Read ADC count and convert to milli volts */
        ADC_IsEndConversion(ADC_WAIT_FOR_RESULT);
        voltCount = ADC_GetResult16();
//        mVolts = ADC_CountsTo_mVolts(voltCount);
//        
        /* Add the current ADC reading to the cumulated samples*/
        voltSamples = voltSamples + voltCount;

        sampleCount++;

        /* If 8 samples have been collected then average the samples and update the display*/
        if(sampleCount == MAX_SAMPLE)
        {
            averageVolts = voltSamples >> 3;
            voltSamples = 0;
            sampleCount = 0;

            /* Convert milli volts to string and display on the LCD. sprintf()
            *  function is standard library function defined in the stdio.h 
            *  header file */
//            PWM_V = averageVolts;
            sprintf(displayStr,"    %4ld mV",averageVolts);
            PWM_1_WriteCompare(averageVolts);
//            Control_Reg_1_Write(PWM_V);
            LCD_Position(1,0);
            LCD_PrintString(displayStr);
        }	
    }
}

/* [] END OF FILE */


