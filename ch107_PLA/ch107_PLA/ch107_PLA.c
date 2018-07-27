/*
Name: Zackery Vering
Title: Ch 10.7 PLA
Date 24 July 2018*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//redefine EOF
#ifdef EOF
#	undef EOF
#	define EOF 66
#endif

#ifndef DEBUG
#	ifdef _INC_STDIO
//define MACRO to be printed
#		define TEST_MACRO(x) printf(#x " is %d", x)
#	else
return 0;
#	endif // _INC_STDIO
#endif // !DEBUG





int main(void)
{
#ifdef _INC_STDIO
	TEST_MACRO(FOPEN_MAX);
	TEST_MACRO(FILENAME_MAX);
	TEST_MACRO(EOF);
#endif // _INC_STDIO


	while (1)

		return 0;
}