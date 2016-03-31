#ifndef INCLUDED_CYFITTERIAR_INC
#define INCLUDED_CYFITTERIAR_INC
    INCLUDE cydeviceiar.inc
    INCLUDE cydeviceiar_trm.inc

/* Maxbotix_RX */
Maxbotix_RX__0__INTTYPE EQU CYREG_PICU4_INTTYPE6
Maxbotix_RX__0__MASK EQU 0x40
Maxbotix_RX__0__PC EQU CYREG_PRT4_PC6
Maxbotix_RX__0__PORT EQU 4
Maxbotix_RX__0__SHIFT EQU 6
Maxbotix_RX__AG EQU CYREG_PRT4_AG
Maxbotix_RX__AMUX EQU CYREG_PRT4_AMUX
Maxbotix_RX__BIE EQU CYREG_PRT4_BIE
Maxbotix_RX__BIT_MASK EQU CYREG_PRT4_BIT_MASK
Maxbotix_RX__BYP EQU CYREG_PRT4_BYP
Maxbotix_RX__CTL EQU CYREG_PRT4_CTL
Maxbotix_RX__DM0 EQU CYREG_PRT4_DM0
Maxbotix_RX__DM1 EQU CYREG_PRT4_DM1
Maxbotix_RX__DM2 EQU CYREG_PRT4_DM2
Maxbotix_RX__DR EQU CYREG_PRT4_DR
Maxbotix_RX__INP_DIS EQU CYREG_PRT4_INP_DIS
Maxbotix_RX__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU4_BASE
Maxbotix_RX__LCD_COM_SEG EQU CYREG_PRT4_LCD_COM_SEG
Maxbotix_RX__LCD_EN EQU CYREG_PRT4_LCD_EN
Maxbotix_RX__MASK EQU 0x40
Maxbotix_RX__PORT EQU 4
Maxbotix_RX__PRT EQU CYREG_PRT4_PRT
Maxbotix_RX__PRTDSI__CAPS_SEL EQU CYREG_PRT4_CAPS_SEL
Maxbotix_RX__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT4_DBL_SYNC_IN
Maxbotix_RX__PRTDSI__OE_SEL0 EQU CYREG_PRT4_OE_SEL0
Maxbotix_RX__PRTDSI__OE_SEL1 EQU CYREG_PRT4_OE_SEL1
Maxbotix_RX__PRTDSI__OUT_SEL0 EQU CYREG_PRT4_OUT_SEL0
Maxbotix_RX__PRTDSI__OUT_SEL1 EQU CYREG_PRT4_OUT_SEL1
Maxbotix_RX__PRTDSI__SYNC_OUT EQU CYREG_PRT4_SYNC_OUT
Maxbotix_RX__PS EQU CYREG_PRT4_PS
Maxbotix_RX__SHIFT EQU 6
Maxbotix_RX__SLW EQU CYREG_PRT4_SLW

/* isr_Maxbotix */
isr_Maxbotix__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
isr_Maxbotix__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
isr_Maxbotix__INTC_MASK EQU 0x01
isr_Maxbotix__INTC_NUMBER EQU 0
isr_Maxbotix__INTC_PRIOR_NUM EQU 7
isr_Maxbotix__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_0
isr_Maxbotix__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
isr_Maxbotix__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

/* UART_Maxbotix_BUART */
UART_Maxbotix_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB01_02_ACTL
UART_Maxbotix_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB01_02_CTL
UART_Maxbotix_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB01_02_CTL
UART_Maxbotix_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB01_02_CTL
UART_Maxbotix_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB01_02_CTL
UART_Maxbotix_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB01_02_MSK
UART_Maxbotix_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB01_02_MSK
UART_Maxbotix_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB01_02_MSK
UART_Maxbotix_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB01_02_MSK
UART_Maxbotix_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB01_ACTL
UART_Maxbotix_BUART_sRX_RxBitCounter__CONTROL_REG EQU CYREG_B0_UDB01_CTL
UART_Maxbotix_BUART_sRX_RxBitCounter__CONTROL_ST_REG EQU CYREG_B0_UDB01_ST_CTL
UART_Maxbotix_BUART_sRX_RxBitCounter__COUNT_REG EQU CYREG_B0_UDB01_CTL
UART_Maxbotix_BUART_sRX_RxBitCounter__COUNT_ST_REG EQU CYREG_B0_UDB01_ST_CTL
UART_Maxbotix_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB01_MSK_ACTL
UART_Maxbotix_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB01_MSK_ACTL
UART_Maxbotix_BUART_sRX_RxBitCounter__PERIOD_REG EQU CYREG_B0_UDB01_MSK
UART_Maxbotix_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB01_02_ACTL
UART_Maxbotix_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG EQU CYREG_B0_UDB01_02_ST
UART_Maxbotix_BUART_sRX_RxBitCounter_ST__MASK_REG EQU CYREG_B0_UDB01_MSK
UART_Maxbotix_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG EQU CYREG_B0_UDB01_MSK_ACTL
UART_Maxbotix_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG EQU CYREG_B0_UDB01_MSK_ACTL
UART_Maxbotix_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB01_ACTL
UART_Maxbotix_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG EQU CYREG_B0_UDB01_ST_CTL
UART_Maxbotix_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG EQU CYREG_B0_UDB01_ST_CTL
UART_Maxbotix_BUART_sRX_RxBitCounter_ST__STATUS_REG EQU CYREG_B0_UDB01_ST
UART_Maxbotix_BUART_sRX_RxShifter_u0__16BIT_A0_REG EQU CYREG_B0_UDB02_03_A0
UART_Maxbotix_BUART_sRX_RxShifter_u0__16BIT_A1_REG EQU CYREG_B0_UDB02_03_A1
UART_Maxbotix_BUART_sRX_RxShifter_u0__16BIT_D0_REG EQU CYREG_B0_UDB02_03_D0
UART_Maxbotix_BUART_sRX_RxShifter_u0__16BIT_D1_REG EQU CYREG_B0_UDB02_03_D1
UART_Maxbotix_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB02_03_ACTL
UART_Maxbotix_BUART_sRX_RxShifter_u0__16BIT_F0_REG EQU CYREG_B0_UDB02_03_F0
UART_Maxbotix_BUART_sRX_RxShifter_u0__16BIT_F1_REG EQU CYREG_B0_UDB02_03_F1
UART_Maxbotix_BUART_sRX_RxShifter_u0__A0_A1_REG EQU CYREG_B0_UDB02_A0_A1
UART_Maxbotix_BUART_sRX_RxShifter_u0__A0_REG EQU CYREG_B0_UDB02_A0
UART_Maxbotix_BUART_sRX_RxShifter_u0__A1_REG EQU CYREG_B0_UDB02_A1
UART_Maxbotix_BUART_sRX_RxShifter_u0__D0_D1_REG EQU CYREG_B0_UDB02_D0_D1
UART_Maxbotix_BUART_sRX_RxShifter_u0__D0_REG EQU CYREG_B0_UDB02_D0
UART_Maxbotix_BUART_sRX_RxShifter_u0__D1_REG EQU CYREG_B0_UDB02_D1
UART_Maxbotix_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB02_ACTL
UART_Maxbotix_BUART_sRX_RxShifter_u0__F0_F1_REG EQU CYREG_B0_UDB02_F0_F1
UART_Maxbotix_BUART_sRX_RxShifter_u0__F0_REG EQU CYREG_B0_UDB02_F0
UART_Maxbotix_BUART_sRX_RxShifter_u0__F1_REG EQU CYREG_B0_UDB02_F1
UART_Maxbotix_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB02_03_ACTL
UART_Maxbotix_BUART_sRX_RxSts__16BIT_STATUS_REG EQU CYREG_B0_UDB02_03_ST
UART_Maxbotix_BUART_sRX_RxSts__3__MASK EQU 0x08
UART_Maxbotix_BUART_sRX_RxSts__3__POS EQU 3
UART_Maxbotix_BUART_sRX_RxSts__4__MASK EQU 0x10
UART_Maxbotix_BUART_sRX_RxSts__4__POS EQU 4
UART_Maxbotix_BUART_sRX_RxSts__5__MASK EQU 0x20
UART_Maxbotix_BUART_sRX_RxSts__5__POS EQU 5
UART_Maxbotix_BUART_sRX_RxSts__MASK EQU 0x38
UART_Maxbotix_BUART_sRX_RxSts__MASK_REG EQU CYREG_B0_UDB02_MSK
UART_Maxbotix_BUART_sRX_RxSts__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB02_ACTL
UART_Maxbotix_BUART_sRX_RxSts__STATUS_REG EQU CYREG_B0_UDB02_ST

/* UART_Maxbotix_IntClock */
UART_Maxbotix_IntClock__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
UART_Maxbotix_IntClock__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
UART_Maxbotix_IntClock__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
UART_Maxbotix_IntClock__CFG2_SRC_SEL_MASK EQU 0x07
UART_Maxbotix_IntClock__INDEX EQU 0x00
UART_Maxbotix_IntClock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
UART_Maxbotix_IntClock__PM_ACT_MSK EQU 0x01
UART_Maxbotix_IntClock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
UART_Maxbotix_IntClock__PM_STBY_MSK EQU 0x01

/* Maxbotix_Power */
Maxbotix_Power__0__INTTYPE EQU CYREG_PICU4_INTTYPE7
Maxbotix_Power__0__MASK EQU 0x80
Maxbotix_Power__0__PC EQU CYREG_PRT4_PC7
Maxbotix_Power__0__PORT EQU 4
Maxbotix_Power__0__SHIFT EQU 7
Maxbotix_Power__AG EQU CYREG_PRT4_AG
Maxbotix_Power__AMUX EQU CYREG_PRT4_AMUX
Maxbotix_Power__BIE EQU CYREG_PRT4_BIE
Maxbotix_Power__BIT_MASK EQU CYREG_PRT4_BIT_MASK
Maxbotix_Power__BYP EQU CYREG_PRT4_BYP
Maxbotix_Power__CTL EQU CYREG_PRT4_CTL
Maxbotix_Power__DM0 EQU CYREG_PRT4_DM0
Maxbotix_Power__DM1 EQU CYREG_PRT4_DM1
Maxbotix_Power__DM2 EQU CYREG_PRT4_DM2
Maxbotix_Power__DR EQU CYREG_PRT4_DR
Maxbotix_Power__INP_DIS EQU CYREG_PRT4_INP_DIS
Maxbotix_Power__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU4_BASE
Maxbotix_Power__LCD_COM_SEG EQU CYREG_PRT4_LCD_COM_SEG
Maxbotix_Power__LCD_EN EQU CYREG_PRT4_LCD_EN
Maxbotix_Power__MASK EQU 0x80
Maxbotix_Power__PORT EQU 4
Maxbotix_Power__PRT EQU CYREG_PRT4_PRT
Maxbotix_Power__PRTDSI__CAPS_SEL EQU CYREG_PRT4_CAPS_SEL
Maxbotix_Power__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT4_DBL_SYNC_IN
Maxbotix_Power__PRTDSI__OE_SEL0 EQU CYREG_PRT4_OE_SEL0
Maxbotix_Power__PRTDSI__OE_SEL1 EQU CYREG_PRT4_OE_SEL1
Maxbotix_Power__PRTDSI__OUT_SEL0 EQU CYREG_PRT4_OUT_SEL0
Maxbotix_Power__PRTDSI__OUT_SEL1 EQU CYREG_PRT4_OUT_SEL1
Maxbotix_Power__PRTDSI__SYNC_OUT EQU CYREG_PRT4_SYNC_OUT
Maxbotix_Power__PS EQU CYREG_PRT4_PS
Maxbotix_Power__SHIFT EQU 7
Maxbotix_Power__SLW EQU CYREG_PRT4_SLW

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
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
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
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00000001
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