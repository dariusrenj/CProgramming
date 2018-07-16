/* Name: Zackery Vering
Project: Capstone
Date: 16 July 2018
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <inttypes.h>
#include <math.h>


int main(void)
{
	uint16_t someNumber = 5192;
    uint16_t inputMask = 0;
    uint16_t placeHolder = 0;
    printf("\nWe are going to flip a bit on %d\n", someNumber);
	printf("Select which bit to flip. Choices are 0-%d:  ", (sizeof(someNumber)*8)-1);
	scanf("%u", &inputMask);
    inputMask = pow(2, inputMask);
    placeHolder = someNumber;
    someNumber = someNumber ^ inputMask;
	printf("The original number was %u (Hex: 0x%08X) \n", placeHolder, placeHolder);
    printf("The new number is %u (Hex: 0x%08X) \n\n", someNumber, someNumber);

	return 0;
}