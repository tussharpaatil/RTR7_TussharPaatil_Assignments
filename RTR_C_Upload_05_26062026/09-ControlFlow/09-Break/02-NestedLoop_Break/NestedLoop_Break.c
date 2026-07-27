// Program Name : NestedLoop_Break.c

#include <stdio.h>
#include <conio.h>

int main(void)
{
	// Variable Declarations
	int counter1, counter2;

	// Code
	printf("\n============================================================================\n");

	for (counter1 = 1; counter1 <= 24; counter1++)
	{
		for (counter2 = 1; counter2 <= 24; counter2++)
		{
			if (counter2 > counter1)
			{
				break;
			}
			else
			{
				printf("* ");
			}
		}
		printf("\n");
	}
	printf("\n============================================================================\n");

	return (0);
}