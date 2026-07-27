// Program Name : FloatingPointVariableIteration.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	float fractional;
	float fractional_number = 2.4f;

	// Code
	printf("\n===================================================================\n");

	printf("Printing Numbers %f to %f : \n\n", fractional_number, (fractional_number * 20.0f));

	for (fractional = fractional_number; fractional <= (fractional_number * 20.0f); fractional = fractional + fractional_number)
	{
		printf("\t %f \n", fractional);
	}
	printf("\n===================================================================\n");

	return (0);
}
