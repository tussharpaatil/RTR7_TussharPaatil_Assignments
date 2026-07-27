// Program Name : TwoIteratingVariables.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int counter1, counter2;

	// Code
	printf("\n=============================================================\n");

	printf("Priting Digits 1 to 10 and 10 to 100 : \n\n");

	counter1 = 1;
	counter2 = 10;

	do
	{
		printf("\t %d \t %d \n", counter1, counter2);
		counter1++;
		counter2 += 10;
	} while (counter1 <= 10, counter2 <= 100);

	printf("\n=============================================================\n");

	return (0);
}
