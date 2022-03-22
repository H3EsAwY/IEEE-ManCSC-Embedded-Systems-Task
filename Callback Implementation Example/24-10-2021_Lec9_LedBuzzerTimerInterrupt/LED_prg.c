/*
 * Name    : Hany Ali Elesawy
 * Layer   : HAL
 * Version : V1.0 - 14/OCT/2021
 */

/*File Inclusion */

/* 1- User Defined Liberaries */
#include "BIT_MATH.h"
#include "STD_TYPE.h"
/*2- standard libraries */

/*3- MCAL Files*/
#include "DIO_int.h"

/*4- HAL Files*/
#include "LED_int.h"


/* Public Function Definition */
void H_LED_vid_SingleLedInit(u08 copy_u08_PortId, u08 copy_u08_PinId)
{
	M_DIO_vid_WrtPinDir(copy_u08_PortId,copy_u08_PinId,M_DIO_OUTPUT);
}

/*added separate functions 24/OCT/2021*/
/*void H_LED_vid_TurnOnOff(u08 copy_u08_PortId, u08 copy_u08_PinId, u08 copy_u08_State)
{
	M_DIO_vid_WrtPinVal(copy_u08_PortId,copy_u08_PinId,copy_u08_State);
}*/


void H_LED_vid_SingleLedTurnOn(u08 copy_u08_PortId, u08 copy_u08_PinId)
{
	M_DIO_vid_WrtPinVal(copy_u08_PortId,copy_u08_PinId,H_LED_ON);
}

void H_LED_vid_SingleLedTurnOff(u08 copy_u08_PortId, u08 copy_u08_PinId)
{
	M_DIO_vid_WrtPinVal(copy_u08_PortId,copy_u08_PinId,H_LED_OFF);
}

void H_LED_vid_SingleLedTog(u08 copy_u08_PortId, u08 copy_u08_PinId)
{
	M_DIO_vid_TogPinVal(copy_u08_PortId,copy_u08_PinId);
}

