/*
 * TR0_prg.c
 *
 *  Created on: Oct 23, 2021
 *      Author: HanyOldPc
 */

/*
 * Name    : Hany Ali Elesawy
 * Layer   : MCAL
 * Version : V1.0 - 23/OCT/2021
 */

/*-----------------------------------
 * File Inclusions
 *-----------------------------------*/

/* 1- User Defined Libraries */
#include "BIT_MATH.h"
#include "STD_TYPE.h"

/*2-Standard Libraries*/

/* 3- MCAL FILES */
#include "TR0_reg.h"
#include "TR0_int.h"

#include "DIO_int.h"

/* 4- HAL Files */
/*MCAL Layer can't call HAL*/


/*---------------------------------------------------------
 * Global Call	Back Pointers
 *---------------------------------------------------------*/

void (*GlobalPtr_vid_ISRFuncAddress)(void)=NULL;

/*This a global pointer to function*/
/* void                              ->  Pointee-Func returnType
 * (*TR0_GlobalPtr_vid_FuncAddress)  ->  '*' + pointer name
 * vid is the DataType of the pointee
 * (void)                            ->  Pointee-Func Argument
 */

/*---------------------------------------------------------
 * Public Function Definition
 *---------------------------------------------------------*/
void M_TR0_vid_Init(void)
{

	/*Select Timer Mode, set it to Normal*/
	/* WGMO */

	CLR_BIT(TCCR0,6);
	CLR_BIT(TCCR0,3);

	/*Set Initial counter data in TCNT0 Register*/
	TCNT0=205;

	/*Assume PreScaller value, ex: set to 256*/
	SET_BIT(TCCR0,2);
	//CLR_BIT(TCCR0,1);
	//CLR_BIT(TCCR0,0);

	/*Enable Peripheral Interrupt*/
	SET_BIT(TIMSK,0);
}

/* SendISRAddress is the SetCallBack Function */
void M_TR0_vid_SendISRAddress(void (*copy_vid_ptrISRAddress)(void))
{
	GlobalPtr_vid_ISRFuncAddress=copy_vid_ptrISRAddress;
}
void __vector_11 (void) __attribute__((signal));
void __vector_11 (void)
{



	GlobalPtr_vid_ISRFuncAddress();
	/* 122 is 1 second */
	/* 244 is 4 seconds */
	/* 367 is 3 seconds */
	//if(local_u08_counter==122)
	//{
		/*Set Initial counter data again (for the next cycle)*/
	//	TCNT0=205;
	//	local_u08_counter=0;

		/*logic*/
	//	M_DIO_vid_WrtPinDir(M_DIO_PORTC,M_DIO_PIN0,M_DIO_OUTPUT);
	//	TOG_BIT(*( (volatile u08 *) 0x35), 0); /*POTC PIN0*/
	//}



}
