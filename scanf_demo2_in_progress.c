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
    if(month ==1|| month ==3|| month ==5|| month ==7|| month ==8|| month ==10|| month ==12)
    {
        if(day>31)
        {
            printf("\nEnter a day between 1 - 31.\n");
            scanf("%2d", &day);
        }
    }
    else if (month ==4|| month ==6|| month ==9|| month ==11)
    {
        if(day>30)
        {
            printf("\nEnter a day between 1 - 30.\n");
            scanf("%2d", &day);
        }
    }
    else
    {
        if(day>28)
        {
            printf("\nEnter a day between 1 - 28.\n");
            scanf("%2d", &day);
        }
    }

    printf("Your date was: %02d/%02d/%04d\n", month, day, year);

    return 0;

}