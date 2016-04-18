#include <device.h>
#include <stdio.h>

#if defined (__GNUC__)
    /* Add an explicit reference to the floating point printf library */
    /* to allow the usage of floating point conversion specifiers. */
    /* This is not linked in by default with the newlib-nano library. */
    asm (".global _printf_float");
#endif


#define RD_BUFFER_LEN           (64u)
#define WR_BUFFER_LEN           (64u)
#define MUX_SIZE                (4u)
#define MAX_SAMPLE 				  8

/* Function that encapsulates the process of writing text strings to USBUART */
void PrintToUSBUART(char8 * outText);


/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Summary:
*  main() performs following functions:
*   1.Reads ADC value continuosly
*   2. Sends it over USBUART
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void main()
{
    /* adcReading holds the converted 16-bit data from the ADC */
    uint16 adcReading = 0u;
    uint8 wrBuffer[WR_BUFFER_LEN];

    /* Enable Global interrupts - used for USB communication */
    int32 voltSamples = 0;
	uint8 sampleCount=0;
	int32 mVolts=0; 
	int32 averageVolts=0;
    
	CyGlobalIntEnable;

    
    USBUART_1_Start(0u, USBUART_1_5V_OPERATION);
    LCD_Start();
    
    ADC_SAR_0_Start();
	ADC_SAR_0_StartConvert();
    /* Wait for Device to enumerate */
    while(!USBUART_1_GetConfiguration());

    /* Enumeration is complete, enable OUT endpoint for received data from Host */
    USBUART_1_CDC_Init();

    for(;;)
    {	
				
                
        ADC_SAR_0_IsEndConversion(ADC_SAR_0_WAIT_FOR_RESULT);
        adcReading = ADC_SAR_0_GetResult16();
		mVolts = ADC_SAR_0_CountsTo_mVolts(adcReading);
		voltSamples = voltSamples + mVolts;
		sampleCount++;

		if(sampleCount == MAX_SAMPLE)
			{
				int u;
                for(u=0; u<100000;u++){}
                averageVolts = voltSamples >> 3;
				voltSamples = 0;
				sampleCount = 0;

				/* Convert milli volts to string and display on the LCD. sprintf()
				*  function is standard library function defined in the stdio.h 
				*  header file */ 
				sprintf((char *)wrBuffer, "%4ld mV \n",averageVolts);
				LCD_ClearDisplay();
                LCD_Position(1,0);
				LCD_PrintString((char8 *)wrBuffer);
				PrintToUSBUART((char8 *)wrBuffer);
			}  
    }  /* End of forever loop */
}  /* End of main */


/*******************************************************************************
* Function Name: PrintToUSBUART
********************************************************************************
*
* Summary:
*  The input string passed to the function is printed to the USBUART
*  interface when the CDC device is ready.
*
* Parameters:
*  Text to be printed to USBUART as a string.
*
* Return:
*  None.
*
*******************************************************************************/

void PrintToUSBUART(char8 * outText)
{
    /* Wait till the CDC device is ready before sending data */
    while(USBUART_1_CDCIsReady() == 0u);
    /* Send strlen number of characters of wrBuffer to USBUART */
    USBUART_1_PutData((uint8 *)outText, strlen(outText));
}


/* [] END OF FILE */
