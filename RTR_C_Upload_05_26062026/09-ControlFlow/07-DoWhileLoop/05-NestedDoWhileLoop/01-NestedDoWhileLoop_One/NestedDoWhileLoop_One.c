// Program Name : NestedDoWhileLoop_One.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int counter1, counter2;

	// Code
	printf("\n====================================================================\n");

	counter1 = 1;
	do
	{
		printf("counter1 = %d\n", counter1);
		printf("---------------------\n\n");

		counter2 = 1;
		do
		{
			printf("counter2 = %d\n", counter2);
			counter2++;
		} while (counter2 <= 5);
		counter1++;
		printf("\n====================================================================\n");
	} while (counter1 <= 10);

	return (0);
}
