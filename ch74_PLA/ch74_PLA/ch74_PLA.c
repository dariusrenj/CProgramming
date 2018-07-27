/*
Author: Zackery Vering
Title: Ch 7.4 Performance Lab A
Date: 18 July 2018
*/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>

uint32_t x = 0;

int main()
{
	int user_input = 0;
	int counter = 0;

	printf("Please input a number: ");           // Ask user for input
	scanf("%d", &user_input);

	//Check if user tried to input number larger than 999
	if (user_input > 999)
	{
		printf("Your input was greater than 999.\nPlease try again.\n");
	}
	else
	{
		//Start loop to check
		for (int i = 0; i < 999; i++)
		{
			//Check to see if 15 integers have been 
			if (counter == 15)
			{
				break;
			}
			else
			{
				//If i is 0, continue to ignore divide by 0 errors
				if (i == 0)
				{
					continue;
				}
				else
				{
					//Check the modulus and print integer if there's no remainder
					if (user_input % i == 0)
					{
						printf("%d\n", i);
						counter++;
					}
				}
			}

		}
	}
	return 0;
}