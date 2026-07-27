// Program Name : SingleIterationVariable.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int counter;

	// Code
	printf("\n============================================================================\n");

	printf("Printing Digits 1 to 10 : \n\n");

	counter = 1;
	while (counter <= 10)
	{
		printf("\t%d\n", counter);
		counter++;
	}
	printf("\n============================================================================\n");

	return (0);
}
