   /******************************************************************************
 *
 * [FILE NAME]: <SysTick_Regs.h>
 *
 * [AUTHOR]: <Abdelrhman Hesham>
 *
 * [DATE CREATED]: <2/10/2023>
 *
 * [DESCRIPTION]: <Header file for Systick Registers>
 *
 *******************************************************************************/



#ifndef SYSTICK_REGISTERS
#define SYSTICK_REGISTERS

#include "Std_Types.h"



/*****************************************************************************
Systick Timer Registers
*****************************************************************************/
#define SYSTICK_CTRL_REG          (*((volatile uint32 *)0xE000E010))
#define SYSTICK_RELOAD_REG        (*((volatile uint32 *)0xE000E014))
#define SYSTICK_CURRENT_REG       (*((volatile uint32 *)0xE000E018))

#endif