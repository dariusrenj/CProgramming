/*  Name: scanf_demo.c
    Author: Zackery Vering
    Date: 12 July 2018
*/

#define _CRT_NO_SECURE_WARNING 1
#include <stdio.h>

int main(void)
{
    char my_string[25];

    printf("\nEnter a string but don't use any capital letters. \n");
    scanf("%24[^A-Z\n]s \n", &my_string);
    printf("Your lower case string was: \n%s\n\n", my_string);

    return 0;

}