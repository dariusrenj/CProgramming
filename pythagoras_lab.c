/*  Name: pythagoras_lab.c
    Author: Zackery Vering
    Date: 13 July 2018
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main(void)
{
	double first_side = 0;
	double second_side = 0;
	double hypotenuse = 0;

	printf("Input the two known sides of a right triangle separated by a space. \n");
	scanf("%lf %lf", &first_side, &second_side);

	if ((first_side>0)&&(second_side>0))
	{
		hypotenuse = sqrt((first_side*first_side) + (second_side*second_side));
		printf("The hypotenuse is %.2f. \n", hypotenuse);
	}

	else
	{
		printf("You failed to enter a positive integer. \nGAME OVER!\n");
	}
	return 0;
}