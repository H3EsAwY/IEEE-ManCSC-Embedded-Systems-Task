/*
 * BUZ_int.h
 *
 *  Created on: Oct 24, 2021
 *      Author: h3esawy
 */

/*
 * Name    : Hany Ali Elesawy
 * Layer   : HAL
 * Version : V1.0 - 24/OCT/2021
 */

#ifndef _BUZ_INT_H
#define _BUZ_INT_H

#define H_BUZ_ON  M_DIO_HIGH
#define H_BUZ_OFF M_DIO_LOW

void H_BUZ_vid_Init(u08 copy_u08_PortId, u08 copy_u08_PinId);

void H_BUZ_vid_BuzTurnOn(u08 copy_u08_PortId, u08 copy_u08_PinId);

void H_BUZ_vid_BuzTurnOff(u08 copy_u08_PortId, u08 copy_u08_PinId);

void H_BUZ_vid_BuzTog(u08 copy_u08_PortId, u08 copy_u08_PinId);


#endif /* _BUZ_INT_H */
