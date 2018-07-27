/*
Name: Zackery Vering
Title: Chapter 7.5 Performance Lab A
Date: 18 July 2018
*/

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

char user_input = { 0 };
int i = 0;
int count = 100;

int main()
{
	printf("Would you like odds (o) or evens (e)?\nEnter 'o' for odds and 'e' for evens.\n");
	scanf("%c", &user_input);

	if (user_input == 'o' || user_input == 'e')
	{
		//FOR LOOP version
		for (i = 0; i <= 100; i++)
		{
			if (user_input == 'e' && i % 2 == 0)
			{
				printf("%d\n", i);
			}
			else if (user_input == 'o' && i % 2 != 0)
			{
				printf("%d\n", i);
			}
		}
		//WHILE LOOP version
		/*while (i<=100)
		{
			if (user_input == 'e' && i % 2 == 0)
			{
				printf("%d\n", i);
				i++;
			}
			else if (user_input == 'o' && i % 2 != 0)
			{
				printf("%d\n", i);
				i++;
			}
		}*/
	}
	else
	{
		printf("You don't like directions, do you?\n");
	}

	return 0;
}