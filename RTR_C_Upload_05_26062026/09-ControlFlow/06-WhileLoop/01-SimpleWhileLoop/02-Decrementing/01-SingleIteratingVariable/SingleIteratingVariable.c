// Program Name : SingleIteratingVariable.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int counter;

	// Code
	printf("\n================================================================\n");

	printf("Printing Digits 10 to 1 : \n\n");

	counter = 10;
	while (counter >= 1)
	{
		printf("\t%d\n", counter);
		counter--;
	}

	printf("\n================================================================\n");

	return (0);
}
