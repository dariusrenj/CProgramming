/*
Name: Zackery Vering
Title: Ch 12 PL Copy Char-by-Char
Date: 30 July 2018
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int number_of_students = 0;
int main(void)
{
	FILE * myFile_ptr = fopen("Class_Roster.txt", "a"); // Opens a read-only file
	char temp_buff[256] = { 0 };
	char first_name[20] = { 0 };
	char middle_name[20] = { 0 };
	char last_name[20] = { 0 };
	printf("How many students are in the class?\n");
	scanf("%d", &number_of_students);
	if (number_of_students > 0)
	{
		for (int i = 0; i < number_of_students; i++)
		{
			printf("Enter student %d's First, Middle, and Last Name\n", i + 1);
			scanf("%19s %19s %19s", &first_name, &middle_name, &last_name);
			char *f_name = tolower(first_name[0]);
			char *m_name = tolower(middle_name[0]);
			char user_name[25] = { 0 };
			strcpy(user_name, &f_name);
			strcat(user_name, &m_name);
			strcat(user_name, &last_name);
			if (myFile_ptr != NULL) 	// If EOF hasn’t been reached…
			{
				fprintf(myFile_ptr, "%s %s %s has a username of %s\n", first_name, middle_name, last_name, user_name);	// …print the buffer
			}
			for (int i = 0; i < (strlen(temp_buff)); i++)
			{
				temp_buff[i] = 0;
			}
		}
		fclose(myFile_ptr);
	}
	else
	{
		printf("So, you don't have any students. Ok. Go away.\n");
	}
	while (1);
	return 0;
}