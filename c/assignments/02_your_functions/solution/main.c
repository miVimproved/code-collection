/**
 * @file main.c
 * @author Vim
 * @brief DO NOT CHANGE THIS FILE.
 * @version 0.1
 */

#include <stdio.h>

int Add(int a, int b);
int Subtract(int a, int b);
int Multiply(int a, int b);
int Divide(int a, int b);

/**
 * @brief Do not change anything in this function.
 * 
 * @return int 
 */
int main(void) {
	// Set 0.
	printf("1 + 1 = %d\n", Add(1, 1));
	printf("1 - 1 = %d\n", Subtract(1, 1));
	printf("1 * 1 = %d\n", Multiply(1, 1));
	printf("1 / 1 = %d\n", Divide(1, 1));

	// Set 1.
	printf("2 + 5 = %d\n", Add(2, 5));
	printf("2 - 5 = %d\n", Subtract(2, 5));
	printf("2 * 5 = %d\n", Multiply(2, 5));
	printf("2 / 5 = %d\n", Divide(2, 5));

	// Set 2.
	printf("12 + 72 = %d\n", Add(12, 72));
	printf("12 - 72 = %d\n", Subtract(12, 72));
	printf("12 * 72 = %d\n", Multiply(12, 72));
	printf("12 / 72 = %d\n", Divide(12, 72));

	// Set 3.
	printf("7355608 + 123456789 = %d\n", Add(7355608, 123456789));
	printf("7355608 - 123456789 = %d\n", Subtract(7355608, 123456789));
	printf("7355608 * 123456789 = %d\n", Multiply(7355608, 123456789));
	printf("7355608 / 123456789 = %d\n", Divide(7355608, 123456789));

	return 0;
}
