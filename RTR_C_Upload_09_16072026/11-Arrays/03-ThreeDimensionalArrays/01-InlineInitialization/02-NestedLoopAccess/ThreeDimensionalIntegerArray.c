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
								  {	{ 8, 16 }, { 24, 32 }, { 40, 48 } } };

	int integer_size;
	int integerArray_size;
	int integerArray_number_elements, integerArray_width, integerArray_height, integerArray_depth;
	int x, y, z;

	// Code
	printf("\n=========================================================\n");

	integer_size = sizeof(int);

	integerArray_size = sizeof(integerArray);
	printf("Size Of Three Dimentional (3D) Integer Array Is = %d\n\n", integerArray_size);
	
	integerArray_width = integerArray_size / sizeof(integerArray[0]);
	printf("Number Of Rows (Width) In Three Dimensional ( 3D ) Integer Array Is = %d\n\n", integerArray_width);

	integerArray_height = sizeof(integerArray[0]) / sizeof(integerArray[0][0]);
	printf("Number Of Columns (Height) In Three Dimensional ( 3D ) Integer Array Id = %d\n\n", integerArray_height);

	integerArray_depth = sizeof(integerArray[0][0]) / integer_size;
	printf("Depth In Three Dimensional ( 3D ) Integer Array Is = %d\n\n", integerArray_depth);

	integerArray_number_elements = integerArray_width * integerArray_height * integerArray_depth;
	printf("Number Of Elements In Three Dimensional ( 3D ) Integer Array Is = %d\n\n", integerArray_number_elements);

	printf("\n\n");
	printf("Elements In Integer 3D Array : \n\n");

	for (x = 0; x < integerArray_width; x++)
	{
		printf("*********** ROW %d ***********\n", (x + 1));
		for (y = 0; y < integerArray_height; y++)
		{
			printf("********** COLUMN %d ***********\n", (y + 1));
			for (z = 0; z < integerArray_depth; z++)
			{
				printf("integerArray[%d][%d][%d] = %d\n", x, y, z, integerArray[x][y][z]);
			}
			printf("\n");
		}
		printf("\n\n");
	}

	return (0);
}
