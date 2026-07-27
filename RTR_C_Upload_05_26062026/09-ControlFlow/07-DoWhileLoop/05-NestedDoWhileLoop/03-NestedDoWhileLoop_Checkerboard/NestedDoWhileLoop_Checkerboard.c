// Program Name : NestedDoWhileLoop_Checkerboard.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int counter1, counter2, c;

	// Code
	printf("\n=========================================================\n");

	counter1 = 0;
	do
	{
		counter2 = 0;
		do
		{
			c = ((counter1 & 0x8) == 0) ^ ((counter2 & 0x8) == 0);

			if (c == 0)
				printf("  ");

			if (c == 1)
				printf("* ");

			counter2++;
		} while (counter2 < 64);
		printf("\n\n");
		counter1++;
	} while (counter1 < 64);

	return (0);
}
