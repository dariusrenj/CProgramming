/*  Name: lab_4a.c
    Author: Zackery Vering
    Date: 11 July 2018
*/

#include <stdio.h>

int main(void)
{
    //define variable
    int user_input = 0;
    printf("Enter a character: ");
    //assign user defined value
    user_input = getchar();
    printf("Your character was: ");
    //modify and display output based on user's input
    putchar(user_input+1);
    printf("\n");

    return 0;

}