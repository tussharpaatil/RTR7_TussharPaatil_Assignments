// Program Name : NestedForLoop_Checkerboard.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int counter1, counter2, c;

	// Code
	printf("\n\n");
	for (counter1 = 0; counter1 < 64; counter1++)
	{
		for (counter2 = 0; counter2 < 64; counter2++)
		{
			c = ((counter1 & 0x8) == 0) ^ ((counter2 & 0x8) == 0);

			if (c == 0)
				printf("  ");

			if (c == 1)
				printf("* ");
		}
		printf("\n\n");
	}
	return (0);
}
