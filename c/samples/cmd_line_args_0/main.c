/**
 * @file main.c
 * @author Vim
 * @brief A simple example of printing integers in C.
 * @version 0.1
 */

#include <stdio.h>

/**
 * @brief The function "main" is a reserved function in C.
 * 		This function will always be the first function called in a program,
 * 		it is the starting point.
 * 
 * @return int 
 */

/**
 * @brief This main function takes in two parameters. The first one is the amount
 * 		of arguments passed in, and the second one... I've rewritten this line many times,
 * 		check README.md to understand these parameters.
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char** argv) {
	// Check the arg count, and make sure at least one user argument
	// was passed in. I don't need to do this here, however it teaches you
	// that you can, and should, check the amount of arguments that are
	// passed in when writing funcitons.
	if (argc < 2) {
		// fprintf is like printf but not.
		fprintf(stderr, "[Error] No user arguments passed in.\n");
		return -1;
	}

	// Print out all of the arguments
	for (int i = 0; i < argc; i++) {
		printf("%s\n", argv[i]);
	}

	// All good! Return 0.
	return 0;
}