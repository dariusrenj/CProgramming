#pragma once
//declare struct
struct FunctionTest {
	char * sentence_ptr;			// Holds the sentence_ptr for find_the_word()
	char * searchWord_ptr;			// Holds the searchWord_ptr for find_the_word()
	char * expected_return_ptr;		// Holds the expected_return_ptr for find_the_word()
	char * errorCode_ptr;			// Holds the errorCode_ptr for find_the_word()
	int expected_errorCode;			// Holds the expected_errorCode for find_the_word()
};