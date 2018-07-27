/*
Author: Zackery Vering
Title: Ch 7 Performance Lab C
Date: 17 July 2018
*/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>



int main()
{
	uint32_t value_a = 0;
	uint32_t value_b = 0;
	uint32_t value_c = 0;
	uint32_t placeholder = 0;

	printf("Enter two numbers: \n");
	scanf("%d\t%d", &value_a, &value_b);

	if (value_a == value_b)
	{
		printf("The numbers you entered were identical.\nSystem failure.\nSelf-detonation in\n...5\n...4\n...3\n...2\nHave a nice day!\n...1\nBOOM!!\n");
	}
	else if (value_a > value_b)
	{
		placeholder = value_c;
		value_c = value_a;
		value_a = placeholder;
		printf("The original values were: %d, %d, %d\n", value_c, value_b, value_a);
		printf("The new values are: %d, %d, %d\n", value_a, value_b, value_c);

	}
	else
	{
		placeholder = value_c;
		value_c = value_b;
		value_b = placeholder;
		printf("The original values were: %d, %d, %d\n", value_a, value_c, value_b);
		printf("The new values are: %d, %d, %d\n", value_a, value_b, value_c);
	}

	if ((value_a + value_b + value_c) > 2)
	{
		printf("The sum of all 3 values is: %d\n[Disclaimer: unsigned integers aren't negative. Therefore, even though the sum may be less than 2, this will print unless the sum is 0 or 1.\n ", (value_a + value_b + value_c));
	}
	while (1);

	return 0;

}