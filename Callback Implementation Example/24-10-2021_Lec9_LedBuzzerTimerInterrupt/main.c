/*
 * main.c
 *
 *  Created on: Oct 23, 2021
 *      Author: HanyOldPc
 */

/*
 * Name    : Hany Ali Elesawy
 * Layer   : APP
 * Version : V1.0 - 23/OCT/2021
 */

/* File Inclusions */

/* 1- User Defined Libraries */
#include "BIT_MATH.h"
#include "STD_TYPE.h"

/*2-Standard Libraries*/

/* 3- MCAL FILES */
#include "DIO_int.h"
#include "TR0_int.h"
#include "GIE_int.h"

/* 4- HAL Files */
#include "LED_int.h"
#include "BUZ_int.h"



void APP_ISR(void);

void main(void)
{
	M_GIE_vid_EnableGI();
	M_TR0_vid_Init();
	M_TR0_vid_SendISRAddress(&APP_ISR);
	while(1)
	{

	}
}

void APP_ISR(void)
{
	static volatile u32 local_u08_counterLed=0;
	static volatile u32 local_u08_counterBuz=0;
	if(local_u08_counterLed==122)
	{
		/*Set Initial counter data again (for the next cycle)*/
		M_TR0_COUNTER_DATA=205;
		local_u08_counterLed=0;

		/*logic*/
		H_LED_vid_SingleLedInit(M_DIO_PORTC,M_DIO_PIN0);
		H_LED_vid_SingleLedTog (M_DIO_PORTC,M_DIO_PIN0);

	}
	if(local_u08_counterBuz==244)
	{
		/*Set Initial counter data again (for the next cycle)*/
		M_TR0_COUNTER_DATA=205;
		local_u08_counterBuz=0;

		/*logic*/
		H_BUZ_vid_Init  (M_DIO_PORTC,M_DIO_PIN1);
		H_BUZ_vid_BuzTog(M_DIO_PORTC,M_DIO_PIN1);

	}
	local_u08_counterLed++;
	local_u08_counterBuz++;
}

