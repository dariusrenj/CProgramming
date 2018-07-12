/*  Name: printf_demo.c
    Author: Zackery Vering
    Date: 12 July 2018
*/

#include <stdio.h>

int main(void)
{
    printf("\n%f\n", 1.2);
    printf("%+8.4f\n", -1.798);
    printf("% 7.2f\n", 0.987654321);
    printf("%-6.1f is yours\n", 13.37);
    printf("Yours is %05.2f\n", 1.2345);
    printf("%s\n", "Hello World!\0");
    printf("%9.5s\n", "Hello world!\0");
    printf("%016.11s\n\n", "Hello world!\0");               // 000000012.345600

    return 0;

}