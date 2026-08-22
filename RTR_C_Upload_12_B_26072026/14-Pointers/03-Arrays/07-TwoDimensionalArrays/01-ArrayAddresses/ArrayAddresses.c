// Program Name : ArrayAddresses.c

#include <stdio.h>
#include <stdlib.h>

#define NUMBER_OF_ROWS 5
#define NUMBER_OF_COLUMNS 3

int main(void)
{
	// Variable Declarations
	int integerArray[NUMBER_OF_ROWS][NUMBER_OF_COLUMNS];
	int counter1, counter2;

	// Code
	for (counter1 = 0; counter1 < NUMBER_OF_ROWS; counter1++)
	{
		for (counter2 = 0; counter2 < NUMBER_OF_COLUMNS; counter2++)
			integerArray[counter1][counter2] = (counter1 + 1) * (counter2 + 1);
	}

	printf("\n========================================================================\n");
	printf("2D Integer Array Elements Along With Addresses : \n\n");
	for (counter1 = 0; counter1 < NUMBER_OF_ROWS; counter1++)
	{
		for (counter2 = 0; counter2 < NUMBER_OF_COLUMNS; counter2++)
		{
			printf("integerArray[%d][%d] = %d     At Address : %p\n", counter1, counter2, integerArray[counter1][counter2], &integerArray[counter1][counter2]);
		}
		printf("\n===========================================================================\n");
	}

	return (0);
}
