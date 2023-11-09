/**
 * @file pointer_functions.h
 * @author Vim
 * @brief Header file for the Pointer Functions sample in order
 * 		to give an example of how pointers work in C.
 * 
 */

// This prevents an error from occuring if the same header file is
// included in the same c file multiple times.
// It may seem improbable, but header files can include other header files
// and can cause this issue.
// There's another way to guard against this, but I'm doing this one here.
#pragma once

/**
 * @brief Adds two integers together and returns the result.
 * 
 * @param a 
 * @param b 
 * @return int 
 */
int Add_No_P(int a, int b);

/**
 * @brief Adds two integers together and saves the result in `result`.
 * 
 * @param result [Output]
 * @param a 
 * @param b 
 */
void Add_Res_P(int* result, int a, int b);

/**
 * @brief Adds two iintegers together, every single argument is a pointer.
 * 
 * @param result [Output]
 * @param a 
 * @param b 
 */
void Add_All_P(int* result, int* a, int* b);

/**
 * @brief Same as `Add_All_P` except it shows the reason that `const` pointers exist.
 * 		This is bad because it CHANGES A AND B! In `Add_All_GOOD`, you can see that
 * 		const pointers can prevent functions from changing the data.
 * 
 * @param result [Output]
 * @param a Not supposed to be an output, but because the function was written "wrong", it is.
 * @param b Not supposed to be an output, but because the function was written "wrong", it is.
 */
void Add_All_BAD(int* result, int* a, int* b);

/**
 * @brief Similar to `Add_All_BAD` and `Add_All_P`, however this time, I mark the
 * 		variables 'a', 'b' as constant, so I can't change the data that they are pointing to.
 * 
 * @param result [Output]
 * @param a Not an output, and can't because it's const.
 * @param b Not an output, and can't because it's const.
 */
void Add_All_GOOD(int* result, const int* a, const int* b);
