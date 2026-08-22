// Program Name : 2DArrayUsingPointerToPointer.c

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// Variable Declarations
	int **ptr_integerArray = NULL; // A Pointer-to-pointer to integer... But can Also hold base address of a 
	// 2D Array which will can have any number of rows and any number of columns....
	int x, y;
	int number_of_rows, number_of_columns;

	// Code

	// **** Accept Number Of Rows 'number_of_rows' From User ****
	printf("\n========================================================\n");
	printf("Enter Number Of Rows : \n");
	scanf("%d", &number_of_rows);

	// **** Accept Number Of Columns 'number_of_columns' From User ****
	printf("\n========================================================\n");
	printf("Enter Number Of Columns : \n");
	scanf("%d", &number_of_columns);

	// *** Allocating Memory To 1D Array Consisting Of Base Address Of Rows ***
	printf("\n========================================================\n");
	printf("**** Memory Allocation To 2D Integer Array *******\n");
	ptr_integerArray = (int**)malloc(number_of_rows * sizeof(int*));
	if (ptr_integerArray == NULL)
	{
		printf("Failed To Allocate Memory To %d Rows Of 2D Integer Array !!! Exitting Now... \n\n", number_of_rows);
		exit(0);
	}
	else
		printf("Memory Allocation To %d Rows Of 2D Integer Array Succeeded !!!\n\n", number_of_rows);

	// *** Allocating Memory To Each Row Which Is A 1D Array Containing Consisting Of Columns Which Contain The Actual Integers ***
	for (x = 0; x < number_of_rows; x++)
	{
		ptr_integerArray[x] = (int*)malloc(number_of_columns * sizeof(int)); // Allocating Memory (Number Of Columns * Size of 'int') To Row 'x'
		if (ptr_integerArray[x] == NULL) // Row 'x' Memory Allocated ?
		{
			printf("Failed To Allocate Memory To Columns Of Row %d Of 2D Integer Array !!! Exitting Now ... \n\n", x);
			exit(0);
		}
		else
			printf("Memory Allocation To Columns Of Row %d Of 2D Integer Array Succeeded !!!\n\n", x);
	}

	// *** Filling Up Values ****
	for (x = 0; x < number_of_rows; x++)
	{
		for (y = 0; y < number_of_columns; y++)
		{
			ptr_integerArray[x][y] = (x * 1) + (y + 1); // Can Also Use : *(*(ptr_integerArray + x) + y) = (x * 1) + (y * 1)
		}
	}

	// *** Displying Values ***
	for (x = 0; x < number_of_rows; x++)
	{
		printf("Base Address Of Row %d : ptr_integerArray[%d] = %p    At Address : %p\n", x, y, ptr_integerArray[x], &ptr_integerArray[x]);
	}
	printf("\n==============================================================================\n");
	for (x = 0; x < number_of_rows; x++)
	{
		for (y = 0; y < number_of_columns; y++)
		{
			printf("ptr_integerArray[%d][%d] = %d   At Address : %p\n", x, y, ptr_integerArray[x][y], &ptr_integerArray[x][y]);
			// Can be also use *(*(ptr_integerArray + x) + y) for value and *(ptr_integerArray + x) + y for address...
		}
		printf("\n");
	}

	// *** Freeing Memory Allocated To Each Row ***
	for (x = (number_of_rows - 1); x >= 0; x--)
	{
		if (ptr_integerArray[x])
		{
			free(ptr_integerArray[x]);
			ptr_integerArray[x] = NULL;
			printf("Memory Allocated To Row %d Has Been Successfully Freed !!!\n\n", x);
		}
	}
	
	// *** Freeing Memory Allocated To 1D Array Consisting Of Base Addresses Of Rows ***
	if (ptr_integerArray)
	{
		free(ptr_integerArray);
		ptr_integerArray = NULL;
		printf("Memory Allocated To ptr_integerArray Has Been Successfully Freed !!!\n\n");
	}

	return (0);
}
