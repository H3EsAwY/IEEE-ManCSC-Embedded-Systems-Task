/****************************************************************************
 * Name: Hany Ali Elesawy
 *
 * Task 1: Write a C program to input a number and a bit number (nth bit)
 * from the user and then determine whether this nth bit is set to 1 or 0.
 ***************************************************************************/



#include <stdio.h>

void main(void)
{
	int number, nthBit, bitState;
	
	printf("Enter a number: "); fflush(stdout);
	scanf("%d",&number);
	
	printf("Enter the number of a bit (nth bit 0,1,2 ... 31): "); fflush(stdout);
	scanf("%d",&nthBit);
	
	
	/* ex: 5
	 * 5: 101
	 * &
	 * 1: 001
	 * =
	 * 1
	 * <<first bit is set>>
	 */
	 
	 bitState = (number>>nthBit) & 1;
	 
	 printf("The %d bit of %d is ((( %d )))",nthBit ,number ,bitState);


}
