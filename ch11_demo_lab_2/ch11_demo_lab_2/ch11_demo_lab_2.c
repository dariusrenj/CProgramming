/*
Name: Zackery Vering
Title: Ch 11 Demo Lab 2
Date: 25 July 2018*/

#include <stdio.h>

int main(void)
{
	int number_array[6] = { 7, 3, 0, 9, 13, 5 };
	int *array_ptr = number_array;

	if (*array_ptr == '\0')
	{
		return -1;
	}
	else if (number_array <= 0)
	{
		return -1;
	}
	else
	{
		int *new_ptr = array_ptr;
		for (int i = 0; i < sizeof(number_array) / sizeof(number_array[0]); i++)
		{
			if (*(new_ptr) > *(array_ptr + i) && *(array_ptr + i) > 0)
			{
				*new_ptr = *(array_ptr + i);
			}
		}
		
		printf("%d is the smallest number in the array\n", *new_ptr);

		return new_ptr;
	}

}