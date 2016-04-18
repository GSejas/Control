///*******************************************************************************
//* File: main.c
//

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
    VDAC8_1_Start();
    /* Start ADC and start conversion */
    ADC_Start();
    ADC_StartConvert();

    /* Start LCD and set position */
    LCD_Start();
    LCD_Position(0,1);
    LCD_PrintString("ADC input volt");
    
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
            sprintf(displayStr,"    %4ld mV",averageVolts);
            VDAC8_1_SetValue(averageVolts);
            LCD_Position(1,0);
            LCD_PrintString(displayStr);
        }	
    }
}

/* [] END OF FILE */