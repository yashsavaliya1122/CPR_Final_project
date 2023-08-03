#include "manipulating.h"


#define _CRT_SECURE_NO_WARNINGS

#define BUFFER_SIZE 80

#include "manipulating.h"

// V1

void manipulating(void)
{

	printf("*** start of Concatenating Strings Demo ***\n");

	// Declare variables to store the input strings
	char string1[BUFFER_SIZE];

	char string2[BUFFER_SIZE];

	// Main loop for concatenating strings until the user enters 'q'
	do {

		printf("Type the 1st string (q to quit):\n");

		// Read the first string input from the user and remove the trailing newline character
		fgets(string1, BUFFER_SIZE, stdin);
		string1[strlen(string1) - 1] = '\0';

		// Check if the user wants to quit (input is 'q')
		if ((strcmp(string1, "q") != 0)) {
			printf("Type the 2nd string:\n");

			// Read the second string input from the user and remove the trailing newline character
			fgets(string2, BUFFER_SIZE, stdin);
			string2[strlen(string2) - 1] = '\0';


			// Concatenate the first and second strings
			strcat(string1, string2);

			printf("Concatenated string is \'%s\'\n", string1);
		}
	} while (strcmp(string1, "q") != 0);  // End of the main loop

	printf("*** End of Concatenating Strings Demo ***\n\n");
}


/* Version 2 */
>> insert here


/* Version 3 */
>> insert here


}
