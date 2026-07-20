// Program Name: TernaryOperator.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int x, y;
	int m, n;

	char char_result_01, char_result_02;
	int int_result_01, int_result_02;

	// Code
	printf("\n============================================================\n");

	x = 24;
	y = 6;
	char_result_01 = (x > y) ? 'X' : 'Y';
	int_result_01 = (x > y) ? x : y;
	printf("Ternary Operator Answer 1 ---- %c and %d.\n\n", char_result_01, int_result_01);

	m = 42;
	n = 42;
	char_result_02 = (m != n) ? 'M' : 'N';
	int_result_02 = (m != n) ? m : n;
	printf("Ternary Operator Answer 2 ---- %c and %d.\n\n", char_result_02, int_result_02);

	printf("\n============================================================\n");
	return (0);
}

