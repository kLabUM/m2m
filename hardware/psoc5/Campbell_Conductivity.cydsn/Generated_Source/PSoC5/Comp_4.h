/*******************************************************************************
* File Name: Comp_4.c
* Version 2.0
*
* Description:
*  This file contains the function prototypes and constants used in
*  the Analog Comparator User Module.
*
* Note:
*  None
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_COMP_Comp_4_H) 
#define CY_COMP_Comp_4_H

#include "cytypes.h"
#include "CyLib.h"
#include "cyfitter.h" 


#define Comp_4_RECALMODE (0u)

/* Check to see if required defines such as CY_PSOC5LP are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5LP)
    #error Component Comp_v2_0 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5LP) */


/***************************************
*       Type defines
***************************************/

/* Sleep Mode API Support */
typedef struct
{
    uint8 enableState;
   /* uint8 compCRReg; */
}Comp_4_backupStruct;

#if (CY_PSOC5A)
    /* Stop API changes for PSoC5A */
    typedef struct
    {
        uint8 compCRReg;
    }   Comp_4_LOWPOWER_BACKUP_STRUCT;
#endif /* CY_PSOC5A */

/* component init state */
extern uint8 Comp_4_initVar;


/**************************************
*        Function Prototypes 
**************************************/

void    Comp_4_Start(void)                  ;
void    Comp_4_Stop(void)                   ;
void    Comp_4_SetSpeed(uint8 speed)        ;
uint8   Comp_4_GetCompare(void)             ;
uint16  Comp_4_ZeroCal(void)                ;
void    Comp_4_LoadTrim(uint16 trimVal)     ;
void Comp_4_Init(void)                      ; 
void Comp_4_Enable(void)                    ;
void Comp_4_SaveConfig(void)                ;
void Comp_4_RestoreConfig(void)             ;
void Comp_4_Sleep(void)                     ;
void Comp_4_Wakeup(void)                    ;
/* Below APIs are valid only for PSoC3, PSoC5LP silicons.*/
#if (CY_PSOC3 || CY_PSOC5LP) 
    void Comp_4_PwrDwnOverrideEnable(void)  ;
    void Comp_4_PwrDwnOverrideDisable(void) ;
#endif /* CY_PSOC3 || CY_PSOC5LP */


/**************************************
*           API Constants        
**************************************/

/* Power constants for SetSpeed() function */
#define Comp_4_SLOWSPEED   (0x00u)
#define Comp_4_HIGHSPEED   (0x01u)
#define Comp_4_LOWPOWER    (0x02u)


/**************************************
*           Parameter Defaults        
**************************************/

#define Comp_4_DEFAULT_SPEED       (1u) 
#define Comp_4_DEFAULT_HYSTERESIS  (0u)
#define Comp_4_DEFAULT_POLARITY    (0u)
#define Comp_4_DEFAULT_BYPASS_SYNC (0u)
#define Comp_4_DEFAULT_PWRDWN_OVRD (0u)


/**************************************
*             Registers        
**************************************/
#define Comp_4_CR_REG            (* (reg8 *) Comp_4_ctComp__CR )               /* Config register */
#define Comp_4_CR_PTR            (  (reg8 *) Comp_4_ctComp__CR )
#define Comp_4_CLK_REG           (* (reg8 *) Comp_4_ctComp__CLK )  /* Comp clock control register */
#define Comp_4_CLK_PTR           (  (reg8 *) Comp_4_ctComp__CLK )
#define Comp_4_SW0_REG           (* (reg8 *) Comp_4_ctComp__SW0 )            /* Routing registers */
#define Comp_4_SW0_PTR           (  (reg8 *) Comp_4_ctComp__SW0 )
#define Comp_4_SW2_REG           (* (reg8 *) Comp_4_ctComp__SW2 )
#define Comp_4_SW2_PTR           (  (reg8 *) Comp_4_ctComp__SW2 )
#define Comp_4_SW3_REG           (* (reg8 *) Comp_4_ctComp__SW3 )
#define Comp_4_SW3_PTR           (  (reg8 *) Comp_4_ctComp__SW3 )
#define Comp_4_SW4_REG           (* (reg8 *) Comp_4_ctComp__SW4 )
#define Comp_4_SW4_PTR           (  (reg8 *) Comp_4_ctComp__SW4 )
#define Comp_4_SW6_REG           (* (reg8 *) Comp_4_ctComp__SW6 )
#define Comp_4_SW6_PTR           (  (reg8 *) Comp_4_ctComp__SW6 )

/* Trim registers */
/* PSoC5A */
#if (CY_PSOC5A)
    #define Comp_4_TR_REG        (* (reg8 *) Comp_4_ctComp__TR )                /* Trim registers */
    #define Comp_4_TR_PTR        (  (reg8 *) Comp_4_ctComp__TR )
#endif /* CY_PSOC5A */

/* PSoC3, PSoC5LP or later */
#if (CY_PSOC3 || CY_PSOC5LP) 
    #define Comp_4_TR0_REG       (* (reg8 *) Comp_4_ctComp__TR0 )/* Trim register for P-type load */
    #define Comp_4_TR0_PTR       (  (reg8 *) Comp_4_ctComp__TR0 ) 
    #define Comp_4_TR1_REG       (* (reg8 *) Comp_4_ctComp__TR1 )/* Trim register for N-type load */
    #define Comp_4_TR1_PTR       (  (reg8 *) Comp_4_ctComp__TR1 ) 
#endif /* CY_PSOC3 || CY_PSOC5LP */

#define Comp_4_WRK_REG           (* (reg8 *) Comp_4_ctComp__WRK )    /* Working register - output */
#define Comp_4_WRK_PTR           (  (reg8 *) Comp_4_ctComp__WRK )
#define Comp_4_PWRMGR_REG        (* (reg8 *) Comp_4_ctComp__PM_ACT_CFG )  /* Active Power manager */
#define Comp_4_PWRMGR_PTR        (  (reg8 *) Comp_4_ctComp__PM_ACT_CFG )
#define Comp_4_STBY_PWRMGR_REG   (* (reg8 *) Comp_4_ctComp__PM_STBY_CFG )/* Standby Power manager */
#define Comp_4_STBY_PWRMGR_PTR   (  (reg8 *) Comp_4_ctComp__PM_STBY_CFG )

/*      Trim Locations      */
#define Comp_4_ctComp__TRIM__TR0_HS_PTR     ((void CYFAR *) Comp_4_ctComp__TRIM__TR0_HS)
#define Comp_4_ctComp__TRIM__TR0_HS_REG     CY_GET_XTND_REG8(Comp_4_ctComp__TRIM__TR0_HS_PTR)
#if (CY_PSOC3 || CY_PSOC5LP)
    #define Comp_4_ctComp__TRIM__TR1_HS_PTR ((void CYFAR *) Comp_4_ctComp__TRIM__TR1_HS)
    #define Comp_4_ctComp__TRIM__TR1_HS_REG CY_GET_XTND_REG8(Comp_4_ctComp__TRIM__TR1_HS_PTR)
#endif /* (CY_PSOC3 || CY_PSOC5LP) */
#define Comp_4_ctComp__TRIM__TR0_LS_PTR     ((void CYFAR *) ((uint32)Comp_4_ctComp__TRIM__TR0 + 1u))
#define Comp_4_ctComp__TRIM__TR0_LS_REG     CY_GET_XTND_REG8(Comp_4_ctComp__TRIM__TR0_LS_PTR)
#if (CY_PSOC3 || CY_PSOC5LP)
    #define Comp_4_ctComp__TRIM__TR1_LS_PTR ((void CYFAR *) ((uint32)Comp_4_ctComp__TRIM__TR1 + 1u))
    #define Comp_4_ctComp__TRIM__TR1_LS_REG CY_GET_XTND_REG8(Comp_4_ctComp__TRIM__TR1_LS_PTR)
#endif /* CY_PSOC3 || CY_PSOC5LP */


/***************************************
*  Registers definitions
* for backward capability        
***************************************/
#define Comp_4_CR                (* (reg8 *) Comp_4_ctComp__CR )               /* Config register */
#define Comp_4_CLK               (* (reg8 *) Comp_4_ctComp__CLK )  /* Comp clock control register */
#define Comp_4_SW0               (* (reg8 *) Comp_4_ctComp__SW0 )            /* Routing registers */
#define Comp_4_SW2               (* (reg8 *) Comp_4_ctComp__SW2 )
#define Comp_4_SW3               (* (reg8 *) Comp_4_ctComp__SW3 )
#define Comp_4_SW4               (* (reg8 *) Comp_4_ctComp__SW4 )
#define Comp_4_SW6               (* (reg8 *) Comp_4_ctComp__SW6 )

/* Trim registers */
/* PSoC5A */
#if (CY_PSOC5A)
    #define Comp_4_TR            (* (reg8 *) Comp_4_ctComp__TR )                /* Trim registers */
#endif /* CY_PSOC5A */

/* PSoC3, PSoC5LP or later */
#if (CY_PSOC3 || CY_PSOC5LP) 
    #define Comp_4_TR0           (* (reg8 *) Comp_4_ctComp__TR0 )/* Trim register for P-type load */
    #define Comp_4_TR1           (* (reg8 *) Comp_4_ctComp__TR1 )/* Trim register for N-type load */
#endif /* CY_PSOC3 || CY_PSOC5LP */

#define Comp_4_WRK               (* (reg8 *) Comp_4_ctComp__WRK )    /* Working register - output */
#define Comp_4_PWRMGR            (* (reg8 *) Comp_4_ctComp__PM_ACT_CFG )  /* Active Power manager */
#define Comp_4_STBY_PWRMGR       (* (reg8 *) Comp_4_ctComp__PM_STBY_CFG )/* Standby Power manager */

/*      Trim Locations      */
#define Comp_4_HS_TRIM_TR0        CY_GET_XTND_REG8(Comp_4_ctComp__TRIM__TR0_HS_PTR)
#if (CY_PSOC3 || CY_PSOC5LP)
    #define Comp_4_HS_TRIM_TR1    CY_GET_XTND_REG8(Comp_4_ctComp__TRIM__TR1_HS_PTR)
#endif /* (CY_PSOC3 || CY_PSOC5LP) */
#define Comp_4_LS_TRIM_TR0        CY_GET_XTND_REG8(Comp_4_ctComp__TRIM__TR0_LS_PTR)
#if (CY_PSOC3 || CY_PSOC5LP)
    #define Comp_4_LS_TRIM_TR1    CY_GET_XTND_REG8(Comp_4_ctComp__TRIM__TR1_LS_PTR)
#endif /* CY_PSOC3 || CY_PSOC5LP */


/**************************************
*       Register Constants        
**************************************/

/* CR (Comp Control Register)             */
#define Comp_4_CFG_MODE_MASK      (0x78u)
#define Comp_4_FILTER_ON          (0x40u)
#define Comp_4_HYST_OFF           (0x20u)
#define Comp_4_CAL_ON             (0x10u)
#define Comp_4_MX_AO              (0x08u)
#define Comp_4_PWRDWN_OVRD        (0x04u)

#define Comp_4_PWR_MODE_SHIFT     (0x00u)
#define Comp_4_PWR_MODE_MASK      ((uint8)(0x03u << Comp_4_PWR_MODE_SHIFT))
#define Comp_4_PWR_MODE_SLOW      ((uint8)(0x00u << Comp_4_PWR_MODE_SHIFT))
#define Comp_4_PWR_MODE_FAST      ((uint8)(0x01u << Comp_4_PWR_MODE_SHIFT))
#define Comp_4_PWR_MODE_ULOW      ((uint8)(0x02u << Comp_4_PWR_MODE_SHIFT))

/* CLK (Comp Clock Control Register)      */
#define Comp_4_BYPASS_SYNC        (0x10u)
#define Comp_4_SYNC_CLK_EN        (0x08u)
#define Comp_4_SYNCCLK_MASK       (Comp_4_BYPASS_SYNC | Comp_4_SYNC_CLK_EN)

/* SW3 Routing Register definitions */
#define Comp_4_CMP_SW3_INPCTL_MASK (0x09u)   /* SW3 bits for inP routing control */

/* TR (Comp Trim Register)     */
#define Comp_4_DEFAULT_CMP_TRIM    (0x00u)

/* PSoC5A */
#if (CY_PSOC5A)
    #define Comp_4_CMP_TRIM1_DIR   (0x08u)   /* Trim direction for N-type load for offset calibration */
    #define Comp_4_CMP_TRIM1_MASK  (0x07u)   /* Trim for N-type load for offset calibration */
    #define Comp_4_CMP_TRIM2_DIR   (0x80u)   /* Trim direction for P-type load for offset calibration */
    #define Comp_4_CMP_TRIM2_MASK  (0x70u)   /* Trim for P-type load for offset calibration */
#endif /* CY_PSOC5A */

/* PSoC3, PSoC5LP or later */
#if (CY_PSOC3 || CY_PSOC5LP)
    #define Comp_4_CMP_TR0_DIR     (0x10u)   /* Trim direction for N-type load for offset calibration */
    #define Comp_4_CMP_TR0_MASK    (0x0Fu)   /* Trim for N-type load for offset calibration */
    #define Comp_4_CMP_TR1_DIR     (0x10u)   /* Trim direction for P-type load for offset calibration */
    #define Comp_4_CMP_TR1_MASK    (0x07u)   /* Trim for P-type load for offset calibration */ 
#endif /* CY_PSOC3 || CY_PSOC5LP */


/* WRK (Comp output working register)     */ 
#define Comp_4_CMP_OUT_MASK       Comp_4_ctComp__WRK_MASK /* Specific comparator out mask */

/* PM_ACT_CFG7 (Active Power Mode CFG Register)     */ 
#define Comp_4_ACT_PWR_EN         Comp_4_ctComp__PM_ACT_MSK /* Power enable mask */

/* PM_STBY_CFG7 (Standby Power Mode CFG Register)     */ 
#define Comp_4_STBY_PWR_EN        Comp_4_ctComp__PM_STBY_MSK /* Standby Power enable mask */

#if (CY_PSOC5A)
    /* For stop API changes mask to make the COMP register CR to 0X00  */
    #define Comp_4_COMP_REG_CLR   (0x00u)
#endif /* CY_PSOC5A */

#endif /* CY_COMP_Comp_4_H */


/* [] END OF FILE */
