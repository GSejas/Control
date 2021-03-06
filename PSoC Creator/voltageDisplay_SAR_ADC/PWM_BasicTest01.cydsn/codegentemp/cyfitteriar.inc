#ifndef INCLUDED_CYFITTERIAR_INC
#define INCLUDED_CYFITTERIAR_INC
    INCLUDE cydeviceiar.inc
    INCLUDE cydeviceiar_trm.inc

/* PWM_1_PWMHW */
PWM_1_PWMHW__CAP0 EQU CYREG_TMR0_CAP0
PWM_1_PWMHW__CAP1 EQU CYREG_TMR0_CAP1
PWM_1_PWMHW__CFG0 EQU CYREG_TMR0_CFG0
PWM_1_PWMHW__CFG1 EQU CYREG_TMR0_CFG1
PWM_1_PWMHW__CFG2 EQU CYREG_TMR0_CFG2
PWM_1_PWMHW__CNT_CMP0 EQU CYREG_TMR0_CNT_CMP0
PWM_1_PWMHW__CNT_CMP1 EQU CYREG_TMR0_CNT_CMP1
PWM_1_PWMHW__PER0 EQU CYREG_TMR0_PER0
PWM_1_PWMHW__PER1 EQU CYREG_TMR0_PER1
PWM_1_PWMHW__PM_ACT_CFG EQU CYREG_PM_ACT_CFG3
PWM_1_PWMHW__PM_ACT_MSK EQU 0x01
PWM_1_PWMHW__PM_STBY_CFG EQU CYREG_PM_STBY_CFG3
PWM_1_PWMHW__PM_STBY_MSK EQU 0x01
PWM_1_PWMHW__RT0 EQU CYREG_TMR0_RT0
PWM_1_PWMHW__RT1 EQU CYREG_TMR0_RT1
PWM_1_PWMHW__SR0 EQU CYREG_TMR0_SR0

/* Pin_1 */
Pin_1__0__INTTYPE EQU CYREG_PICU0_INTTYPE0
Pin_1__0__MASK EQU 0x01
Pin_1__0__PC EQU CYREG_PRT0_PC0
Pin_1__0__PORT EQU 0
Pin_1__0__SHIFT EQU 0
Pin_1__AG EQU CYREG_PRT0_AG
Pin_1__AMUX EQU CYREG_PRT0_AMUX
Pin_1__BIE EQU CYREG_PRT0_BIE
Pin_1__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Pin_1__BYP EQU CYREG_PRT0_BYP
Pin_1__CTL EQU CYREG_PRT0_CTL
Pin_1__DM0 EQU CYREG_PRT0_DM0
Pin_1__DM1 EQU CYREG_PRT0_DM1
Pin_1__DM2 EQU CYREG_PRT0_DM2
Pin_1__DR EQU CYREG_PRT0_DR
Pin_1__INP_DIS EQU CYREG_PRT0_INP_DIS
Pin_1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
Pin_1__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Pin_1__LCD_EN EQU CYREG_PRT0_LCD_EN
Pin_1__MASK EQU 0x01
Pin_1__PORT EQU 0
Pin_1__PRT EQU CYREG_PRT0_PRT
Pin_1__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Pin_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Pin_1__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Pin_1__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Pin_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Pin_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Pin_1__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Pin_1__PS EQU CYREG_PRT0_PS
Pin_1__SHIFT EQU 0
Pin_1__SLW EQU CYREG_PRT0_SLW

/* Clock_2 */
Clock_2__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
Clock_2__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
Clock_2__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
Clock_2__CFG2_SRC_SEL_MASK EQU 0x07
Clock_2__INDEX EQU 0x00
Clock_2__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
Clock_2__PM_ACT_MSK EQU 0x01
Clock_2__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
Clock_2__PM_STBY_MSK EQU 0x01

/* clock_1 */
clock_1__CFG0 EQU CYREG_CLKDIST_DCFG1_CFG0
clock_1__CFG1 EQU CYREG_CLKDIST_DCFG1_CFG1
clock_1__CFG2 EQU CYREG_CLKDIST_DCFG1_CFG2
clock_1__CFG2_SRC_SEL_MASK EQU 0x07
clock_1__INDEX EQU 0x01
clock_1__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
clock_1__PM_ACT_MSK EQU 0x02
clock_1__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
clock_1__PM_STBY_MSK EQU 0x02

/* CharLCD_1_LCDPort */
CharLCD_1_LCDPort__0__INTTYPE EQU CYREG_PICU2_INTTYPE0
CharLCD_1_LCDPort__0__MASK EQU 0x01
CharLCD_1_LCDPort__0__PC EQU CYREG_PRT2_PC0
CharLCD_1_LCDPort__0__PORT EQU 2
CharLCD_1_LCDPort__0__SHIFT EQU 0
CharLCD_1_LCDPort__1__INTTYPE EQU CYREG_PICU2_INTTYPE1
CharLCD_1_LCDPort__1__MASK EQU 0x02
CharLCD_1_LCDPort__1__PC EQU CYREG_PRT2_PC1
CharLCD_1_LCDPort__1__PORT EQU 2
CharLCD_1_LCDPort__1__SHIFT EQU 1
CharLCD_1_LCDPort__2__INTTYPE EQU CYREG_PICU2_INTTYPE2
CharLCD_1_LCDPort__2__MASK EQU 0x04
CharLCD_1_LCDPort__2__PC EQU CYREG_PRT2_PC2
CharLCD_1_LCDPort__2__PORT EQU 2
CharLCD_1_LCDPort__2__SHIFT EQU 2
CharLCD_1_LCDPort__3__INTTYPE EQU CYREG_PICU2_INTTYPE3
CharLCD_1_LCDPort__3__MASK EQU 0x08
CharLCD_1_LCDPort__3__PC EQU CYREG_PRT2_PC3
CharLCD_1_LCDPort__3__PORT EQU 2
CharLCD_1_LCDPort__3__SHIFT EQU 3
CharLCD_1_LCDPort__4__INTTYPE EQU CYREG_PICU2_INTTYPE4
CharLCD_1_LCDPort__4__MASK EQU 0x10
CharLCD_1_LCDPort__4__PC EQU CYREG_PRT2_PC4
CharLCD_1_LCDPort__4__PORT EQU 2
CharLCD_1_LCDPort__4__SHIFT EQU 4
CharLCD_1_LCDPort__5__INTTYPE EQU CYREG_PICU2_INTTYPE5
CharLCD_1_LCDPort__5__MASK EQU 0x20
CharLCD_1_LCDPort__5__PC EQU CYREG_PRT2_PC5
CharLCD_1_LCDPort__5__PORT EQU 2
CharLCD_1_LCDPort__5__SHIFT EQU 5
CharLCD_1_LCDPort__6__INTTYPE EQU CYREG_PICU2_INTTYPE6
CharLCD_1_LCDPort__6__MASK EQU 0x40
CharLCD_1_LCDPort__6__PC EQU CYREG_PRT2_PC6
CharLCD_1_LCDPort__6__PORT EQU 2
CharLCD_1_LCDPort__6__SHIFT EQU 6
CharLCD_1_LCDPort__AG EQU CYREG_PRT2_AG
CharLCD_1_LCDPort__AMUX EQU CYREG_PRT2_AMUX
CharLCD_1_LCDPort__BIE EQU CYREG_PRT2_BIE
CharLCD_1_LCDPort__BIT_MASK EQU CYREG_PRT2_BIT_MASK
CharLCD_1_LCDPort__BYP EQU CYREG_PRT2_BYP
CharLCD_1_LCDPort__CTL EQU CYREG_PRT2_CTL
CharLCD_1_LCDPort__DM0 EQU CYREG_PRT2_DM0
CharLCD_1_LCDPort__DM1 EQU CYREG_PRT2_DM1
CharLCD_1_LCDPort__DM2 EQU CYREG_PRT2_DM2
CharLCD_1_LCDPort__DR EQU CYREG_PRT2_DR
CharLCD_1_LCDPort__INP_DIS EQU CYREG_PRT2_INP_DIS
CharLCD_1_LCDPort__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
CharLCD_1_LCDPort__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
CharLCD_1_LCDPort__LCD_EN EQU CYREG_PRT2_LCD_EN
CharLCD_1_LCDPort__MASK EQU 0x7F
CharLCD_1_LCDPort__PORT EQU 2
CharLCD_1_LCDPort__PRT EQU CYREG_PRT2_PRT
CharLCD_1_LCDPort__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
CharLCD_1_LCDPort__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
CharLCD_1_LCDPort__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
CharLCD_1_LCDPort__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
CharLCD_1_LCDPort__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
CharLCD_1_LCDPort__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
CharLCD_1_LCDPort__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
CharLCD_1_LCDPort__PS EQU CYREG_PRT2_PS
CharLCD_1_LCDPort__SHIFT EQU 0
CharLCD_1_LCDPort__SLW EQU CYREG_PRT2_SLW

/* Status_Reg_1 */
Status_Reg_1_sts_sts_reg__0__MASK EQU 0x01
Status_Reg_1_sts_sts_reg__0__POS EQU 0
Status_Reg_1_sts_sts_reg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB11_12_ACTL
Status_Reg_1_sts_sts_reg__16BIT_STATUS_REG EQU CYREG_B0_UDB11_12_ST
Status_Reg_1_sts_sts_reg__MASK EQU 0x01
Status_Reg_1_sts_sts_reg__MASK_REG EQU CYREG_B0_UDB11_MSK
Status_Reg_1_sts_sts_reg__MASK_ST_AUX_CTL_REG EQU CYREG_B0_UDB11_MSK_ACTL
Status_Reg_1_sts_sts_reg__PER_ST_AUX_CTL_REG EQU CYREG_B0_UDB11_MSK_ACTL
Status_Reg_1_sts_sts_reg__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB11_ACTL
Status_Reg_1_sts_sts_reg__STATUS_CNT_REG EQU CYREG_B0_UDB11_ST_CTL
Status_Reg_1_sts_sts_reg__STATUS_CONTROL_REG EQU CYREG_B0_UDB11_ST_CTL
Status_Reg_1_sts_sts_reg__STATUS_REG EQU CYREG_B0_UDB11_ST

/* Control_Reg_1 */
Control_Reg_1_Sync_ctrl_reg__0__MASK EQU 0x01
Control_Reg_1_Sync_ctrl_reg__0__POS EQU 0
Control_Reg_1_Sync_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB11_12_ACTL
Control_Reg_1_Sync_ctrl_reg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB11_12_CTL
Control_Reg_1_Sync_ctrl_reg__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB11_12_CTL
Control_Reg_1_Sync_ctrl_reg__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB11_12_CTL
Control_Reg_1_Sync_ctrl_reg__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB11_12_CTL
Control_Reg_1_Sync_ctrl_reg__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB11_12_MSK
Control_Reg_1_Sync_ctrl_reg__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB11_12_MSK
Control_Reg_1_Sync_ctrl_reg__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB11_12_MSK
Control_Reg_1_Sync_ctrl_reg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB11_12_MSK
Control_Reg_1_Sync_ctrl_reg__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB11_ACTL
Control_Reg_1_Sync_ctrl_reg__CONTROL_REG EQU CYREG_B0_UDB11_CTL
Control_Reg_1_Sync_ctrl_reg__CONTROL_ST_REG EQU CYREG_B0_UDB11_ST_CTL
Control_Reg_1_Sync_ctrl_reg__COUNT_REG EQU CYREG_B0_UDB11_CTL
Control_Reg_1_Sync_ctrl_reg__COUNT_ST_REG EQU CYREG_B0_UDB11_ST_CTL
Control_Reg_1_Sync_ctrl_reg__MASK EQU 0x01
Control_Reg_1_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB11_MSK_ACTL
Control_Reg_1_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB11_MSK_ACTL
Control_Reg_1_Sync_ctrl_reg__PERIOD_REG EQU CYREG_B0_UDB11_MSK

/* Miscellaneous */
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PANTHER EQU 18
CYDEV_CHIP_DIE_PSOC4A EQU 10
CYDEV_CHIP_DIE_PSOC5LP EQU 17
CYDEV_CHIP_DIE_TMA4 EQU 2
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E123069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 10
CYDEV_CHIP_MEMBER_4C EQU 15
CYDEV_CHIP_MEMBER_4D EQU 6
CYDEV_CHIP_MEMBER_4E EQU 4
CYDEV_CHIP_MEMBER_4F EQU 11
CYDEV_CHIP_MEMBER_4G EQU 2
CYDEV_CHIP_MEMBER_4H EQU 9
CYDEV_CHIP_MEMBER_4I EQU 14
CYDEV_CHIP_MEMBER_4J EQU 7
CYDEV_CHIP_MEMBER_4K EQU 8
CYDEV_CHIP_MEMBER_4L EQU 13
CYDEV_CHIP_MEMBER_4M EQU 12
CYDEV_CHIP_MEMBER_4N EQU 5
CYDEV_CHIP_MEMBER_4U EQU 3
CYDEV_CHIP_MEMBER_5A EQU 17
CYDEV_CHIP_MEMBER_5B EQU 16
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PANTHER_ES0 EQU 0
CYDEV_CHIP_REV_PANTHER_ES1 EQU 1
CYDEV_CHIP_REV_PANTHER_PRODUCTION EQU 1
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4C_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 0
CYDEV_CONFIGURATION_DMA EQU 1
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_DMA
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 0
CYDEV_INTR_RISING EQU 0x00000000
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERIAR_INC */
