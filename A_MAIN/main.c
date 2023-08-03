#define _CRT_SECURE_NO_WARNINGS
#include "fundamentals.h"				// Including the fundamentals header file
#include "manipulating.h"				// Including the manipulating header file
#include "converting.h"					// Including the converting header file
#include "tokenizing.h"					// Including the tokenizing header file
#include <stdio.h>

int main(void) {

	char buff[10];					// Declare a character array 'buff' of size 10. 
							// This will be used as a buffer to store the input read from standard input.
	do {

		printf("1 - Fundamentals\n");		// Console print
		printf("2 - Manipulation\n");		//
		printf("3 - Converting\n");		//
		printf("4 - Tokenizing\n");		//
		printf("0 - Exit\n");			//
		printf("Which module to run? \n");	// 

		fgets(buff, 10, stdin);			// Read a line from stdin, store it in 'buff', up to a maximum of 10 characters.

		switch (buff[0]) {			// Begin a switch-case block that checks the first character in the buffer 'buff'.

			case '1': fundamentals();	// fundamentals function call
				break;

			case '2': manipulation();	// manipulating function call
				break;	

			case '3': converting();		// converting function call
				break;

			case '4': tokenizing();		// tokenizing function call
				break;
		}

	} while (buff[0] != '0');			// Continue looping until the first character in 'buff' is '0'.

	return 0;					// Returning control to the OS
}
