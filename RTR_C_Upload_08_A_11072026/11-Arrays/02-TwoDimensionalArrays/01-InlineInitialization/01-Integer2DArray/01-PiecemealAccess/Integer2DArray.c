// Program Name : Integer2DArray.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int integerArray[5][3] = {	{1, 2, 3}, 
								{2, 4, 6},
								{3, 6, 9},
								{4, 8, 12}, 
								{5, 10, 15} }; // In-Line Initialization
	int integer_size;
	int integerArray_size;
	int integerArray_number_elements, integerArray_number_rows, integerArray_number_columns = 0;

	// Code
	printf("\n===================================\n");

	integer_size = sizeof(int);

	integerArray_size = sizeof(integerArray);
	printf("Size Of Two Dimentional (2D) Integer Array Is = %d\n\n", integerArray_size);

	integerArray_number_rows = integerArray_size / sizeof(integerArray[0]);
	printf("Number Of Rows In Two Dimensional (2D) Integer Array Is = %d\n\n", integerArray_number_rows);

	integerArray_number_columns = sizeof(integerArray[0]) / integer_size;
	printf("Number Of Columns In Two Dimensional (2D) Integer Array Is = %d\n\n", integerArray_number_columns);

	integerArray_number_elements = integerArray_number_rows * integerArray_number_columns;
	printf("Number Of Elements In Two Dimensional (2D) Integer Array Is = %d\n\n", integerArray_number_elements);

	printf("\n===================================\n");
	printf("Elements In The 2D Array : \n\n");

	// ***** Array Indices Begin From 0, Hence, 1st Row Is Actually 0th Row And 1st Column Is Actually 0th Column *****

	// *** Row 1 ***
	printf("******** ROW 1 **********\n");
	printf("integerArray[0][0] = %d\n", integerArray[0][0]);	//  Column 1 (0th Element) => 1
	printf("integerArray[0][1] = %d\n", integerArray[0][1]);	//	Column 2 (1st Element) => 2
	printf("integerArray[0][2] = %d\n", integerArray[0][2]);	//	Column 3 (2nd Element) => 3
	printf("\n===================================\n");

	// *** ROW 2 ***
	printf("******** ROW 2 *********\n");
	printf("integerArray[1][0] = %d\n", integerArray[1][0]);	// Column 1 (0th Element) => 2
	printf("integerArray[1][1] = %d\n", integerArray[1][1]);	// Column 2 (1st Element) => 4
	printf("integerArray[1][2] = %d\n", integerArray[1][2]);	// Column 3 (2nd Element) => 6
	printf("\n===================================\n");

	// *** Row 3 ***
	printf("******** Row 3 ********\n");
	printf("integerArray[2][0] = %d\n", integerArray[2][0]);	// Column 1 (0th Element) => 3
	printf("integerArray[2][1] = %d\n", integerArray[2][1]);	// Column 2 (1st Element) => 6
	printf("integerArray[2][2] = %d\n", integerArray[2][2]);	// Column 3 (2nd Element) => 9
	printf("\n===================================\n");

	// *** Row 4 ***
	printf("******** Row 4 *******\n");
	printf("integerArray[3][0] = %d\n", integerArray[3][0]);	// Column 1 (0th Element) => 4
	printf("integerArray[3][1] = %d\n", integerArray[3][1]);	// Column 2 (1st Element) => 8
	printf("integerArray[3][2] = %d\n", integerArray[3][2]);	// Column 3 (2nd Element) => 12
	printf("\n===================================\n");

	// *** Row 5 ***
	printf("******** Row 5 ********\n");
	printf("integerArray[4][0] = %d\n", integerArray[4][0]);		// Column 1 (0th Element) = 5
	printf("integerArray[4][1] = %d\n", integerArray[4][1]);		// Column 2 (1st Element) = 10
	printf("integerArray[4][2] = %d\n", integerArray[4][2]);		// Column 3 (2nd Element) = 15
	printf("\n====================================\n");

	return (0);
}
