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
*/
 
#ifndef _DIO_INT_H
#define _DIO_INT_H

/* copy_u08_PortId Possibility */
#define M_DIO_PORTA 0
#define M_DIO_PORTB 1
#define M_DIO_PORTC 2
#define M_DIO_PORTD 3

/* Copy PIN Possibility */
#define M_DIO_PIN0 0
#define M_DIO_PIN1 1
#define M_DIO_PIN2 2
#define M_DIO_PIN3 3
#define M_DIO_PIN4 4
#define M_DIO_PIN5 5
#define M_DIO_PIN6 6
#define M_DIO_PIN7 7

/*copy_u08_DirId Possibility*/
#define M_DIO_INPUT  0
#define M_DIO_OUTPUT 1

/* copy_u08_ValId Possibilty */
#define M_DIO_LOW    0
#define M_DIO_HIGH   1

void M_DIO_vid_WrtPinDir(u08 copy_u08_PortId,u08 copy_u08_PinId,u08 copy_u08_DirId);
void M_DIO_vid_WrtPinVal(u08 copy_u08_PortId,u08 copy_u08_PinId,u08 copy_u08_ValId);
void M_DIO_vid_TogPinVal(u08 copy_u08_PortId,u08 copy_u08_PinId);
u08  M_DIO_u08_GetPinVal(u08 copy_u08_PortId,u08 copy_u08_PinId);

void M_DIO_vid_WrtPrtDir(u08 copy_u08_PortId,u08 copy_u08_DirId);
void M_DIO_vid_WrtPrtVal(u08 copy_u08_PortId,u08 copy_u08_ValId);
 
#endif
