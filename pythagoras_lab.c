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

	hypotenuse = sqrt((first_side*first_side) + (second_side*second_side));
	printf("The hypotenuse is %.2f. \n", hypotenuse);

	getchar();
	return 0;
}