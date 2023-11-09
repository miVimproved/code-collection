/**
 * @file pointer_functions.c
 * @author Vim
 * @brief Implementation for the Pointer Functions header file in order
 * 		to show how pointers work in C.
 * 
 */


int Add_No_P(int a, int b) {
	int result = a + b;
	return result;
}

void Add_Res_P(int* result, int a, int b) {
	*result = a + b;
}

void Add_All_P(int* result, int* a, int* b) {
	*result = *a + *b;
}

void Add_All_BAD(int* result, int* a, int* b) {
	*a = 1;
	*b = 2;
	*result = *a + *b;
}

// Because I don't want to change a or b in this function, I mark them as const.
void Add_All_GOOD(int* result, const int* a, const int* b) {
	*result = *a + *b;
}
