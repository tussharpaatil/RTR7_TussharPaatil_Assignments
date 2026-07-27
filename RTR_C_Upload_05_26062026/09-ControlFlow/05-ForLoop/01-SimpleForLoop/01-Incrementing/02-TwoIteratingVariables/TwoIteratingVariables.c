// Program name : TwoIteratingVariables.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int counter1, counter2;

	// Code
	printf("\n=====================================================================\n");

	printf("Printing Digits 1 to 10 and 10 to 100 : \n\n");

	for (counter1 = 1, counter2 = 10; counter1 <= 10, counter2 <= 100; counter1++, counter2 = counter2 + 10)
	{
		printf("\t %d \t %d\n", counter1, counter2);
	}
	printf("\n=====================================================================\n");

	return (0);
}
