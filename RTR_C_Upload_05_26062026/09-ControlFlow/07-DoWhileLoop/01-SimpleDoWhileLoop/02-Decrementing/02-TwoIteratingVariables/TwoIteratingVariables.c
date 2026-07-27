// Program Name : TwoIteratingVariables.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int counter1, counter2;

	// Code
	printf("\n=============================================================\n");

	printf("Priting Digits 10 to 1 and 100 and 10 : \n\n");

	counter1 = 10;
	counter2 = 100;

	do
	{
		printf("\t %d \t %d\n", counter1, counter2);
		counter1--;
		counter2 -= 10;
	} while (counter1 >= 1, counter2 >= 10);

	printf("\n=============================================================\n");

	return (0);
}
