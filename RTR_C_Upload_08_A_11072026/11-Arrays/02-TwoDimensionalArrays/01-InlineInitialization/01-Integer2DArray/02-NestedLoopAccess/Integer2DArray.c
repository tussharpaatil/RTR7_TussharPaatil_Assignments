// Program Name : Integer2SArray.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int integerArray[5][3] = {  {1, 2, 3},
								{2, 4, 6},
								{3, 6, 9},
								{4, 8, 12},
								{5, 10, 15} };	// In-Line Initialization

	int integer_size;
	int integerArray_size;
	int integerArray_number_elements, integerArray_number_rows, integerArray_number_columns;
	int counter1, counter2;

	// Code
	printf("\n============================================\n");

	integer_size = sizeof(int);

	integerArray_size = sizeof(integerArray);
	printf("Size Of Two Dimensional (2D) Integer Array Is = %d\n\n", integerArray_size);

	integerArray_number_rows = integerArray_size / sizeof(integerArray[0]);
	printf("Number Of Rows In Two Dimensional (2D) Integer Array Is = %d\n\n", integerArray_number_rows);

	integerArray_number_columns = sizeof(integerArray[0]) / integer_size;
	printf("Number Of Columns In Two Dimensional (2D) Integer Array Is = %d\n\n", integerArray_number_columns);

	integerArray_number_elements = integerArray_number_rows * integerArray_number_columns;
	printf("Number Of Elements In Two Dimensional (2D) Integer Array Is = %d\n\n", integerArray_number_elements);

	printf("\n=============================================\n");
	printf("Elements In The 2D Array : \n\n");

	// **** Array Indices Begin From 0, Hence, 1st Row Is Actually 0th Row And 1st Column Is actually 0th Column ****
	for (counter1 = 0; counter1 < integerArray_number_rows; counter1++)
	{
		printf("******** ROW %d ********\n", (counter1 + 1));
		for (counter2 = 0; counter2 < integerArray_number_columns; counter2++)
		{
			printf("intergerArray[%d][%d] = %d\n", counter1, counter2, integerArray[counter1][counter2]);
		}
		printf("\n===============================================\n");
	}

	return (0);
}
