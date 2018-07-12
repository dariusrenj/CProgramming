/*  Name: lab_4d_part2.c
    Author: Zackery Vering
    Date: 12 July 2018
*/

#define _CRT_NO_SECURE_WARNING 1
#include <stdio.h>

int main(void)
{
    // arrays for integers
    int first_number;
    int second_number;

    printf("\nEnter two integers, separated by a *, to be multiplied.. \n");
    //allow user to input their numbers
    scanf("%d*%d", &first_number, &second_number);
    //prints the numbers and the result of their multiplication
    printf("\nThe result of %d multiplied by %d is %d\n\n", first_number, second_number, first_number*second_number);

    return 0;

}