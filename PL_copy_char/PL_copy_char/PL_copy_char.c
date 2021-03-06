/*
Name: Zackery Vering
Title: Ch 12 PL Copy Char-by-Char
Date: 30 July 2018
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	FILE * myFile_ptr = fopen("Dragula.txt", "r"); // Opens a read-only file
	FILE * file_ptr = fopen("Write_Copy_Char.txt", "w"); // Opens a write file
	char readFromFile = 0; // Store char-by-char input from myFile_ptr
	char readFromFile2 = 0; // Store char-by-char input from myFile_ptr
	if (myFile_ptr != NULL) 	// Verify fopen() succeeded
	{
		while (readFromFile != EOF) // Continue reading until the end of file
		{
			readFromFile = getc(myFile_ptr); 	// Read one character
			if (readFromFile != NULL)
			{
					fputc(readFromFile, file_ptr); 		// Print that character
			}
		}
		fclose(myFile_ptr); // Always fclose anything you fopen
		fclose(file_ptr); // Always fclose anything you fopen
		FILE * file2_ptr = fopen("Write_Copy_Char.txt", "r"); // Opens a write file
		if (file2_ptr != NULL) 	// Verify fopen() succeeded
		{
			while (readFromFile2 != EOF) // Continue reading until the end of file
			{
				readFromFile2 = getc(file2_ptr); 	// Read one character
				if (readFromFile2 != NULL)
				{
					fputc(readFromFile2, stdout); 		// Print that character
				}
			}
			fclose(file2_ptr); // Always fclose anything you fopen
		}
		else 			// Otherwise, fopen() failed
		{
			puts("Error opening file!"); 	// Tell the user and...
			getchar(); getchar();
			return -1;			// Return an error value
		}
	}
	else 			// Otherwise, fopen() failed
	{
		puts("Error opening file!"); 	// Tell the user and...
		getchar(); getchar();
		return -1;			// Return an error value
	}

	getchar(); getchar();

	return 0;
}