// Program Name : NestedWhileLoop_One.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int counter1, counter2;

	// Code
	printf("\n==========================================================================\n");

	counter1 = 1;
	while (counter1 <= 10)
	{
		printf("counter1 = %d\n", counter1);
		printf("-------------\n\n");

		counter2 = 1;
		while (counter2 <= 5)
		{
			printf("\tcounter2 = %d\n", counter2);
			counter2++;
		}
		counter1++;
	}
	printf("\n==========================================================================\n");

	return (0);
}
