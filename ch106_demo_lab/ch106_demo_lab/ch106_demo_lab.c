/*
Name: Zackery Vering
Title: 10.6 demo lab
Date: 24 July 2018*/

#include <stdio.h>

#define BONES 999;
#define SKELETONS(x) print (#x "found: %f\n", x)
#define GRAVES(a, b) x##y

int main(void)
{
	puts(GRAVES(SKELETONS, 17));
	#undef BONES;


	return 0;
}