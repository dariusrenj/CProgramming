/*
Author: Zackery Vering
Title: Ch 7 Performance Lab A
Date: 17 July 2018
*/

#include <stdio.h>

int main()
{
	char sample_array[256] = { 0 };

	printf("Type something in below: ");           // Ask user for input
	scanf("%255[^\n]s", sample_array); 

	if (sample_array[0] >= 32 && sample_array[0] < 126)
	{

		printf("%s", sample_array);
	
	}

	while (1);

	return 0;

}