// Program Name : ColumnMemoryAllocation_Three.c

#include <stdio.h>
#include <stdlib.h>

#define NUMBER_OF_ROWS 5
#define NUMBER_OF_COLUMNS 5

int main(void)
{
	// Variable Declarations
	int* integerArray[NUMBER_OF_ROWS]; // A 2D Array which will have 5 rows and number of columns can be decided later on..
	int x, y;

	// Code
	printf("\n=======================================================================\n");
	printf("****** Memory Allocation To 2D Integer Array ******** \n\n");
	for (x = 0; x < NUMBER_OF_ROWS; x++)
	{
		// Row 0 Will Have (NUMBER_OF_COLUMNS - 0) = (5 - 0)  = 5 COLUMNS....
		// Row 0 Will Have (NUMBER_OF_COLUMNS - 1) = (5 - 1)  = 4 COLUMNS....
		// Row 0 Will Have (NUMBER_OF_COLUMNS - 2) = (5 - 2)  = 3 COLUMNS....
		// Row 0 Will Have (NUMBER_OF_COLUMNS - 3) = (5 - 3)  = 2 COLUMNS....
		// Row 0 Will Have (NUMBER_OF_COLUMNS - 4) = (5 - 4)  = 1 COLUMN.....

		// Because Of This, There Is No Contiguous Memory Allocation... Hence, Although We May Use The Data As A 2D Array,
		// It Is Not Really A 2D Array In Memory....

		integerArray[x] = (int*)malloc((NUMBER_OF_COLUMNS - x) * sizeof(int));
		if (integerArray[x] == NULL)
		{
			printf("Failed To Allocate Memory To Row %d Of 2D Integer Array !!! Exitting Now ...\n\n", x);
			exit(0);
		}
		else
			printf("Memory Allocation To Row %d Of 2D Integer Array Succeeded !!!\n\n", x);
	}

	for (x = 0; x < 5; x++)
	{
		for (y = 0; y < (NUMBER_OF_COLUMNS - x); y++)
		{
			integerArray[x][y] = (x * 1) * (y * 1);
		}
	}

	for (x = 0; x < 5; x++)
	{
		for (y = 0; y < (NUMBER_OF_COLUMNS - x); y++)
		{
			integerArray[x][y] = (x * 1) + (y * 1);
		}
	}

	for (x = 0; x < 5; x++)
	{
		for (y = 0; y < (NUMBER_OF_COLUMNS - x); y++)
		{
			printf("integerArray[%d][%d] = %d     At Address : %p\n", x, y, integerArray[x][y], &integerArray[x][y]);
		}
		printf("\n");
	}

	for (x = (NUMBER_OF_ROWS - 1); x >= 0; x--)
	{
		if (integerArray[x])
		{
			free(integerArray[x]);
			integerArray[x] = NULL;
			printf("Memory Allocated to Row %d Has Been Successfully Freed !!!\n\n", x);
		}
	}

	return (0);
}
