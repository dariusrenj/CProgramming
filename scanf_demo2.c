/*  Name: scanf_demo2.c
    Author: Zackery Vering
    Date: 12 July 2018
*/

#define _CRT_NO_SECURE_WARNING 1
#include <stdio.h>

int main(void)
{
    int day = 0;
    int month = 0;
    int year = 0;

    printf("\nEnter a date in MM-DD-YYYY format.\n");
    scanf("%2d%*c%2d%*c%4d", &month, &day, &year);
    if(month>12)
    {
        printf("\nEnter a valid month. That means 01-12 since there's only 12 months in a year.\n");
        scanf("%2d", &month);
    }
    printf("Your date was: %02d/%02d/%04d\n", month, day, year);

    return 0;

}