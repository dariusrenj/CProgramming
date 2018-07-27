/*
Author: Zackery Vering
Title: Ch 7 Performance Lab D
Date: 17 July 2018
*/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>



int main()
{
	int value_a = 0;
	int value_b = 0;
	char math_operator = " ";

	printf("Enter two numbers separated by an arithmetic operator (ie. 7+5): \n");
	scanf("%d%c%d", &value_a, &math_operator, &value_b);

	switch (math_operator)
	{
		case '+':
			printf("The answer based on your inputs is %d", (value_a + value_b));
			break;
		case '-':
			printf("The answer based on your inputs is %d", (value_a - value_b));
			break;
		case '*':
			printf("The answer based on your inputs is %d", (value_a * value_b));
			break;
		case '/':
			printf("The answer based on your inputs %.2lf", ((float)value_a / (float)value_b));
			break;
		default:
			printf("You entered something other than an arithmetic operator.\nSystem failure.\nSelf-detonation in\n...5\n...4\n...3\n...2\nHave a nice day!\n...1\nBOOM!!\n");
			break;
	}
	
	while (1);

	return 0;

}