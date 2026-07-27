// Program Name : NestedLoop_Continue.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int counter1, counter2;

	// Code
	printf("\n============================================================================\n");

	printf("Outer Loop Prints Odd Numbers Between 1 And 10. \n\n");
	printf("Inner Loop Prints Even Numbers Between 1 And 10 For Every Odd Number Printed By Outer Loop. \n\n");

	// Condition For A Number To Be Even Number -> Division Of Number By 2 Leaves No Remainder ( remainder = 0 )
	// Condition For A Number To Be Odd Number -> Division Of Number By 2 Leaves remainder ( remainder = 1 (usually))

	for (counter1 = 1; counter1 <= 10; counter1++)
	{
		if (counter1 % 2 != 0)		// If Number (counter) Is Odd
		{
			printf("counter1 = %d\n", counter1);
			printf("------------------\n");
			for (counter2 = 1; counter2 <= 10; counter2++)
			{
				if (counter2 % 2 == 0)		// If Number (counter2) Is Even
				{
					printf("\tcounter2 = %d\n", counter2);
				}
				else
				{
					continue;
				}
			}
			printf("\n============================================================================\n");
		}
		else  // If Number (counter1) Is Even.....
		{
			continue;
		}
	}
	printf("\n============================================================================\n");

	return (0);
}
