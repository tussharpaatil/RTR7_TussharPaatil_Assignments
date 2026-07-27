// Program Name : NestedWhileLoop_Two.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int counter1, counter2, counter3;

	// Code
	printf("\n===================================================================\n");
	
	counter1 = 1;
	while (counter1 <= 10)
	{
		printf("counter1 = %d\n", counter1);
		printf("----------------------\n\n");

		counter2 = 1;
		while (counter2 <= 5)
		{
			printf("\tcounter2 = %d\n", counter2);
			printf("\t----------------------\n\n");

			counter3 = 1;
			while (counter3 <= 3)
			{
				printf("\t\tcounter3 = %d\n", counter3);
				counter3++;
			}
			printf("\n===================================================================\n");
			counter2++;
		}
		printf("\n===================================================================\n");
		counter1++;
	}
	return (0);
}
