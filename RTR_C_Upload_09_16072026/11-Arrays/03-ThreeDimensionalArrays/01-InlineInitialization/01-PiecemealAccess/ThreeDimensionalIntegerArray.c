// Program Name : ThreeDimensionalIntegerArray.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations

	// In-Line initialization
	int integerArray[5][3][2] = { {	{ 5, 10 }, { 15, 20 }, { 25, 30 } },
								  { { 6, 12 }, { 18, 24 }, { 30, 36 } },
								  { { 9, 18 }, { 27, 36 }, { 45, 54 } },
								  {	{ 7, 14 }, { 21, 28 }, { 35, 42 } },
								  {	{ 11, 22}, { 33, 44 }, { 55, 66 } } };

	int integer_size;
	int integerArray_size;
	int integerArray_number_elements, integerArray_width, integerArray_height, integerArray_depth;

	// Code
	printf("\n=================================================================\n");

	integer_size = sizeof(int);
	integerArray_size = sizeof(integerArray);
	printf("Size Of Three Dimensional ( 3D ) Integer Array Is = %d\n\n", integerArray_size);

	integerArray_width = integerArray_size / sizeof(integerArray[0]);
	printf("Number Of Rows (Width) In Three Dimensional ( 3D ) Integer Array Is = %d\n\n", integerArray_width);

	integerArray_height = sizeof(integerArray[0]) / sizeof(integerArray[0][0]);
	printf("Number Of Columns (Height) In Three Dimensional ( 3D ) Integer Array Is = %d\n\n", integerArray_height);

	integerArray_depth = sizeof(integerArray[0][0]) / integer_size;
	printf("Depth In Three Dimensional ( 3D ) Integer Array Is = %d\n\n", integerArray_depth);

	integerArray_number_elements = integerArray_width * integerArray_height * integerArray_depth;
	printf("Number Of Elements In Three Dimensional ( 3D ) Integer Array Is = %d\n\n", integerArray_number_elements);

	printf("\n================================================================\n");
	printf("Elements In Integer 3D Array : \n\n");

	// ***** PIECE-MEAL DISPLAY ******
	// ******* ROW 1 *******
	printf("********* ROW 1 *********\n");
	printf("********* COLUMN 1 ******** \n");
	printf("integerArray[0][0][0] = %d\n", integerArray[0][0][0]);
	printf("integerArray[0][0][1] = %d\n", integerArray[0][0][1]);
	printf("\n");

	printf("********** COLUMN 2 *********\n");
	printf("integerArray[0][1][0] = %d\n", integerArray[0][1][0]);
	printf("integerArray[0][1][1] = %d\n", integerArray[0][1][1]);
	printf("\n");

	printf("********* COLUMN 3 **********\n");
	printf("integerArray[0][2][0] = %d\n", integerArray[0][2][0]);
	printf("integerArray[0][2][1] = %d\n", integerArray[0][2][1]);
	printf("\n\n");

	// ******* ROW 2 *******
	printf("********* ROW 2 *******\n");
	printf("********* COLUMN 1 ********\n");
	printf("integerArray[1][0][0] = %d\n", integerArray[1][0][0]);
	printf("integerArray[1][0][1] = %d\n", integerArray[1][0][1]);
	printf("\n");

	printf("******* COLUMN 2 *******\n");
	printf("integerArray[1][1][0] = %d\n", integerArray[1][1][0]);
	printf("integerArray[1][1][1] = %d\n", integerArray[1][1][1]);
	printf("\n");

	printf("****** COLUMN 3 *******\n");
	printf("integerArray[1][2][0] = %d\n", integerArray[1][2][0]);
	printf("integerArray[1][2][1] = %d\n", integerArray[1][2][1]);
	printf("\n\n");

	// ******* ROW 3 *******
	printf("******* ROW 3 *******\n");
	printf("******** COLUMN 1 ********\n");
	printf("integerArray[2][0][0] = %d\n", integerArray[2][0][0]);
	printf("integerArray[2][0][1] = %d\n", integerArray[2][0][1]);
	printf("\n");

	printf("****** COLUMN 2 ********\n");
	printf("integerArray[2][1][0] = %d\n", integerArray[2][1][0]);
	printf("integerArray[2][1][1] = %d\n", integerArray[2][1][1]);
	printf("\n");

	printf("****** COLUMN 3 *********\n");
	printf("integerArray[2][2][0] = %d\n", integerArray[2][2][0]);
	printf("integerArray[2][2][1] = %d\n", integerArray[2][2][1]);
	printf("\n");

	// ******** ROW 4 *******
	printf("******* ROW 4 ********\n");
	printf("******* COLUMN 1 ********\n");
	printf("integerArray[3][0][0] = %d\n", integerArray[3][0][0]);
	printf("integerArray[3][0][1] = %d\n", integerArray[3][0][1]);
	printf("\n");

	printf("******* COLUMN 2 *******\n");
	printf("integerArray[3][1][0] = %d\n", integerArray[3][1][0]);
	printf("integerArray[3][1][1] = %d\n", integerArray[3][1][1]);
	printf("\n");

	printf("******* COLUMN 3 ********\n");
	printf("integerArray[3][2][0] = %d\n", integerArray[3][2][0]);
	printf("integerArray[3][2][1] = %d\n", integerArray[3][2][1]);
	printf("\n\n");

	// ******** ROW 5 *******
	printf("******** ROW 5 *********\n");
	printf("******* COLUMN 1 *******\n");
	printf("integerArray[4][0][0] = %d\n", integerArray[4][0][0]);
	printf("integerArray[4][0][1] = %d\n", integerArray[4][0][1]);
	printf("\n");

	printf("******** COLUMN 2 *******\n");
	printf("integerArray[4][1][0] = %d\n", integerArray[4][1][0]);
	printf("integerArray[4][1][1] = %d\n", integerArray[4][1][1]);
	printf("\n");

	printf("******** COLUMN 3 *******\n");
	printf("integerArray[4][2][0] = %d\n", integerArray[4][2][0]);
	printf("integerArray[4][2][1] = %d\n", integerArray[4][2][1]);
	printf("\n");

	return (0);
}
