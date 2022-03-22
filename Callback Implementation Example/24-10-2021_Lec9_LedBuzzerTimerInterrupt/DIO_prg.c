/*
 * TRO_reg.h
 *
 *  Created on: Oct 1, 2021
 *      Author: HanyOldPc
 */

/*
 * Name    : Hany Ali Elesawy
 * Layer   : MCAL
 * Version : V1.0 - 01/OCT/2021
 *		     V1.1 - 08/OCT/2021
 *		     V1.2 - 24/OCT/2021 (added TogPinVal)
*/
 

/* File Inclusions */

/* 1- User Defined Libraries */
#include "BIT_MATH.h"
#include "STD_TYPE.h"

/*2-Standard Libraries*/

/* 3- MCAL FILES */
#include "DIO_int.h"
#include "DIO_reg.h"

/* 4- HAL Files */
/*MCAL Layer can't call HAL*/
/* Public Function Definition */

void M_DIO_vid_WrtPinDir(u08 copy_u08_PortId,u08 copy_u08_PinId,u08 copy_u08_DirId)
{
	switch(copy_u08_PortId)
	{
		/*WRT_BIT(REG,BITNO,VAL)*/
		case M_DIO_PORTA: WRT_BIT(DDRA,copy_u08_PinId,copy_u08_DirId); break; /*0*/
		case M_DIO_PORTB: WRT_BIT(DDRB,copy_u08_PinId,copy_u08_DirId); break; /*1*/
		case M_DIO_PORTC: WRT_BIT(DDRC,copy_u08_PinId,copy_u08_DirId); break; /*2*/
		case M_DIO_PORTD: WRT_BIT(DDRD,copy_u08_PinId,copy_u08_DirId); break; /*3*/
	}
}

void M_DIO_vid_WrtPinVal(u08 copy_u08_PortId,u08 copy_u08_PinId,u08 copy_u08_ValId)
{
	switch(copy_u08_PortId)
	{
		case M_DIO_PORTA: WRT_BIT(PORTA,copy_u08_PinId,copy_u08_ValId); break; /*0*/
		case M_DIO_PORTB: WRT_BIT(PORTB,copy_u08_PinId,copy_u08_ValId); break; /*1*/
		case M_DIO_PORTC: WRT_BIT(PORTC,copy_u08_PinId,copy_u08_ValId); break; /*2*/
		case M_DIO_PORTD: WRT_BIT(PORTD,copy_u08_PinId,copy_u08_ValId); break; /*3*/
		default: /* Error */ break;
	}
}

void M_DIO_vid_TogPinVal(u08 copy_u08_PortId,u08 copy_u08_PinId)
{
	switch(copy_u08_PortId)
		{
			case M_DIO_PORTA: TOG_BIT(PORTA,copy_u08_PinId); break; /*0*/
			case M_DIO_PORTB: TOG_BIT(PORTB,copy_u08_PinId); break; /*1*/
			case M_DIO_PORTC: TOG_BIT(PORTC,copy_u08_PinId); break; /*2*/
			case M_DIO_PORTD: TOG_BIT(PORTD,copy_u08_PinId); break; /*3*/
			default: /* Error */ break;
		}
}
u08  M_DIO_u08_GetPinVal(u08 copy_u08_PortId,u08 copy_u08_PinId)
{
	u08 local_u08_PinVal=0;
	switch(copy_u08_PortId)
	{
		/*GET_BIT(REG,BITNO)*/
		case M_DIO_PORTA: local_u08_PinVal=GET_BIT(PINA,copy_u08_PinId); break; /*0*/
		case M_DIO_PORTB: local_u08_PinVal=GET_BIT(PINB,copy_u08_PinId); break; /*1*/
		case M_DIO_PORTC: local_u08_PinVal=GET_BIT(PINC,copy_u08_PinId); break; /*2*/
		case M_DIO_PORTD: local_u08_PinVal=GET_BIT(PIND,copy_u08_PinId); break; /*3*/
		default: /* Error */ break; /* so that it doesn't return zero (V.Important)*/
	}
	
	return local_u08_PinVal;
}


void M_DIO_vid_WrtPrtDir(u08 copy_u08_PortId,u08 copy_u08_DirId)
{
	if(copy_u08_DirId==M_DIO_OUTPUT)
	{
		switch(copy_u08_PortId)
		{
			/*making the whole port as output or putting 255 in it*/
			case M_DIO_PORTA: DDRA=0xff; break; 
			case M_DIO_PORTB: DDRB=0xff; break;
			case M_DIO_PORTC: DDRC=0xff; break;
			case M_DIO_PORTD: DDRD=0xff; break;
			default: /* Error */ break;
		}
	}
	else /*copy_u08_DirId==M_DIO_INPUT*/
	{
		switch(copy_u08_PortId)
		{
			/*making the whole port as input or putting 0 in it*/
			case M_DIO_PORTA: DDRA=0x00; break; 
			case M_DIO_PORTB: DDRB=0x00; break;
			case M_DIO_PORTC: DDRC=0x00; break;
			case M_DIO_PORTD: DDRD=0x00; break;
			default: /* Error */ break;
		}
	}
}


void M_DIO_vid_WrtPrtVal(u08 copy_u08_PortId,u08 copy_u08_ValId)
{
	switch(copy_u08_PortId)
	{
		case M_DIO_PORTA: PORTA=copy_u08_ValId; break; 
		case M_DIO_PORTB: PORTB=copy_u08_ValId; break;
		case M_DIO_PORTC: PORTC=copy_u08_ValId; break;
		case M_DIO_PORTD: PORTD=copy_u08_ValId; break;
		default: /* Error */ break;
	}
}
