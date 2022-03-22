/*
 * TR0_int.h
 *
 *  Created on: Oct 23, 2021
 *      Author: HanyOldPc
 */


/*
 * Name    : Hany Ali Elesawy
 * Layer   : MCAL
 * Version : V1.0 - 23/OCT/2021
 */

#ifndef _TR0_INT_H
#define _TR0_INT_H

#define M_TR0_COUNTER_DATA *( (volatile u08 *) 0x52) /*TCNT0*/

void M_TR0_vid_Init(void);

/* SendISRAddress is the SetCallBack Function */
void M_TR0_vid_SendISRAddress(void (*copy_vid_ptrISRAddress)(void));

#endif /* TR0_INT_H_ */
