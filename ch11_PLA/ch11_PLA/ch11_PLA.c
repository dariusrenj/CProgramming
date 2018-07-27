/*
Name: Zackery Vering
Title: Ch 11 PLA
Date: 25 July 2018
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main(void)
{
/*	int user_input = 0; //declare user input
	int temp_value = 0; //declare temp value
	int *input_ptr; //declare pointer
	printf("Enter a number\n");
	scanf("%d", &user_input); //read user input
	input_ptr = &user_input; //set pointer to user input
	temp_value = *input_ptr; //set temp value to pointer

	printf("user_input has a value of %d at pointer %p\n", user_input, &user_input); //print value and address of user input
	printf("temp_value has a value of %d at pointer %p\n", temp_value, &temp_value); //print value and address of temp value
	printf("input_ptr has a value of %d at pointer %p\n", *input_ptr, &input_ptr); //print value and address of input ptr */

	int someNums[5] = { 0, 1, 2, 3, 4 };
	int *someNums_ptr = someNums;
	int *moreNums_ptr = (someNums + 2);

	int test = someNums_ptr - moreNums_ptr;
	printf("someNums_ptr minus moreNums_ptr is %d\n", test);
	printf("&someNums_ptr is %d\n", &someNums_ptr);
	printf("&moreNums_ptr is %d\n", &moreNums_ptr);
	printf("&test is %d\n", &test);

	return 0;
}