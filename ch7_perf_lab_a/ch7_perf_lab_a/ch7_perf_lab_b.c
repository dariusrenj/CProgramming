/*
Author: Zackery Vering
Title: Ch 7 Performance Lab B
Date: 17 July 2018
*/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>

int binary(int num)
{
	printf("This number in binary is ");
	unsigned i;
	for (i = 1 << (sizeof(num) * 8) - 1; i > 0; i = i / 2)
		(num & i) ? printf("1") : printf("0");
	printf("\n");
}

int main()
{
	int user_input = 0;

	printf("Please input a number: ");           // Ask user for input
	scanf("%d", &user_input); 

	if (user_input < 0)
	{

		printf("The number was negative\n");
	
	}
	else
	{
		binary(user_input);
		user_input = user_input << ((sizeof(user_input) * 8) - 1;
		printf("The number is now %d", user_input);
		binary(user_input);
	}
	while (1);

	return 0;

}