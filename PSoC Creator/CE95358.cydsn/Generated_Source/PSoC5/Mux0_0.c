/*******************************************************************************
* File Name: Mux0_0.c  
* Version 2.5
*
* Description:
*  This file contains API to enable firmware control of a Pins component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "Mux0_0.h"

/* APIs are not generated for P15[7:6] on PSoC 5 */
#if !(CY_PSOC5A &&\
	 Mux0_0__PORT == 15 && ((Mux0_0__MASK & 0xC0) != 0))


/*******************************************************************************
* Function Name: Mux0_0_Write
********************************************************************************
*
* Summary:
*  Assign a new value to the digital port's data output register.  
*
* Parameters:  
*  prtValue:  The value to be assigned to the Digital Port. 
*
* Return: 
*  None
*  
*******************************************************************************/
void Mux0_0_Write(uint8 value) 
{
    uint8 staticBits = (Mux0_0_DR & (uint8)(~Mux0_0_MASK));
    Mux0_0_DR = staticBits | ((uint8)(value << Mux0_0_SHIFT) & Mux0_0_MASK);
}


/*******************************************************************************
* Function Name: Mux0_0_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to one of the following drive modes.
*
*  Mux0_0_DM_STRONG     Strong Drive 
*  Mux0_0_DM_OD_HI      Open Drain, Drives High 
*  Mux0_0_DM_OD_LO      Open Drain, Drives Low 
*  Mux0_0_DM_RES_UP     Resistive Pull Up 
*  Mux0_0_DM_RES_DWN    Resistive Pull Down 
*  Mux0_0_DM_RES_UPDWN  Resistive Pull Up/Down 
*  Mux0_0_DM_DIG_HIZ    High Impedance Digital 
*  Mux0_0_DM_ALG_HIZ    High Impedance Analog 
*
* Return: 
*  None
*
*******************************************************************************/
void Mux0_0_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(Mux0_0_0, mode);
}


/*******************************************************************************
* Function Name: Mux0_0_Read
********************************************************************************
*
* Summary:
*  Read the current value on the pins of the Digital Port in right justified 
*  form.
*
* Parameters:  
*  None
*
* Return: 
*  Returns the current value of the Digital Port as a right justified number
*  
* Note:
*  Macro Mux0_0_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 Mux0_0_Read(void) 
{
    return (Mux0_0_PS & Mux0_0_MASK) >> Mux0_0_SHIFT;
}


/*******************************************************************************
* Function Name: Mux0_0_ReadDataReg
********************************************************************************
*
* Summary:
*  Read the current value assigned to a Digital Port's data output register
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value assigned to the Digital Port's data output register
*  
*******************************************************************************/
uint8 Mux0_0_ReadDataReg(void) 
{
    return (Mux0_0_DR & Mux0_0_MASK) >> Mux0_0_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(Mux0_0_INTSTAT) 

    /*******************************************************************************
    * Function Name: Mux0_0_ClearInterrupt
    ********************************************************************************
    * Summary:
    *  Clears any active interrupts attached to port and returns the value of the 
    *  interrupt status register.
    *
    * Parameters:  
    *  None 
    *
    * Return: 
    *  Returns the value of the interrupt status register
    *  
    *******************************************************************************/
    uint8 Mux0_0_ClearInterrupt(void) 
    {
        return (Mux0_0_INTSTAT & Mux0_0_MASK) >> Mux0_0_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 

#endif /* CY_PSOC5A... */

    
/* [] END OF FILE */
