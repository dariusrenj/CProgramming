/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////// PERFORMANCE LAB I.5.A-4 ////////////////////////////////////////////////
/////////////////////////////////////////////// FUNCTION ARGUMENTS //////////////////////////////////////////////////
///////////////////////////////////////////////// "Surfin' Bird" ////////////////////////////////////////////////////
/////////////////////////////////////////////// Instructor Solution /////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h>

/* Error code default value */
#ifdef DEFAULT_ERROR_CODE
#undef DEFAULT_ERROR_CODE
#endif
#define DEFAULT_ERROR_CODE 90318

/* Just in case NULL was undefined... */
#ifndef NULL
#define NULL ((void*) 0)
#endif

/* Error code for success */
#ifdef ERROR_CODE_SUCCESS
#undef ERROR_CODE_SUCCESS
#endif
#define ERROR_CODE_SUCCESS ((int)1)

/* Error code if sentence_ptr is NULL */
#ifdef ERROR_NULL_SENTENCE_POINTER
#undef ERROR_NULL_SENTENCE_POINTER
#endif
#define ERROR_NULL_SENTENCE_POINTER ((int)-1)

/* Error code if searchWord_ptr is NULL */
#ifdef ERROR_NULL_SEARCH_POINTER
#undef ERROR_NULL_SEARCH_POINTER
#endif
#define ERROR_NULL_SEARCH_POINTER ((int)-2)

/* Error code is the string in searchWord_ptr can not be found in the string located at sentence_ptr */
#ifdef ERROR_SEARCH_NOT_FOUND
#undef ERROR_SEARCH_NOT_FOUND
#endif
#define ERROR_SEARCH_NOT_FOUND ((int)-3)

/* Standard array size for manual dimension declaration */
#ifdef BUFF_SIZE
#undef BUFF_SIZE
#endif
#define BUFF_SIZE 1024


char * find_the_word(char * sentence_ptr, char * searchWord_ptr, int * errorCode_ptr);

//declare struct
struct FunctionTest {
	char * sentence_ptr;			// Holds the sentence_ptr for find_the_word()
	char * searchWord_ptr;			// Holds the searchWord_ptr for find_the_word()
	char * expected_return_ptr;		// Holds the expected_return_ptr for find_the_word()
	char * errorCode_ptr;			// Holds the errorCode_ptr for find_the_word()
	int expected_errorCode;			// Holds the expected_errorCode for find_the_word()
};

int main(void)
{
	int i = 0;
	int numTestsRun = 0;
	int numTestsPassed = 0;
	int putErrorCodeHere = DEFAULT_ERROR_CODE;
	char * tempReturnValue_ptr = NULL;
	char testChar1 = 0; // DEBUGGING
	char testChar2 = 0; // DEBUGGING

						/* TEST INPUT */
						// Three normal strings
	char testInput0[] = { "Good luck to you on this lab.\nI hope you do well." }; // Key: \n
	char testInput1[] = { "Normal test input.  'The' is the search key." }; // Key: The
	char testInput2[] = { "This is also normal input.  The 'bird' is the word." }; // Key: bird
																				   // Two strings that have duplicate keys
	char testInput3[] = { "This string is an example of a string that has two occurrences of the word 'is'." }; // Key: is
	char testInput4[] = { "The word 'the' is very common in the English language." }; // Key: the
																					  // Two strings that have multiple occurrences of the key
	char testInput5[] = { "Many English words are 'loan words', which is defined as 'a word that has been adopted from one language into another'." }; // Key: word
	char testInput6[] = { "The search keys don't have to be letters!  They could be any character or array of characters!  They could even be puntuation!  Maybe even non-printable characters!  Crazy, right?" }; // Key: "!  "
																																																				   // Two NULL strings to pass as sentence_ptr
	char * testInput7 = NULL; // Key: "Doesn't matter"
	char * testInput8 = NULL; // Key: "Don't bother"
							  // Two real strings to pass alongside a NULL searchWord
	char testInput9[] = { "It's a shame to waste a perfectly good sentence." }; // Key:  NULL
	char testInput10[] = { "It's a shame to waste a perfectly good null-terminated string." }; // Key:  NULL
																							   // Two real strings to pass alongside a NULL errorCode
	char testInput11[] = { "At least electrons are free." }; // Key: are
	char testInput12[] = { "Even if they're not free, there is are a plethora of electrons freely available." }; // Key: e
																												 // Two strings that will pass more NULL search keys
	char testInput13[] = { "You can't find a key here!" }; // Key: NULL
	char testInput14[] = { "Take a picture!  It'll last longer." }; // Key: NULL
																	// Two strings to pass long keys
	char testInput15[] = { "Now is the time for all good men to come to the aid of their country." }; // Key: "come to the aid"
	char testInput16[] = { "Sometimes it's hard to play the game the way it was intended to be played instead of following the game's rules as written." }; // Key: "play the game"
																																							// Edge cases that may break find_the_word()
	char testInput17[] = { "I hope you didn't find anything here!" }; // Key: '\0' (0x0)
	char testInput18[BUFF_SIZE] = { 0 }; // Key: "Don't do it!"
	char testInput19[] = { "Not a long string" }; // Key: "long string as a search key"
	char testInput20[] = { "part" }; // Key: "partial"
	char testInput21[BUFF_SIZE] = { 0 }; // Key: '\0' (0x0)
										 // Two strings whose keys are non printable characters
	char testInput22[] = { 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0xA, 0xB, 0xC, 0xD, 0xE, 0xF, 0x0 }; // Key: 0x8
	char testInput23[] = { 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, 0x1E, 0x1D, 0x1C, 0x1B, 0x1A, 0x0 }; // Key: 0x1C
																									// Two strings that include characters from the extended ASCII codes
	char testInput24[] = { '\n', 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, '\n', 0x7C, '$', '(', '5', ')', '$', 0x7C, '\n', 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, '\n', 0x0 }; // Key: 0xC4
																																												   //	puts(testInput24); // DEBUGGING
	char testInput25[] = { 0xC4, 0x5C, 0x5F, 0x2, 0x5F, 0x2F, 0xC4, 0x0 }; // Key: 0x2F
																		   //	puts(testInput25); // DEBUGGING
	char testInput26[] = { "Sometimes keys are at the beggining of a string." }; // Key: "Sometime"
	char testInput27[] = { "When you lose an item, you always find it in the last place you look." }; // Key: "look."

	/* TEST SEARCH KEYS */
	char testKey22[] = { 0x8, 0x0 };
	char testKey23[] = { 0x1C, 0x0 };
	char testKey24[] = { 0xC4, 0x0 };
	char testKey25[] = { 0x2F, 0x0 };

	//declare struct values
	struct FunctionTest test0 = { testInput0, "\n", (testInput0+29), &putErrorCodeHere, ERROR_CODE_SUCCESS };
	struct FunctionTest test1 = { testInput1, "The", (testInput1+21), &putErrorCodeHere, ERROR_CODE_SUCCESS };
	struct FunctionTest test2 = { testInput2, "bird", (testInput2+33), &putErrorCodeHere, ERROR_CODE_SUCCESS };
	struct FunctionTest test3 = { testInput3, "is", (testInput3+2), &putErrorCodeHere, ERROR_CODE_SUCCESS };
	struct FunctionTest test4 = { testInput4, "the", (testInput4+10), &putErrorCodeHere, ERROR_CODE_SUCCESS };
	struct FunctionTest test5 = { testInput5, "word", (testInput5+13), &putErrorCodeHere, ERROR_CODE_SUCCESS };
	struct FunctionTest test6 = { testInput6, "!  ", (testInput6+40), &putErrorCodeHere, ERROR_CODE_SUCCESS };
	struct FunctionTest test7 = { testInput7, "Doesn't matter", testInput7, &putErrorCodeHere, ERROR_NULL_SENTENCE_POINTER };
	struct FunctionTest test8 = { testInput8, "Don't bother", testInput8, &putErrorCodeHere, ERROR_NULL_SENTENCE_POINTER };
	struct FunctionTest test9 = { testInput9, NULL, NULL, &putErrorCodeHere, ERROR_NULL_SEARCH_POINTER };
	struct FunctionTest test10 = { testInput10, NULL, NULL, &putErrorCodeHere, ERROR_NULL_SEARCH_POINTER };
	struct FunctionTest test11 = { testInput11, "are", NULL, NULL, DEFAULT_ERROR_CODE };
	struct FunctionTest test12 = { testInput12, "e", NULL, NULL, DEFAULT_ERROR_CODE };
	struct FunctionTest test13 = { testInput13, NULL, NULL, &putErrorCodeHere, ERROR_NULL_SEARCH_POINTER };
	struct FunctionTest test14 = { testInput14, NULL, NULL, &putErrorCodeHere, ERROR_NULL_SEARCH_POINTER };
	struct FunctionTest test15 = { testInput15, "come to the aid", (testInput15+36), &putErrorCodeHere, ERROR_CODE_SUCCESS };
	struct FunctionTest test16 = { testInput16, "play the game", (testInput16+23), &putErrorCodeHere, ERROR_CODE_SUCCESS };
	struct FunctionTest test17 = { testInput17, "\0", NULL, &putErrorCodeHere, ERROR_SEARCH_NOT_FOUND };
	struct FunctionTest test18 = { testInput18, "Don't do it!", NULL, &putErrorCodeHere, ERROR_SEARCH_NOT_FOUND };
	struct FunctionTest test19 = { testInput19, "long string as a search key", NULL, &putErrorCodeHere, ERROR_SEARCH_NOT_FOUND };
	struct FunctionTest test20 = { testInput20, "partial", NULL, &putErrorCodeHere, ERROR_SEARCH_NOT_FOUND };
	struct FunctionTest test21 = { testInput21, "\0", NULL, &putErrorCodeHere, ERROR_SEARCH_NOT_FOUND };
	struct FunctionTest test22 = { testInput22, testKey22, (testInput22+7), &putErrorCodeHere, ERROR_CODE_SUCCESS };
	struct FunctionTest test23 = { testInput23, testKey23, (testInput23+2), &putErrorCodeHere, ERROR_CODE_SUCCESS };
	struct FunctionTest test24 = { testInput24, testKey24, (testInput24+17), &putErrorCodeHere, ERROR_CODE_SUCCESS };
	struct FunctionTest test25 = { testInput25, testKey25, (testInput25+5), &putErrorCodeHere, ERROR_CODE_SUCCESS };
	struct FunctionTest test26 = { testInput26, "Sometime", (testInput26+0), &putErrorCodeHere, ERROR_CODE_SUCCESS };
	struct FunctionTest test27 = { testInput27, "look.", (testInput27+64), &putErrorCodeHere, ERROR_CODE_SUCCESS };

	//declare struct array
	struct FunctionTest testCases[] = { test0, test1, test2, test3, test4, test5, test6, test7, test8, test9, test10, test11, test12, test13, test14, \
		test15, test16, test17, test18, test19, test20, test21, test22, test23, test24, test25, test26, test27 };

	/* CALCULATE THE NUMBER OF TESTS */
	int numTotalTests = sizeof(testCases) / sizeof(testCases[0]);
	//	printf("The length of the test array is: %d \n", sizeof(testInputArray)/sizeof(testInputArray[0])); // DEBUGGING

	/* EXECUTE THE TESTS */
	for (i = 0; i < numTotalTests; i++)
	{
		/* 0. TEST HEADER */
		printf("\n");
		printf("************\n");
		printf("* TEST #%02d *\n", i);
		printf("************\n");
		tempReturnValue_ptr = find_the_word((testCases+i)->sentence_ptr, (testCases+i)->searchWord_ptr, (testCases + i)->errorCode_ptr);

		/* 1. TEST RETURN VALUE */
		numTestsRun++;
		printf("\tReturn Value Test:\t");
		if (tempReturnValue_ptr == (testCases + i)->expected_return_ptr)
		{
			puts("Pass");
			numTestsPassed++;
		}
		else
		{
			puts("FAIL!");
			printf("\t\tExpected pointer:\t%p\n", (testCases + i)->expected_return_ptr);
			printf("\t\tReceived pointer:\t%d\n", tempReturnValue_ptr);
		}

		/* 2. TEST ERROR CODE */
		numTestsRun++;
		printf("\tError Code Test:\t");
		if (putErrorCodeHere == (testCases + i)->expected_errorCode)
		{
			puts("Pass");
			numTestsPassed++;
		}
		else
		{
			puts("FAIL!");
			printf("\t\tExpected error code:\t%d\n", (testCases + i)->expected_errorCode);
			printf("\t\tReceived error code:\t%d\n", putErrorCodeHere);
			if (putErrorCodeHere == DEFAULT_ERROR_CODE)
			{
				puts("\t\tError code not even updated!");
			}
		}

		putErrorCodeHere = DEFAULT_ERROR_CODE; // Reset error code
	}

	if (numTestsRun)
	{
		printf("\n\n\n*******************************\n");
		printf("Out of the %d tests that ran...\n", numTestsRun);
		printf("%d tests passed.\n", numTestsPassed);
		printf("*******************************\n");
	}

	return 0;
}

/*
* FUNCTION:   find_the_word(char * sentence_ptr, char * searchWord_ptr, int * errorCode_ptr)
*
* ARGUMENTS:  sentence_ptr is a char pointer to a null-terminated string to search
*             searchWord_ptr is a char pointer to a null-terminated string to find inside sentence_ptr
*             errorCode_ptr is an int pointer.  Store your error code at this memory address.
*
* RETURNS:	   char pointer to the first occurrence of the searchWord_ptr string found in the
*                 sentence_ptr string.  The char pointer should be a memory address in the
*                 sentence_ptr string and this memory address should represent the first 'index'
*                 of the searchWord_ptr string.  This memory address from the sentence_ptr string
*                 should dereference to a value equivalent to searchWord_ptr[0].
*             All other occurences should return NULL.  This includes, but is not limited to, the
*                 following:
*                     sentence_ptr is NULL
*                     searchWord_ptr is NULL
*                     errorCode_ptr is NULL
*                     the searchWord_ptr string is not found in the sentence_ptr string
*
* NOTES:      This function only utilizes address arithmetic to access information within the
*                 null-terminated char array found at both sentence_ptr and searchWord_ptr
*             Only access elements of the char array found at both sentence_ptr and searchWord_ptr
*                 using address arithmetic (AKA pointer math).  The definition of this function should
*                 be entirely devoid of the [ and ] characters.  (e.g., sentence_ptr[i] is forbidden)
*             The only guarantees for the arguments are:
*                 Any string found at sentence_ptr is null-terminated
*                 Any string found at searchWord_ptr is null-terminated
*             There is no guarantee sentence_ptr has an address (return NULL if it's NULL and assign the
*                 proper error code)
*             There is no guarantee searchWord_ptr has an address (return NULL if it's NULL and assign the
*                 proper error code)
*             There is no guarantee errorCode_ptr has an address (return NULL if it's NULL and assign the
*                 proper error code)
*             There is no guarantee the string found at sentence_ptr contains the string found at
*                 searchWord_ptr (return NULL if the string at searchWord_ptr is not found and assign the
*                 proper error code)
*             There is no guarantee the strings found at both sentence_ptr and searchWord_ptr will
*                 return a string length longer than zero (0)
*/
char * find_the_word(char * sentence_ptr, char * searchWord_ptr, int * errorCode_ptr)
{
	char testChar1 = 0; // DEBUGGING
	char testChar2 = 0; // DEBUGGING
	char * returnValue_ptr = NULL;
	int sentenceLength = 0;
	int searchWordLength = 0;
	int i = 0;
	int j = 0;

	if (!sentence_ptr)
	{
		returnValue_ptr = NULL;
		*errorCode_ptr = ERROR_NULL_SENTENCE_POINTER;
	}
	else if (!searchWord_ptr)
	{
		returnValue_ptr = NULL;
		*errorCode_ptr = ERROR_NULL_SEARCH_POINTER;
	}
	else if (!errorCode_ptr)
	{
		returnValue_ptr = NULL;
	}
	else
	{
		sentenceLength = strlen(sentence_ptr);
		searchWordLength = strlen(searchWord_ptr);
		// If it's longer... it obvs ain't found. 
		if (searchWordLength > sentenceLength)
		{
			returnValue_ptr = NULL;
			*errorCode_ptr = ERROR_SEARCH_NOT_FOUND;
		}
		else
		{
			*errorCode_ptr = ERROR_SEARCH_NOT_FOUND;
			for (i = 0; i <= (sentenceLength - searchWordLength); i++)
			{
				testChar1 = *(sentence_ptr + i);
				testChar2 = *(searchWord_ptr);
				if (*(sentence_ptr + i) == *(searchWord_ptr)) // If the first letter of the Key matches the current value...
				{
					if (searchWordLength == 1)
					{
						returnValue_ptr = (sentence_ptr + i);
						*errorCode_ptr = ERROR_CODE_SUCCESS;
						return returnValue_ptr;
					}
					else
					{
						for (j = 1; j < searchWordLength; j++) // ...check for the rest of the Key
						{
							if (*(sentence_ptr + i + j) != *(searchWord_ptr + j))
							{
								break; // No match
							}
							// Check last characters
							else if (j == (searchWordLength - 1))
							{
								returnValue_ptr = (sentence_ptr + i);
								*errorCode_ptr = ERROR_CODE_SUCCESS;
								return returnValue_ptr;
							}
						}
					}
				}
			}
		}
	}

	return returnValue_ptr;
}