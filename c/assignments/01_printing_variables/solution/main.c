/**
 * @file main.c
 * @author Vim
 * @brief A simple "Hello, World!" program in C.
 *        This is copied almost directly from the samples folder.
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
int main(void) {
	int iDogs = 6; // Change this line.

	// DO NOT CHANGE THIS LINE vvv.
	printf("I have %d dogs.\n", iDogs);
	// DO NOT CHANGE THIS LINE ^^^.


	int iCookies = 17;
	printf("I have %d cookies.\n", iCookies);

	float fDinosaurs = 10.5f;
	printf("I want %f dinosaurs!\n", fDinosaurs);

	return 0;
}
