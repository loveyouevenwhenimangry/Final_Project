#define _CRT_SECURE_NO_WARNINGS //Disable security warnings for Visual Studio 
#define BUFFER_SIZE 80 // Define a constant for the maximum length of input strings.
#define NUM_INPUTS_SIZE 10 // Define a constant for the maximum length of numeric input strings.
#include "fundamentals.h" // Include the "fundamentals.h" header file

/* Version 1 */
void fundamentals(void) {
	printf("*** Start of Indexing Strings Demo ***\n"); // Print the start of the program

	char buffer1[BUFFER_SIZE]; // Declare a character array to hold string input
	char numInput[NUM_INPUTS_SIZE];  // Declare a character array to hold numeric input
	size_t position; // Declare a variable 'position' to store the user-provided position within the string

	do {
		printf("Type not empty string (q - to quit):\n"); // Prompt the user to enter a string or 'q' to quit
		fgets(buffer1, BUFFER_SIZE, stdin); // Read a string from the user of input
		buffer1[strlen(buffer1) - 1] = '\0'; // Remove the newline character from the string input by replacing it with the null '\0'.

		if (strcmp(buffer1, "q") != 0) { // Check if the user input is not 'q'
			printf("Type the character position within the string:\n"); // Prompt the user to enter a position within the string
			fgets(numInput, NUM_INPUTS_SIZE, stdin); // Read a numeric input from the user
			numInput[strlen(numInput) - 1] = '\0'; // Remove the newline character from the "numInput" input

			position = atoi(numInput); // Convert the numeric input to an integer and store it in the 'position' variable

			if (position >= strlen(buffer1)) { // Check if the position is greater than or equal to the length of the string
				position = strlen(buffer1) - 1; // If the position is out of bounds, set it to the last valid position
				printf("Too big... Position reduce to max. available\n"); // Inform the user that the position is out of bounds
			}
			printf("The character found at %d position is \'%c\'\n", position, buffer1[position]); // Print the character at the specified position
		}
	} while (strcmp(buffer1, "q") != 0); // Continue the loop until the user enters 'q' to quit

	printf("*** End of Indexing Strings Demo ***\n"); // Print the end of the program

}

/* Version 2 */
void fundamentalsV2(void){
	printf("*** Start of Measuring Strings Demo ***\n"); // Print the start of the program
	char buffer2[BUFFER_SIZE]; // Declare a character array to hold a string input
	do {
		printf("Type a string (q - to quit): \n"); // Prompt the user to enter a string, or 'q' to quit the loop
		fgets(buffer2, BUFFER_SIZE, stdin); // Read a string from the user 
		buffer2[strlen(buffer2) - 1] = '\0'; // Remove the newline character from the input string 

		if(strcmp(buffer2, "q") != 0){ // Check if the user input is not "q"
			printf("The length of \'%s\' is %d character\n", buffer2, (int)strlen(buffer2)); 
		}
	} while (strcmp(buffer2, "q") != 0); // Continue the loop until the user enters 'q' to quit

	printf("*** End of Measuring Strings Demo ***\n\n"); // Print the end of the program
}

/* Version 3 */
void fundamentalsV3(void){
    printf("*** Start of Copying Strings Demo ***\n"); // Print the start of the program
    char destination[BUFFER_SIZE]; // Declare a character array 'destination' to hold the string input
    char source[BUFFER_SIZE]; // Declare a character array 'source' to hold the input string to be copied
    do{
        destination[0] = '\0'; // Reset the destination string to empty
        printf("Destination string is reset to empty\n"); // Inform the user that the destination string has been reset
        printf("Type the source string (q - to quit): \n"); // Prompt the user to enter a source string, or 'q' to quit
        fgets(source, BUFFER_SIZE, stdin); // Read the string from the user
        source[strlen(source) - 1] = '\0'; // Remove the newline character from the source string

        if(strcmp(source, "q") != 0){ // If the input is not "q", copy the source string to the destination
            strcpy(destination, source); // Copy the source string into the destination array
            printf("New destination string is \'%s\'\n", destination); // Print the destination string after the copy.
        }
    } while (strcmp(source, "q") != 0); // Continue the loop until the user enters 'q' to quit
    
    printf("*** End of Copying Strings Demo ***\n\n"); // Print the end of the program
}