/*  Name: pythagoras_lab.c
    Author: Zackery Vering
    Date: 13 July 2018
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main(void)
{
	int x = 9;
	int y = 3;
	//////// WRITE EACH VALUE OF X ////////
    ///I reset x and y after each one just to keep the operators from going all wonky ///

	printf(" x *= y is %d\n", x *= y); //x *- y
	x = 9; y = 3;
	printf(" x /= y is %d\n", x /= y); //x /= y
	x = 9; y = 3;
	printf(" x %%= y is %d\n", x %= y); //x %= y
	x = 9; y = 3;
	printf(" x += y is %d\n", x += y); //x += y
	x = 9; y = 3;
	printf(" x -= y is %d\n", x -= y); //x -= y
	x = 9; y = 3;
	printf(" x *= ++y is %d\n", x *= ++y); //x *= ++y
	x = 9; y = 3;
	printf(" x /= y-- is %d\n", x /= y--); //x /= y--
	x = 9; y = 3;
	printf(" x %%= --x is %d\n", x %= --x); //x %= --x
	x = 9; y = 3;
	printf(" x *= --y is %d\n", x += --y); //x += --y
	x = 9; y = 3;
	printf(" x -= y++ is %d\n", x -= y++); //x -= y++
	x = 9; y = 3;
	printf(" y %%= y || x /= x-- is %d\n", (y %= y) || (x /= x--)); //(y %= y) || (x /= x--)        // Bonus

	return 0;
}