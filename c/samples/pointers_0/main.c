/**
 * @file main.c
 * @author Vim
 * @brief A simple example of printing integers in C.
 * @version 0.1
 */

#include <stdio.h> /* printf */
#include "pointer_functions.h" /* Add_XXX_XXX functions that I wrote for this sample */

/**
 * @brief Helper function to set the given pointer to 0.
 * 		It can take in any integer pointer, but is used by
 * 		main to set `result` to 0.
 * 
 * 		This function is designed to do exactly one thing,
 * 		which is usually not what most functions get designed
 * 		for. I just wanted to show you that you *can* make
 * 		functions for very very very specific purposes.
 * 		(And I didn't want to keep rewriting the same three lines
 * 		over and over again).
 * 
 * 		The reason it is a `static` function is because I want
 * 		the compiler to know that only in this file do I ever
 * 		want to be able to refer to this function. If you don't
 * 		understand why, for now you don't need to.
 * 
 * @param res 
 */
static void SetResZero(int* res) {
	// Sets the result variable to 0
	*res = 0;
	printf("\nResult has been set to %i.\n", *res);
}

/**
 * @brief Main function to call pointer functions.
 * 
 * @return int 
 */
int main(void) {

	int result, a = 4, b = 6;

	printf("'a' is equal to %i.\n'b' is equal to %i.\n\n", a, b);

	// Using function add, without any pointers.
	result = Add_No_P(a, b);
	printf("Using no pointers, a + b = %i!\n", result);
	printf("Using no pointers (again), a + b = %i!\n", Add_No_P(a, b));

	// Resets the result variable.
	// I'm not adding this comment to these for the rest of the program.
	SetResZero(&result);

	// Using function add, with result being a pointer.
	// I don't want this changed for the rest of the program, so I'm making it const.
	int* const pointer_to_result = &result;
	// Please ignore the cast to (void*), I don't want to explain that rn.
	printf("Created a pointer to result, and that pointer is pointing to: %p\n", (void*)pointer_to_result);
	
	// Using function add, which has result as a pointer.
	Add_Res_P(pointer_to_result, a, b);
	printf("Using Result Pointer, a + b = %i!\n", result);

	// I could use either `pointer_to_result` *or* this.
	// Either way, it would do the same thing.
	SetResZero(&result);

	// Using function add, with all being pointers.
	Add_All_P(pointer_to_result, &a, &b);
	printf("Using all pointers, a + b = %i.\n", result);

	SetResZero(&result);

	// Using *BAD* addition.
	Add_All_BAD(pointer_to_result, &a, &b);
	printf("Using The BAD function, a + b = %i.\n", result);
	printf("The bad function also made 'a' equal to %i, and 'b' equal to %i.\n", a, b);

	SetResZero(&result);
	a = 4; b = 6; // This can be done in one line because C seperates statements by semicolons.
	printf("I've set 'a' back to %i, and 'b' back to %i.\n\n", a, b);

	// Using good addition (that uses pointers)
	Add_All_GOOD(pointer_to_result, &a, &b);
	printf("Using The GOOD function, a + b = %i.\n", result);
	printf("The GOOD function didn't change 'a' or 'b', so 'a' is equal to %i, and 'b' is equal to %i.\n", a, b);


	// We're done. End the program.
	return 0;
}
