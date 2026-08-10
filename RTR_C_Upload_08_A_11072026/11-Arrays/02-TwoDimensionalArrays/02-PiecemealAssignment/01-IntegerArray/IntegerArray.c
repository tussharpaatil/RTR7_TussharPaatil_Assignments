// Program Name : IntegerArray.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int integerArray[3][5]; // 3 Rows (0, 1, 2) And 5 Columns (0, 1, 2, 3, 4)
	int integer_size;
	int integerArray_size;
	int integerArray_number_elements, integerArray_number_rows, integerArray_number_columns;
	int counter1, counter2;

	// Code
	printf("\n=============================================================================================================\n");

	integer_size = sizeof(int);
	
	integerArray_size = sizeof(integerArray);
	printf("Size Of Two Dimensional (2D) Integer Array Is = %d\n\n", integerArray_size);

	integerArray_number_rows = integerArray_size / sizeof(integerArray[0]);
	printf("Number Of Rows In Two Dimensional (2D) Integer Array Is = %d\n\n", integerArray_number_rows);

	integerArray_number_columns = sizeof(integerArray[0]) / integer_size;
	printf("Number Of Columns In Two Dimensional (2D) Integer Array Is = %d\n\n", integerArray_number_columns);

	integerArray_number_elements = integerArray_number_rows * integerArray_number_columns;
	printf("Number Of Elements In Two Dimensional (2D) Integer Array Is = %d\n\n", integerArray_number_elements);

	printf("\n============================================================================================================\n");
	printf("Elements In The 2D Array : \n\n");

	// ********* Piece-Meal Assignment *********
	// ********* Row 1 *********
	integerArray[0][0] = 12;
	integerArray[0][1] = 24;
	integerArray[0][2] = 36;
	integerArray[0][3] = 48;
	integerArray[0][4] = 60;

	// ********* Row 2 *********
	integerArray[1][0] = 11;
	integerArray[1][1] = 22;
	integerArray[1][2] = 33;
	integerArray[1][3] = 44;
	integerArray[1][4] = 55;

	// ********* Row 3 *********
	integerArray[2][0] = 8;
	integerArray[2][1] = 16;
	integerArray[2][2] = 24;
	integerArray[2][3] = 32;
	integerArray[2][4] = 40;

	// Display
	for (counter1 = 0; counter1 < integerArray_number_rows; counter1++)
	{
		printf("********** Row %d *************\n", (counter1 + 1));
		for (counter2 = 0; counter2 < integerArray_number_columns; counter2++)
		{
			printf("integerArray[%d][%d] = %d\n", counter1, counter2, integerArray[counter1][counter2]);
		}
		printf("\n===================================================================================================================\n");
	}
	return (0);
}
