// Progam Name : PointerRepresentation.c

#include <stdio.h>

#define NUMBER_OF_ROWS 5
#define NUMBER_OF_COLUMNS 3

int main(void)
{
	// Variable Declarations
	int integerArray[NUMBER_OF_ROWS][NUMBER_OF_COLUMNS];
	int counter1, counter2;

	int* ptr_integerArray_Row = NULL;

	// Code
	// *** Every Row Of A 2D Arrays Is An Integer Array Itself Comprising Of 'NUMBER_OF_COLUMNS' Integer Elements ***
	// *** There Are 5 Rows And 3 Columns In A 2S Integer Array. Each Of The 5 Rows Is A 1D Array Of 3 Integers.
	// *** Hence, Each Of These 5 Rows Themselves Being Arrays, Will Be The Base Addresses Of Their Respective Rows ***
	for (counter1 = 0; counter1 < NUMBER_OF_ROWS; counter1++)
	{
		ptr_integerArray_Row = integerArray[counter1]; // 'integerArray[counter1] Is the Base Address Of 'counte1'th Row...
		for (counter2 = 0; counter2 < NUMBER_OF_COLUMNS; counter2++)
			*(ptr_integerArray_Row + counter2) = (counter1 + 1) * (counter2 + 1);
		// 'ptr_integerArray_row' (That is, 'integerArray[counter1]' Can Be Treated As 1D Array Using Pointers).....
	}

	printf("\n=============================================================================\n");
	printf("2D Integer Array Elements Along With Addresses : \n\n");
	for (counter1 = 0; counter1 < NUMBER_OF_ROWS; counter1++)
	{
		ptr_integerArray_Row = integerArray[counter1];
		for (counter2 = 0; counter2 < NUMBER_OF_COLUMNS; counter2++)
		{
			printf("*(ptr_integerArray_Row + %d) = %d           At Address (ptr_integerArray_Row + counter2) : %p\n", counter2, (*ptr_integerArray_Row + counter2), (ptr_integerArray_Row + counter2));
		}
		printf("\n\n");
	}
	return (0);
}
