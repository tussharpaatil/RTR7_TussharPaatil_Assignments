// Program Name : ArraySizes.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int integerArray_One[5];
	int integerArray_Two[5][3];
	int integerArray_Three[100][100][5];

	int number_of_rows_2D;
	int number_of_columns_2D;

	int number_of_rows_3D;
	int number_of_columns_3D;
	int depth_3D;

	// Code
	printf("\n========================================================================================================\n");
	printf("Size Of 1D Integer Array integerArray_One = %lu\n", (unsigned long)sizeof(integerArray_One));
	printf("Number Of Elements In 1D Integer Array integerArray_One = %lu\n", (unsigned long)(sizeof(integerArray_One) / sizeof(int)));

	printf("\n========================================================================================================\n");
	printf("Size If 2D Integer Array integerArray_Two = %lu\n", (unsigned long)sizeof(integerArray_Two));
		
	printf("Number Of Rows In 2D Integer Array integerArray_Two = %lu\n",(unsigned long)(sizeof(integerArray_Two) / sizeof(integerArray_Two[0])));
	number_of_rows_2D = (sizeof(integerArray_Two) / sizeof(integerArray_Two[0]));

	printf("Number Of Elements (columns) In Each Row In 2D Integer Array integerArray_Two = %lu\n", (unsigned long)(sizeof(integerArray_Two[0]) / sizeof(integerArray_Two[0][0])));
	number_of_columns_2D = (sizeof(integerArray_Two[0]) / sizeof(integerArray_Two[0][0]));

	printf("Number Of Elements In Total In 2D Array integerArray_Two = %d\n", (number_of_rows_2D * number_of_columns_2D));

	printf("\n========================================================================================================\n\n");
	printf("Size Of 3D Integer Array integerArray_Three = %lu\n", (unsigned long)sizeof(integerArray_Three));

	printf("Number Of Rows In 3D Integer Array integerArray_Three = %d\n", (unsigned long)(sizeof(integerArray_Three) / sizeof(integerArray_Three[0])));
	number_of_rows_3D = (sizeof(integerArray_Three) / sizeof(integerArray_Three[0]));

	printf("Number Of Elements (Columns) In One Row In 3D Integer Array integerArray_Three = %lu\n", (unsigned long)(sizeof(integerArray_Three[0]) / sizeof(integerArray_Three[0][0])));
	number_of_columns_3D = (sizeof(integerArray_Three[0]) / sizeof(integerArray_Three[0][0]));

	printf("Number Of Elements (Depth) In One Column In One Row In 3D Integer Array integerArray_Three = %lu\n", (unsigned long)(sizeof(integerArray_Three[0][0]) / sizeof(integerArray_Three[0][0][0])));
	depth_3D = (sizeof(integerArray_Three[0][0]) / sizeof(integerArray_Three[0][0][0]));

	printf("Number Of Elements in Total In 3D Array integerArray_Three = %d\n", (number_of_rows_3D * number_of_columns_3D * depth_3D));

	printf("\n=========================================================================================================\n");

	return (0);
}
