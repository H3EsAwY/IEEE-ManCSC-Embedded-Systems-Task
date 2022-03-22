/*
 * TRO_reg.h
 *
 *  Created on: Oct 23, 2021
 *      Author: HanyOldPc
 */

/*
 * Name    : Hany Ali Elesawy
 * Layer   : MCAL
 * Version : V1.0 - 23/OCT/2021
 */

#ifndef _TRO_REG_H
#define _TRO_REG_H


#define TCCR0 *( (volatile u08 *) 0x53)
#define TCNT0 *( (volatile u08 *) 0x52)
#define OCR0  *( (volatile u08 *) 0x5C)
#define TIMSK *( (volatile u08 *) 0x59)
#define TIFR  *( (volatile u08 *) 0x58)


#endif /* TRO_REG_H_ */
