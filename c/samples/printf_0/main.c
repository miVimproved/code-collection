/**
 * @file main.c
 * @author Vim
 * @brief A simple example of printing integers in C.
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
	// Telling printf to print out an integer. The way that I'm doing that is by using
	// format strings. When function printf gets to a part that has "%i", it knows
	// That the user wants to print an integer out. In the second argument, the
	// integer that I am giving to printf is '4', so it should print out the number 4.
	printf("%i", 4);

	// Printing out a newline. I am doing this in a seprate printf because I don't
	// want to confuse anyone with "%i\n".
	printf("\n");

	// Telling printf to print out *two* integers. The order that you give the
	// integers in is the order that they will be printed out.
	printf("%i, %i", 4, 5);

	// Printing another newline.
	printf("\n");

	// You can also print out text as well with variables. Note that the places where
	// you can see the "%i" are the places that the integers 27, and 18 will be printed out.
	printf("I like the numbers %i, and %i a lot! They are amazing!\n", 27, 18);



	// Beacause function "main" returns an integer, we must say what integer it returns.
	// When a program exits naturally with no errors, it is customary to return the integer 0.
	return 0;
}