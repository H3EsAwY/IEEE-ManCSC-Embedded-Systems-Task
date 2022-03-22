/*
 * GIE_prg.c
 *
 *  Created on: Oct 15, 2021
 *      Author: HanyOldPc
 */

/*
 * Name    : Hany Ali Elesawy
 * Layer   : MCAL
 * Version : V1.0 - 15/OCT/2021
*/

#include "BIT_MATH.h"
#include "STD_TYPE.h"

#include "GIE_int.h"
#include "GIE_reg.h"

/*SREG bit 7 is responsible for enabling and disabling Global Interrupt*/
void M_GIE_vid_EnableGI()
{
	SET_BIT(SREG,7);
}

void M_GIE_vid_DisableGI()
{
	CLR_BIT(SREG,7);
}
