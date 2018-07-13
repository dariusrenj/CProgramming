/*  Name: arithmetic_operator.c
    Author: Zackery Vering
    Date: 13 July 2018
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main(void)
{
	//////// ARITHMETIC OPERATOR QUIZ BONUS QUESTION ////////
int y = 4;
// original 1 + 2 * (3 + y) + 5;        // Result 20
printf("%d\n", 1+2-3+(y*5));

//////// RELATIONAL OPERATOR QUIZ BONUS QUESTION ////////
int x = 2; y = 6;
// original x != y != 3 >= x;          // Result 0
printf("%d\n", x == y != 3 == x);

//////// ASSIGNMENT OPERATOR QUIZ BONUS QUESTION ////////
x = 9; y = 3;
//(y %= y) || (x /= x--);    // Result 0
printf("%d\n", (x *= y) == (y %= x));

// What would be a better way of writing these?
// A better way of writing these would look like this:
y = 4;
printf("%d\n", y*5);
x = 2; y = 6;
printf("%d\n", x==y);
x = 9; y = 3;
printf("%d\n", (x /= y)==(y *= y));
	return 0;
}