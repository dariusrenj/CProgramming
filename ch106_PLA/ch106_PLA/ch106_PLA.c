/*
Name: Zackery Vering
Title: Ch 10.6 PLA
Date 24 July 2018*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//sets buffer size
#define BUFF_SIZE 64

//combines string literals
#define CREEPERS(a, b) a##b
#define SNAKES(a, b) CREEPERS(a, b)

//define strings
#define NO_LEGS "Vipers and cobras"
#define EIGHT_LEGS "Tarantulas and scorpions"

int main(void)
{
	//defines and sets value to an array
	char crawlers[BUFF_SIZE] = SNAKES(NO_LEGS, EIGHT_LEGS);
	//prints array
	printf("Some of the best pets are %s\n", crawlers);

	while (1)

		return 0;
}
