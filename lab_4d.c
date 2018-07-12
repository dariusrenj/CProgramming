/*  Name: lab_4d.c
    Author: Zackery Vering
    Date: 12 July 2018
*/

#define _CRT_NO_SECURE_WARNING 1
#include <stdio.h>

int main(void)
{
    // arrays for names
    char first_name[26];
    char middle_name[26];
    char last_name[26];

    printf("\nEnter your first, middle, and last name. \n");
    //allow user to input their name separating each part with a tab (or space because space works as well)
    scanf("%25s\t%25s\t%25s", &first_name, &middle_name, &last_name);
    //prints each part of their name on a new line preceded by a tab 
    printf("\n\nYour name is:\n\t%s\n\t%s\n\t%s\n\n", first_name, middle_name, last_name);

    return 0;

}