/*  Name: bitwise_lab.c
    Author: Zackery Vering
    Date: 16 July 2018
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <inttypes.h>

int main(void)
{

    //Input a uint32_t userInput from stdin utilizing fscanf()
    //Initialize another uint32_t bitChecker to 0x01
    uint32_t inputNumber = 0;
	uint32_t bitChecker = 0x01;
	printf("Input a positive number:  ");
	scanf("%u", &inputNumber);

    //Use a Bitwise Shift Left on bitChecker to ensure only the left most bit is turned on
    printf("\t%u\n", bitChecker);
    printf("\tB. Bit shift left to make sure only leftmost bit is turned on. \n");
    bitChecker = bitChecker << ((sizeof(bitChecker) * 8) - 1);
    printf("\t%u\n", bitChecker);
    bitChecker = bitChecker >> bitChecker + 4;
    printf("\t%u\n", bitChecker);
    bitChecker = bitChecker | inputNumber;
    printf("\t%u\n", bitChecker);
    bitChecker = bitChecker & inputNumber;
    printf("\t%u\n", bitChecker);

    printf("Your number was %u (Hex: 0x%08X) \n", inputNumber, inputNumber);
    
    return 0;

}