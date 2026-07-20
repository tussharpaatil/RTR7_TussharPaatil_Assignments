// Program Name: IfStatement.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int x;
	
	// Code
	printf("=====================================================\n");

	x = 6;
	if (x)	// Non-zero Positive Value
	{
		printf("i-block 1 : 'X' Exists And Has Value = %d !!!\n\n", x);
	}

	x = -8;
	if (x)	// Non-zero Negative Value
	{
		printf("if-block 2 : 'X' Exists And Has Value = %d !!!\n\n", x);
	}

	x = 0;
	if (x)	// Zero Value
	{
		printf("if-block 3 : 'X' Exists And Has Value = %d !!!\n\n", x);
	}

	printf("All Three if-statements Are Done !!!\n\n");

	return (0);
}
