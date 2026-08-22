// Program Name : PointerRepresentation.c

#include <stdio.h>
#include <stdlib.h>

#define NUMBER_OF_ROWS 5
#define NUMBER_OF_COLUMNS 3

int main(void)
{
	// Variable Declarations
	int x, y;
	int **ptr_integerArray = NULL;

	// Code
	// *** Every Row Of A 2D Array Is An Integer Array Itself Comprising Of 'NUMBER_OF_COLUMNS' Integer Elements ***
	// *** There are 5 rows And 3 Columns In A 2D Integer Array. Each Of The 5 Rows is A 1D Array Of 3 Integers.
	// *** Hence, Each Of These 5 Rows Themselves Being Arrays, Will be The Base Addresses Of Their Respective Rows ***
	printf("\n========================================================================================\n");

	// *** Memory Allocation ***
	ptr_integerArray = (int **)malloc(NUMBER_OF_ROWS * sizeof(int *)); // ptr_integerArray is the name and base address of 1D array
	// containing 5 integer pointers to 5 integer arrays .... so it is an array containing elements of data type (int *)
	if (ptr_integerArray == NULL)
	{
		printf("Memory Allocation To The 1D Array Of Base Addresses Of %d Rows Failed !!! Exitting Now... !!!\n\n", NUMBER_OF_ROWS);
		exit(0);
	}
	else
		printf("Memory Allocation To The 1D Array Of Base Addresses Of %d Rows Has Succeeded !!!\n\n", NUMBER_OF_ROWS);

	// *** Allocating Memory To Each Row ***
	for (x = 0; x < NUMBER_OF_ROWS; x++)
	{
		ptr_integerArray[x] = (int*)malloc(NUMBER_OF_COLUMNS * sizeof(int)); // ptr_integerArray[x] is the base address of xth row..
		if (ptr_integerArray == NULL)
		{
			printf("Memory Allocation To The Columns Of Row %d Failed !!!... Exitting Now..\n\n", x);
			exit(0);
		}
		else
			printf("Memory Allocation To The Columns Of Row %d Has Succeeded !!!\n\n", x);
	}

	// *** Assigning Values ***
	for (x = 0; x < NUMBER_OF_ROWS; x++)
	{
		for (y = 0; y < NUMBER_OF_COLUMNS; y++)
		{
			*(*(ptr_integerArray + x) + y) = (x + 1) * (y + 1); // ptr_integerArray[x][y] = (x + 1) * (y + 1);
		}
	}

	// *** Displaying Values ***
	printf("\n=============================================================================================\n");
	printf("2D Integer Array Elements Along With Addresses : \n\n");
	for (x = 0; x < NUMBER_OF_ROWS; x++)
	{
		for (y = 0; y < NUMBER_OF_COLUMNS; y++)
		{
			printf("ptr_integerArray_Row[%d][%d] = %d     At Address &ptr_integerArray_Row[%d][%d] : %p\n", x, y, ptr_integerArray[x][y], x, y, &ptr_integerArray[x][y]);
		}
		printf("\n================================================================================================\n");
	}

	// *** Freeing Allocated Memory ***
	// *** Freeing Memory Of Each Row ***
	for (x = (NUMBER_OF_ROWS - 1); x >= 0; x--)
	{
		if (*(ptr_integerArray + 1)) // if(ptr_integerArray[x]
		{
			free(*(ptr_integerArray + x)); // free(ptr_integerArray[x])
			*(ptr_integerArray + 1) = NULL; // ptr_integerArray[x] = NULL;
			printf("Memory Allocated To Row %d Has Been Successfully Freed !!! \n\n", x);
		}
	}
	
	// *** Freeing Memory Of ptr_integerArray Which Is The Array Of 5 Integer Pointers...
	// That is, It is An Array Having 5 Integer Addresses (TYPE int *)...
	if (ptr_integerArray)
	{
		free(ptr_integerArray);
		ptr_integerArray = NULL;
		printf("Memory Allocated To ptr_integerArray Has Been Successfully Freed !!!\n\n");
	}

	return (0);
}
