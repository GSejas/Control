#include <device.h>
#include "stdio.h"
#include "stdlib.h"

/* Number of samples to be taken before averaging the ADC value */
#define MAX_SAMPLE                  ((uint8)128)

/* Threshold value to reset the filter for sharp change in signal */
#define SIGNAL_SLOPE                1000

/* Number of shifts for calculating the sum and average of MAX_SAMPLE */
#define DIV                         7

int main(void)
{
    uint8 i;
    
    /* Array to store ADC count for moving average filter */
    int32 adcCounts[MAX_SAMPLE] = {0};
    
    /* Variable to hold ADC conversion result */
    int32 result = 0;
    
    /* Variable to store accumulated sample for filter array */
    int32 sum = 0;
    
    /* Variable for testing sharp change in signal slope */
    int16 diff = 0;
    
    /* Variable to hold the result in micro volts converted from filtered 
     * ADC counts */
    int32 microVolts = 0;
	
    /* Variable to hold the moving average filtered value */
    int32 averageCounts = 0;
	
    /* Index variable to work on the filter array */
    uint8 index = 0;
    
    /* Character array to hold the micro volts*/
    char displayStr[15] = {'\0'};        

    CYGlobalIntEnable;

    /* Start ADC and start conversion */
    ADC_Start();
    ADC_StartConvert();

    /* Start LCD and set position */
    LCD_Start();
    LCD_Position(0,0);
    LCD_PrintString("ADC input volt");

    /* Print µV unit on the LCD */
    LCD_Position(1,8);
    LCD_WriteData(0xE4);
    LCD_PutChar('V');
    
    /* Read one sample from the ADC and initialize the filter */
    ADC_IsEndConversion(ADC_WAIT_FOR_RESULT);
    result = ADC_GetResult32();
    
    for(i = 0; i < MAX_SAMPLE; i++)
    {
        adcCounts[i] = result;
    }
    
    /* Store sum of 128 samples*/
    sum = result << DIV;
    
    /* Average count is equal to one single sample for first ADC reading */
    averageCounts = result;
    
    while(1)
    {
        ADC_IsEndConversion(ADC_WAIT_FOR_RESULT);
        result = ADC_GetResult32();
        
        diff = abs(averageCounts - result);

        /* If sharp change in the signal then reset the filter with the new 
         * signal value */
        if(diff > SIGNAL_SLOPE)
        {
            for(i = 0; i < MAX_SAMPLE; i++)
            {
                adcCounts[i] = result;
            }
            
            /* Store sum of 128 samples*/
            sum = result << DIV;
    
            /* Average count is equal to new sample */
            averageCounts = result;
            index = 0;
        }
        
        /* Get moving average */
        else
        {
            /* Remove the oldest element and add new sample to sum and get 
             * the average */
            sum = sum - adcCounts[index];
            sum = sum + result;
            averageCounts = sum >> DIV;
            
            /* Remove the oldest sample and store new sample */
            adcCounts[index] = result;
            index++;
            if (index == MAX_SAMPLE)
            {
                index = 0;
            }
        }
        microVolts = ADC_CountsTo_uVolts(averageCounts);
            
        /* Convert micro volts to string and display on the LCD */
        sprintf(displayStr,"%7ld",microVolts);

        LCD_Position(1,0);
        LCD_PrintString(displayStr);
    }	
}

/* [] END OF FILE */

