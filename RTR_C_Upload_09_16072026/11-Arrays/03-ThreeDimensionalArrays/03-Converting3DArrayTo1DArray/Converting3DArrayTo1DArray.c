// Program Name : Converting3DArrayTo1DArray.c

#include <stdio.h>

#define ROWS 5
#define COLUMNS 3
#define DEPTH 2

int main(void)
{
	// Variable Declarations

	// In-Line initialization
	int integerArray[ROWS][COLUMNS][DEPTH] = { { { 3, 6 },  {  9, 12 }, { 15, 18 } },
											   { { 6, 12 }, { 18, 24 }, { 30, 36 } },
											   { { 9, 18 }, { 27, 36 }, { 45, 54 } },
											   { { 7, 14 }, { 21, 28 }, { 35, 42 } },
											   { { 10, 20}, { 30, 40 }, { 50, 60 } } };

	int x, y, z;

	int integerArray_1D[ROWS * COLUMNS * DEPTH]; // 5 * 3 * 2 Elements => 30 Elements In 1D Array

	// Code

	// ******** Display 3D Array ***********
	printf("\n======================================================\n");
	printf("Elements In The 3D Array : \n\n");
	for (x = 0; x < ROWS; x++)
	{
		printf("************* ROW %d **************\n", (x + 1));
		for (y = 0; y < COLUMNS; y++)
		{
			printf("************** COLUMN %d **************\n", (y + 1));
			for (z = 0; z < DEPTH; z++)
			{
				printf("integerArray[%d][%d][%d] = %d\n", x, y, z, integerArray[x][y][z]);
			}
			printf("\n");
		}
		printf("\n");
	}

	// ************** Converting 3D Array to 1D Array *****************
	for (x = 0; x < ROWS; x++)
	{
		for (y = 0; y < COLUMNS; y++)
		{
			for (z = 0; z < DEPTH; z++)
			{
				integerArray_1D[(x * COLUMNS * DEPTH) + (y * DEPTH) + z] = integerArray[x][y][z];
			}
		}
	}

	// ********** Display 1D Array ************
	printf("\n\n\n");
	printf("Elements In The 1D Array : \n\n");
	for (x = 0; x < (ROWS * COLUMNS * DEPTH); x++)
	{
		printf("integerArray_1D[%d] = %d\n", x, integerArray_1D[x]);
	}

	return (0);
}
