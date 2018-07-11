/*  Name: io_demo_lab.c
    Author: Zackery Vering
    Date: 11 July 2018
*/

#include <stdio.h>

int main(void)
{
    int user_input = 0;
    printf("Enter a character: ");
    user_input = getchar();
    printf("Your character was: ");
    putchar(user_input);
    printf("\n");

    return 0;

}