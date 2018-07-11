/*  Name: io_demo_lab2.c
    Author: Zackery Vering
    Date: 11 July 2018
*/

#include <stdio.h>

int main(void)
{
    //initialize variable
    int user_input = 0;
    printf("Enter a character: ");
    //assign user defined value
    user_input = getc(stdin);
    printf("Your character was: ");
    //display output based on user's input
    putc(user_input, stdout);
    printf("\n");

    return 0;

}