// Program Name : SimpleLoop_Continue.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int counter;

	// Code
	printf("\n============================================================================\n");

	printf("Printing Even Numbers From 0 to 100 : \n\n");

	for (counter = 0; counter <= 100; counter++)
	{
		// Condition For a Number To Be Even Number -> Division Of Number By 2 Leaves No Remainder (remainder = 0)
		// If Remainder Is Not 0, The Number Is Odd Number...

		if (counter % 2 != 0)
		{
			continue;
		}
		else
		{
			printf("\t%d\n", counter);
		}
	}
	printf("\n============================================================================\n");

	return (0);
}
