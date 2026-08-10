// Program Name : Converting2DArrayTo1DArray.c

#include <stdio.h>

#define ROWS_NUMBER 5
#define COLUMNS_NUMBER 3

int main(void)
{
	// Variable Declarations
	int integerArray_2D[ROWS_NUMBER][COLUMNS_NUMBER]; // Total Number Of Elements = ROWS_NUMBER * COLUMNS_NUMBER
	int integerArray_1D[ROWS_NUMBER * COLUMNS_NUMBER];

	int counter1, counter2;
	int number;

	// Code
	printf("Enter Elements Of You Choice To Fill Up The Integer 2D Array : \n\n");

	for (counter1 = 0; counter1 < ROWS_NUMBER; counter1++)
	{
		printf("For ROW NUMBER %d : \n", (counter1 + 1));
		for (counter2 = 0; counter2 < COLUMNS_NUMBER; counter2++)
		{
			printf("Enter Element Number %d : \n", (counter2 + 1));
			scanf("%d", &number);
			integerArray_2D[counter1][counter2] = number;
		}
		printf("\n========================================\n");
	}

	// *** Display Of 2D Array ***
	printf("\n========================================\n");
	printf("Two-Dimensional (2D) Arrays Of Integers : \n\n");
	for (counter1 = 0; counter1 < ROWS_NUMBER; counter1++)
	{
		printf("********* ROW %d **********\n", (counter1 + 1));
		for (counter2 = 0; counter2 < COLUMNS_NUMBER; counter2++)
		{
			printf("integerArray_2D[%d][%d] = %d\n", counter1, counter2, integerArray_2D[counter1][counter2]);
		}
		printf("\n========================================\n");
	}
	// **** Converting 2D Integer Array To 1D Integer Array ****
	for (counter1 = 0; counter1 < ROWS_NUMBER; counter1++)
	{
		for (counter2 = 0; counter2 < COLUMNS_NUMBER; counter2++)
		{
			integerArray_1D[(counter1 * COLUMNS_NUMBER) + counter2] = integerArray_2D[counter1][counter2];
		}
	}

	// **** Printing 1D Array *****
	printf("\n========================================\n");
	printf("One-Dimensional (1D) Array Of Integers : \n\n");
	for (counter1 = 0; counter1 < (ROWS_NUMBER * COLUMNS_NUMBER); counter1++)
	{
		printf("integerArray_1D[%d] = %d\n", counter1, integerArray_1D[counter1]);
	}
	printf("\n========================================\n");

	return (0);
}
