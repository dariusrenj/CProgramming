/*
Name: Zackery Vering
Title: ch8 Performance Lab B
Date: 18 July 2018
*/

// MyStringHeader.c
#include <stdio.h>
#include <ctype.h>

#define ERR_NULL_POINTER -1;        // string is null
#define ERR_INVALID_LENGTH -2;      // string length is zero or less

extern int print_the_count(char * inputString, int strLen)
{
	char tempChar = 0;      // Current char being acted on
	int table[26] = { 0 };    // Alpha
	int count = 0;

	if (!inputString)
	{
		return ERR_NULL_POINTER;
	}
	else if (!strLen)
	{
		return ERR_INVALID_LENGTH;
	}

	for (int i = 0; i < strLen; i++)
	{
		if (inputString[i] >= 65 && inputString[i] <= 122)
		{
			tempChar = inputString[i];
			tempChar = toupper(tempChar);
			table[tempChar - 65] += 1;
			count++;
		}
	}

	// Print the table
	for (int i = 0; i < sizeof(table) / sizeof(table[0]); i++)
	{
		printf("%c: %d\n", i + 65, table[i]);
	}
	return count;
}

 extern int reverse_it(char * forwardString, int strLen)
 {
	 char temp_char = { 0 }; //temporary character to hold transitional characters
	 if (!forwardString) //check for a NULL string
	 {
		 return ERR_NULL_POINTER;
	 }
	 if (!strLen) //check if the string is longer than 0
	 {
		 return ERR_INVALID_LENGTH;
	 }
	 for (int i = 0; i <= strLen / 2; i++) //loop through string
	 {
		 temp_char = forwardString[i]; //sets temp character to index character
		 forwardString[i] = forwardString[strLen - i - 1]; //replaces index character with "reverse index" character
		 forwardString[strLen - i - 1] = temp_char; //sets "reverse index" character to temp character
	 }
	 //prints new string
	 printf("%s\n", forwardString);

	 return 0;
 }