// Prorgam Name : TwoIteratingVariables.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int counter1, counter2;

	// Code
	printf("\n==================================================================\n");

	printf("Printing Digits 10 to 1 and 100 to 10 : \n\n");

	for (counter1 = 10, counter2 = 100; counter1 >= 1, counter2 >= 10; counter1--, counter2 -= 10)
	{
		printf("\t %d \t %d\n", counter1, counter2);
	}

	printf("\n==================================================================\n");

	return (0);
}
