/*
Name: Zackery Vering
Title: Midterm Review
Date: 19 July 2018
*/

#ifndef ENGLISH_FUNCTIONS_
#define ENGLISH_FUNCTIONS_

#ifdef __cplusplus 
/*
*  This preprocessor directive is necessary to allow this C code to be tested with C++ code
*  e.g., the Google Test framework
*  Do not remove this preprocessor directive
*/
extern "C"
{
#endif


	/*
	* FUNCTION:   int is_it_alphabet(signed char inputChar);
	*
	* ARGUMENTS:  inputChar is a single signed character that represents a single character
	*                 that is tested as an alphabet letter.
	*
	* RETURNS:	  1 if inputChar is an alphabet character
	*             0 if inputChar is not an alphabet character
	*
	* NOTES:      This function should not care if inputChar is uppercase or lowercase
	*             The return value represents a boolean response without using a 'bool' data type
	*             The letters a through z and A through Z represent "alphabet letters" for
	*                 the purposes of this assignment.
	*/
	int is_it_alphabet(signed char inputChar)
	{
		if ((inputChar >= 65 && inputChar <= 90) || (inputChar >= 97 && inputChar <= 122)) //checks if input is a letter
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	/*
	* FUNCTION:   int remove_non_letters(char * sentenceString);
	*
	* ARGUMENTS:  senteceString is expected to be a pointer to a null-terminated string
	*
	* RETURNS:	  Number of characters that were removed
	*             -1 if senteceString is NULL
	*
	* NOTES:      The execution of this function must utilize is_it_alphabet() to determine
	*                 whether or not a given char is an alphabet letter or not.
	*             In addition to removing non-alphabet letters, this function will also remove any
	*                 "blank space".
	*             Most importantly, sentenceString will be null-terminated before the function returns
	*/
	int remove_non_letters(char * sentenceString)
	{
		int count = 0, i = 0;
		if (sentenceString == '\0')
		{
			return -1;
		}
		//loop until there's a null-terminated character
		while (sentenceString[i] != '\0')
		{
			//check character. remove if not a letter. increase count
			if (!is_it_alphabet(sentenceString[i]))
			{
				memmove(&sentenceString[i], &sentenceString[i + 1], strlen(sentenceString) - i);
				count++;
			}
			//if a letter, increase i
			else
			{
				i++;
			}
		}
		//return characters removed
		return count;
	}

	/*
	* FUNCTION:   int reverse_string(char * inputString, char * outputBuff, int inputPosition);
	*
	* ARGUMENTS:  inputString is expected to be a pointer to a null-terminated string
	*             outputBuff is expected to be a pointer to a char array which will store the reversed string from inputString
	*             inputPosition is the element of inputString that reverse_string() should reverse
	*
	* RETURNS:	  Number of characters that were reversed
	*             -1 if either inputString or outputBuff is NULL
	*             -2 if inputPosition is unrealistic
	*                 Examples:
	*                     inputPosition is negative
	*                     inputPosition is out of the array's scope
	*
	* NOTES:      This function is recursive and, skipping over input validation, follows this algorithm:
	*                 1. Reverse inputString[inputPosition] into outputBuff[]
	*                 2. Call reverse_string() to reverse the next inputString[] position
	*                 3. Count and return the total number of characters that were reversed from inputString[]
	*                        into outputBuff[]
	*             Most importantly, outputBuff will be null-terminated before the function returns
	*/
	int reverse_string(char * inputString, char * outputBuff, int inputPosition)
	{
		int y = 0;
		int count = 0;
		if (!inputString || !outputBuff) //check for a NULL string
		{
			return -1;
		}
		if (inputPosition < 0 || inputPosition >= strlen(inputString)) //check if the string is longer than 0
		{
			return -2;
		}
		int string_length = strlen(inputString);
		for (int i = string_length; i > inputPosition - 1; i--) //loop through string
		{
			if (inputString[i] != '\0')
			{
				outputBuff[y] = inputString[i]; //replaces outputBuff with reverse inputString 
				count++;
				y++;
			}
		}

		return count;
	}

	/*
	* FUNCTION:   int clear_a_buffer(char * fullBuff, int buffSize);
	*
	* ARGUMENTS:  fullBuff is expected to be a pointer to a char array
	*             buffSize represents the dimension of fullBuff[]
	*
	* RETURNS:	  0 on success
	*             -1 if fullBuff is NULL
	*             -2 if buffSize is unrealistic
	*                 Examples:
	*                     buffSize is zero
	*                     buffSize is negative
	*
	* NOTES:      This function 'zeroizes' all of the elements of fullBuff[buffSize]
	*             fullBuff does not necessarily need to be a null-terminated string since the array's
	*                 dimension is passed in as an argument (for safety)
	*/
	int clear_a_buffer(char * fullBuff, int buffSize)
	{
		if (buffSize <= 0)
		{
			return -2;
		}
		if (fullBuff == '\0')
		{
			return -1;
		}
		for (int i = 0; i < buffSize; i++)
		{
			fullBuff[i] = 0;
		}
		return 0;
	}

#ifdef __cplusplus
	/*
	*  This preprocessor directive is necessary to allow this C code to be tested with C++ code
	*  e.g., the Google Test framework
	*  Do not remove this preprocessor directive
	*/
}
#endif

#endif