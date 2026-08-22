// Program Name : ColumnMemoryAllocation_Two.c

#include <stdio.h>
#include <stdlib.h>

#define NUMBER_OF_ROWS 5
#define NUMBER_OF_COLUMNS_ONE 3
#define NUMBER_OF_COLUMNS_TWO 8

int main(void)
{
	// Variable Declarations
	int* integerArray[NUMBER_OF_ROWS]; // A 2D Array which will have 5 rows and number of columns can be decided later on....
	int x, y;

	// Code

	// *** One (Allocating Memory For An Array Of 3 Integers Per Row) ***
	printf("\n=================================================================================================\n");
	printf("******* First Memory Allocation To 2D Integer Array ******\n\n");
	for (x = 0; x < NUMBER_OF_ROWS; x++)
	{
		integerArray[x] = (int*)malloc(NUMBER_OF_COLUMNS_ONE * sizeof(int));
		if (integerArray[x] == NULL)
		{
			printf("Failed To Allocate Memory To Row %d Of 2D Integer Array !!! Exitting Now ..\n\n", x);
			exit(0);
		}
		else
			printf("Memory Allocation To Row %d Of 2D Integer Array Succeeded !!!\n\n", x);
	}

	// Assigning Values To 2D Array....
	for (x = 0; x < NUMBER_OF_ROWS; x++)
	{
		for (y = 0; y < NUMBER_OF_COLUMNS_ONE; y++)
		{
			integerArray[x][y] = (x + 1) * (y + 1);
		}
	}

	// Displaying 2D Array ....
	printf("\n=================================================================================================\n");
	printf("Displaying 2D Array : \n\n");
	for (x = 0; x < NUMBER_OF_ROWS; x++)
	{
		for (y = 0; y < NUMBER_OF_COLUMNS_ONE; y++)
		{
			printf("integerArray[%d][%d] = %d\n", x, y, integerArray[x][y]);
		}
		printf("\n=====================================================================================================\n");
	}
	printf("\n=================================================================================================\n");

	// Freeing Memory Assigned To 2D Array (Must Be Done In Reverse Order)
	for (x = (NUMBER_OF_ROWS - 1); x >= 0; x--)
	{
		free(integerArray[x]);
		integerArray[x] = NULL;
		printf("Memory Allocated To Row %d Of 2D Integer Array Has Been Successfuly Freed !!!\n\n", x);
	}

	// **** Two (Allocating Memory For An Array Of 8 Integers Per Row ***
	printf("\n==================================================================================================\n");
	printf("**** Second Memory Allocation To 2D Integer Array *** \n\n");
	for (x = 0; x < NUMBER_OF_ROWS; x++)
	{
		integerArray[x] = (int*)malloc(NUMBER_OF_COLUMNS_TWO * sizeof(int));
		if (integerArray[x] == NULL)
		{
			printf("Failed To Allocate Memory To Row %d Of 2D Integer Array !!! Exitting Now \n\n", x);
			exit(0);
		}
		else
			printf("Memory Allocation To Row %d Of 2D Integer Array Succeeded !!!\n\n", x);
	}

	// Assigning Values To 2D Array...
	for (x = 0; x < NUMBER_OF_ROWS; x++)
	{
		for (y = 0; y < NUMBER_OF_COLUMNS_TWO; y++)
		{
			integerArray[x][y] = (x + 1) * (y + 1);
		}
	}

	// Displaying 2D Array....
	printf("\n====================================================================================================\n");
	for (x = 0; x < NUMBER_OF_ROWS; x++)
	{
		for (y = 0; y < NUMBER_OF_COLUMNS_TWO; y++)
		{
			printf("integerArray[%d][%d] = %d\n", x, y, integerArray[x][y]);
		}
		printf("\n========================================================================================================\n");
	}
	printf("\n====================================================================================================\n");

	// Freeing Memory Assigned To 2D Array (Must Be Done In Reverse Order)
	for (x = (NUMBER_OF_ROWS - 1); x >= 0; x--)
	{
		free(integerArray[x]);
		integerArray[x] = NULL;
		printf("Memory Allocated To Row %d Of 2D Integer Array Has Been Successfully Freed !!!\n\n", x);
	}

	return (0);
}
