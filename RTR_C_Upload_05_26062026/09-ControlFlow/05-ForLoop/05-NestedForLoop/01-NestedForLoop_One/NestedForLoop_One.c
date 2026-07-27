// Program Name : NestedForLoop_One.c
#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int counter1, counter2;

	// Code
	printf("\n==============================================================================\n");

	for (counter1 = 1; counter1 <= 10; counter1++)
	{
		printf("counter1 = %d\n", counter1);
		printf("--------------------------\n\n");
		for (counter2 = 1; counter2 <= 5; counter2++)
		{
			printf("\tcounter2 = %d\n", counter2);
		}
		printf("\n==============================================================================\n");
	}
	return (0);
}
