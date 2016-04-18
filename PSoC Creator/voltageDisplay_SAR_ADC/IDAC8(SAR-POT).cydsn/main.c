///*******************************************************************************
//* File: main.c
/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Summary:
*  Main function performs following functions:
*   1: Initializes the LCD and clears the display
*   2: Start the IDAC
*   3: IDAC range is set to 255uA and value to 100
*   4: Prints test name on LCD
*
* Parameters:
*  None.
*
* Return:
*  None.
*
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
    
    /* Start the IDAC component */
    IDAC8_1_Start();             

    /* Sets the IDAC full scale range to 255uA */
    IDAC8_1_SetRange(IDAC8_1_RANGE_255uA);    
    
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
            
            IDAC8_1_SetValue(averageVolts);
            
            LCD_Position(1,0);
            LCD_PrintString(displayStr);
        }	
    }
}

/* [] END OF FILE */


