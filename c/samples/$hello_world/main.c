/**
 * @file main.c
 * @author Vim
 * @brief A simple "Hello, World!" program in C.
 * @version 0.1
 */

/**
 * I am using the standard library function "printf" in this code.
 * Because of that, I need to include the header file that can tell
 * the compiler how I am allowed to use that function. "stdio.h" is a
 * header file that includes "printf".
 **/
#include <stdio.h>

/**
 * @brief The function "main" is a reserved function in C.
 * 		This function will always be the first function called in a program,
 * 		it is the starting point.
 * 
 * @return int 
 */
int main(void) {
	// Calls the function "printf", which prints something to the console.
	// I am passing in one argument, the string "Hello, World".
	// The '\n' at the end is a newline, so that the next thing printed to the console is
	// on a seperate line.
	printf("Hello, World!\n");

	// Beacause function "main" returns an integer, we must say what integer it returns.
	// When a program exits naturally with no errors, it is customary to return the integer 0.
	return 0;
}