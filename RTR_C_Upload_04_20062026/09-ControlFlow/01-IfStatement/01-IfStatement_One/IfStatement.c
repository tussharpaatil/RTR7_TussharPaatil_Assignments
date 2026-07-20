// Program Name: IfStatement.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int x, y, m;

	// Code
	x = 15;
	y = 33;
	m = 33;

	printf("\n===============================================================\n");

	if (x < y)
	{
		printf("X Is Less Than Y !!!\n\n");
	}

	if (y != m)
	{
		printf("Y Is NOT Equal to M !!!\n\n");
	}

	printf("Both Comparisons Have Been Done !!!\n\n");

	return (0);
}