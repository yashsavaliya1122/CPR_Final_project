#define _CRT_SECURE_N0_WARNINGS
#define BUFFER_SIZE 80
#include "converting.h"

void converting() {

/* Version 1 */	
    char int_string[80]; // Declare a character array 'int_string' of size 80.
    int int_number; // Declare an integer 'int_number'.

    printf("*** Start of Converting Strings to int Demo ***\n"); // Print the start message of the demo.

    // Start of the do-while loop.
    do {
        printf("Type the int numeric string (q - to quit): \n"); // Ask the user to input a numeric string.
        fgets(int_string, BUFFER_SIZE, stdin); // Read the user input from the standard input and store it in 'int_string'.

        int_string[strlen(int_string)] = '\0'; // Add a null character at the end of the input string.

        // If the input string is not "q", convert it to an integer and print it.
        if (strcmp(int_string, "q") != 0) {
            int_number = atoi(int_string); // Convert the input string to an integer.
            printf("Converted number is %d\n", int_number); // Print the converted number.
        }

        // The loop continues until the input string is "q".
    } while (strcmp(int_string, "q") != 0);

    printf("*** End of Converting Strings to int Demo ***\n"); // Print the end message of the demo.

/* Version 2 */
		
/* Version 3 */
		
}