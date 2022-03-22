/*
 * BUZ_prg.c
 *
 *  Created on: Oct 24, 2021
 *      Author: h3esawy
 */

/*
 * Name    : Hany Ali Elesawy
 * Layer   : HAL
 * Version : V1.0 - 24/OCT/2021
 */

/*File Inclusion */

/* 1- User Defined Liberaries */
#include "BIT_MATH.h"
#include "STD_TYPE.h"
/*2- standard libraries */

/*3- MCAL Files*/
#include "DIO_int.h"

/*4- HAL Files*/
#include "BUZ_int.h"


void H_BUZ_vid_Init(u08 copy_u08_PortId, u08 copy_u08_PinId)
{
	M_DIO_vid_WrtPinDir(copy_u08_PortId,copy_u08_PinId,M_DIO_OUTPUT);
}

void H_BUZ_vid_BuzTurnOn(u08 copy_u08_PortId, u08 copy_u08_PinId)
{
	M_DIO_vid_WrtPinVal(copy_u08_PortId,copy_u08_PinId,H_BUZ_ON);
}

void H_BUZ_vid_BuzTurnOff(u08 copy_u08_PortId, u08 copy_u08_PinId)
{
	M_DIO_vid_WrtPinVal(copy_u08_PortId,copy_u08_PinId,H_BUZ_OFF);
}

void H_BUZ_vid_BuzTog(u08 copy_u08_PortId, u08 copy_u08_PinId)
{
	M_DIO_vid_TogPinVal(copy_u08_PortId,copy_u08_PinId);
}
