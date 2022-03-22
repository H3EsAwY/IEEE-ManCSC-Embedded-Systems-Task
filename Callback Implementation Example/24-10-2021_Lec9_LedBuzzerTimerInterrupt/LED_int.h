/*
 * Name    : Hany Ali Elesawy
 * Version : V1.0 - 14/OCT/2021
 */

#ifndef _LED_INT_H
#define _LED_INT_H


#define H_LED_ON  M_DIO_HIGH
#define H_LED_OFF M_DIO_LOW

void H_LED_vid_SingleLedInit(u08 copy_u08_PortId, u08 copy_u08_PinId);

/*added separate functions 24/OCT/2021*/
/*void H_LED_vid_TurnOnOff(u08 copy_u08_PortId, u08 copy_u08_PinId, u08 copy_u08_State);*/

void H_LED_vid_SingleLedTurnOn(u08 copy_u08_PortId, u08 copy_u08_PinId);

void H_LED_vid_SingleLedTurnOn(u08 copy_u08_PortId, u08 copy_u08_PinId);

void H_LED_vid_SingleLedTog(u08 copy_u08_PortId, u08 copy_u08_PinId);

#endif
