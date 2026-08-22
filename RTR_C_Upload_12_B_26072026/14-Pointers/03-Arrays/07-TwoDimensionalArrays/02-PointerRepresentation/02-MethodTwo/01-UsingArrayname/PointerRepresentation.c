// Program Name : PointerRepresentation.c

#include <stdio.h>

#define NUMBER_OF_ROWS 5
#define NUMBER_OF_COLUMNS 3

int main(void)
{
	// Variable Declarations
	int integerArray[NUMBER_OF_ROWS][NUMBER_OF_COLUMNS];
	int x, y;

	// Code
	// Name Of An Array Itself Is its Base Address.
	// Hence, 'integerArray' Is Base Address Of 2D Integer Array integerArray[][]

	// integerArray[5][3] => integerArray Is A 2D Array Having 5 Rows And 3 Columns. Each Of These 5 Rows Is A 1D Integer Array Of 3 Integers...
	// integerArray[0] => Is The 0th Row .... Hence, The Base Address Of Row 0
	// integerArray[1] => Is The 1th Row .... Hence, The Base Address Of Row 1
	// integerArray[4] => Is The 4th Row .... Hence, The Base Address Of Row 4

	// (integerArray[0] + 0) => Address Of 0th Integer From Base Address Of 0th Row (integerArray[0][0])
	// (integerArray[0] + 1) => Address Of 0th Integer From Base Address Of 0th Row (integerArray[0][1])
	// (integerArray[0] + 2) => Address Of 0th Integer From Base Address Of 0th Row (integerArray[0][2])

    // (integerArray[1] + 0) => Address Of 0th Integer From Base Address Of 1th Row (integerArray[1][0])
	// (integerArray[1] + 1) => Address Of 0th Integer From Base Address Of 1th Row (integerArray[1][1])
	// (integerArray[1] + 2) => Address Of 0th Integer From Base Address Of 1th Row (integerArray[1][2])

	// integerArray[0], integerArray[1]..  Are 1D Integer Arrays And Hane Can Be Treated As 1D Integer Arrays Using Pointers.
	// 'integerArray' Is The Name And Base Address Of 2D Integer Array****
	// (*(integerArray + 0) + 0) = (integerArray[0] + 0) = Address Of 0th Element From Base Address Of 0th Row = (integerArray[0] + 0) = (integerArray[0][0])
	// (*(integerArray + 0) + 1) = (integerArray[0] + 1) = Address Of 0th Element From Base Address Of 1th Row = (integerArray[0] + 1) = (integerArray[0][1])
	// (*(integerArray + 0) + 2) = (integerArray[0] + 1) = Address Of 0th Element From Base Address Of 2th Row = (integerArray[0] + 2) = (integerArray[0][2])

	// (*(integerArray + 1) + 0) = (integerArray[1] + 0) = Address Of 0th Element From Base Address Of 0th Row = (integerArray[1] + 0) = (integerArray[1][0])
	// (*(integerArray + 1) + 1) = (integerArray[1] + 1) = Address Of 0th Element From Base Address Of 1th Row = (integerArray[1] + 1) = (integerArray[1][1])
	// (*(integerArray + 1) + 2) = (integerArray[1] + 1) = Address Of 0th Element From Base Address Of 2th Row = (integerArray[1] + 2) = (integerArray[1][2])

	for (x = 0; x < NUMBER_OF_ROWS; x++)
	{
		for (y = 0; y < NUMBER_OF_COLUMNS; y++)
			*(*(integerArray + x) + y) = (x + 1) * (y + 1); // 'integerArray[x]' Can Be Treated As 1D Array Using Pointers...
	}

	printf("\n==================================================================\n");
	printf("2D Integer Array Elements Aling With Addresses : \n\n");
	for (x = 0; x < NUMBER_OF_ROWS; x++)
	{
		for (y = 0; y < NUMBER_OF_COLUMNS; y++)
		{
			printf("*(*(integerArray + %d) + %d) = %d           At Address (*(integerArray + %d) + %d) : %p\n", x, y, *(*(integerArray + x) + y), x, y, (*(integerArray + x) + y));
		}
		printf("\n==============================================================\n");
	}

	return (0);
}
