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
	FILE * file_ptr = fopen("Write_Copy_Line.txt", "w"); // Opens a write file
	char temp_buff[256] = { 0 };
	char *temp_return_value = temp_buff;
	char temp_buff2[256] = { 0 };
	char *temp_return_value2 = temp_buff2;
	if (myFile_ptr != NULL) 	// Verify fopen() succeeded
	{
		while (temp_return_value) // Continue reading until return value is NULL
		{
			temp_return_value = fgets(temp_buff, 256, myFile_ptr); 	// 
			if (temp_return_value)
			{
				fputs(temp_return_value, file_ptr); 		// Print the buffer
			}
		}
		fclose(myFile_ptr); // Always fclose anything you fopen
		fclose(file_ptr); // Always fclose anything you fopen
		FILE * file2_ptr = fopen("Write_Copy_Line.txt", "r"); // Opens a write file
		if (file2_ptr != NULL) 	// Verify fopen() succeeded
		{
			while (temp_return_value2) // Continue reading until return value is NULL
			{
				temp_return_value2 = fgets(temp_buff2, 256, file2_ptr); 	// 
				if (temp_return_value2)
				{
					puts(temp_return_value2); 		// Print the buffer
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