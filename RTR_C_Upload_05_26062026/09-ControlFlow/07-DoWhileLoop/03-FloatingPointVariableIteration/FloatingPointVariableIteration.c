// Program Name : FloatingPointVariableIteration.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	float fractional;
	float fractional_number = 2.4f;	// Changed Value For Different Output

	// Code
	printf("\n====================================================================\n");

	printf("Printinf Numbers %f to %f : \n\n", fractional_number, (fractional_number * 10.0f));

	fractional = fractional_number;
	do
	{
		printf("\t%f\n", fractional);
		fractional = fractional + fractional_number;
	} while (fractional <= (fractional_number * 10.0f));

	printf("\n====================================================================\n");

	return (0);
}
