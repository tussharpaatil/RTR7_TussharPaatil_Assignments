// Program Name : SingleIteratingVariable.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int counter;

	// Code
	printf("\n=============================================================\n");

	printf("Priting Digits 1 to 10 : \n\n");

	counter = 1;
	do
	{
		printf("\t%d\n", counter);
		counter++;
	} while (counter <= 10);
	printf("\n=============================================================\n");

	return (0);
}
