// Program Name : PointerRepresentation.c

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
	// *** Every Row Of A 2D Array Is An Integer Array Itself Comprising Of 'NUMBER_OF_COLUMNS' Integer Elements ***
	// *** There Are 5 Rows And 3 Columns In A 2D Integer Array. Each Of The 5 Rows Is A 1D Array Of 3 Integers.
	// *** Hence, Each Of These 5 Rows Themselves Being Arrays, Will Be The Base Addresses Of Their Repective Rows ***

	for (counter1 = 0; counter1 < NUMBER_OF_ROWS; counter1++)
	{
		for (counter2 = 0; counter2 < NUMBER_OF_COLUMNS; counter2++)
			*(integerArray[counter1] + counter2) = (counter1 + 1) * (counter2 + 1); // 'integerArray[counter1]' Can Be Treated As 1D Array Using Pointers..
	}
	printf("\n=========================================================================================\n");
	printf("2D Integer Array Elements Along Along With Addresses : \n\n");
	for (counter1 = 0; counter1 < NUMBER_OF_ROWS; counter1++)
	{
		for (counter2 = 0; counter2 < NUMBER_OF_COLUMNS; counter2++)
		{
			printf("*(integerArray[%d] + %d) = %d    At Address (integerArray[counter1] + counter2) : %p\n", counter1, counter2, *(integerArray[counter1] + counter2), (integerArray[counter1] + counter2));
		}
		printf("\n=============================================================================================\n");
	}
	return (0);
}
