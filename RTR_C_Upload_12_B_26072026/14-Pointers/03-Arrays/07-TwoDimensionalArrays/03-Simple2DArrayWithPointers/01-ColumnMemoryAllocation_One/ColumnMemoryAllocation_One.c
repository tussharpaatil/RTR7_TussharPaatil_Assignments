// Program Name : ColumnMemoryAllocation_One.c

#include <stdio.h>
#include <stdlib.h>

#define NUMBER_OF_ROWS 5
#define NUMBER_OF_COLUMNS 3

int main(void)
{
	// Variable Declarations
	int *integerArray[NUMBER_OF_ROWS];
	int x, y;

	// Code
	printf("\n===============================================================================\n");
	for (x = 0; x < NUMBER_OF_ROWS; x++)
	{
		integerArray[x] = (int*)malloc(NUMBER_OF_COLUMNS * sizeof(int));
		if (integerArray[x] == NULL)
		{
			printf("Failed To Allocate Memory To Row %d Of 2D Integer Array !!! Exitting Now ...\n\n", x);
			exit(0);
		}
		else
			printf("Memory Allocation To Row %d Of 2D Integer Array Secceeded !!\n\n", x);
	}

	// Assigning Values To 2S Array
	for (x = 0; x < NUMBER_OF_ROWS; x++)
	{
		for (y = 0; y < NUMBER_OF_COLUMNS; y++)
		{
			integerArray[x][y] = (x + 1) * (y + 1);
		}
	}
	
	// Displaying 2D Array...
	printf("\n===============================================================================\n");
	printf("Displaying 2D Array : \n\n");
	for (x = 0; x < NUMBER_OF_ROWS; x++)
	{
		for (y = 0; y < NUMBER_OF_COLUMNS; y++)
		{
			printf("integerArray[%d][%d] = %d\n", x, y, integerArray[x][y]);
		}
		printf("\n===================================================================================\n");
	}
	printf("\n==============================================================================\n");

	// Freeing Memory Assigned To 2D Array (Must Be Done In Reverse Order)
	for (x = (NUMBER_OF_ROWS - 1); x >= 0; x--)
	{
		free(integerArray[x]);
		integerArray[x] = NULL;
		printf("Memory Allocated To Row %d Of 2D Integer Array Has Been Successfully Freed !!!\n\n", x);
	}

	return (0);
}
