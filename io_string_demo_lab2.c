/*  Name: io_string_demo_lab2.c
    Author: Zackery Vering
    Date: 11 July 2018
*/

#include <stdio.h>

int main(void)
{
    //initialize variable
    char buff[4];
    printf("Enter string: ");
    //assign user defined value
    fgets(buff, sizeof(buff), stdin);
    printf("Your string was: ");
    //display output based on user's input
    fputs(buff, stdout);
    printf("\n");

    return 0;

}