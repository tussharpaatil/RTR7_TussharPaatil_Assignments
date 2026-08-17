// Program Name : SingleStructVariableDeclarationMethod_03.c

#include <stdio.h>

int main(void)
{
	// Defining Struct
	typedef struct
	{
		int integer_number;
		float float_number;
		double double_number;
	}MyData; // Declaring A Single Struct Variable Of Type 'struct MyData' locally..

	// Variable Declarations
	MyData data;
	int integer_size;
	int float_size;
	int double_size;
	int struct_MyData_size;

	// Code
	// Assigning Data Values To The Data Members Of 'struct MyData'
	data.integer_number = 33;
	data.float_number = 2.53f;
	data.double_number = 4.1223;

	// Displaying Values Of The Data Members Of 'struct MyData'
	printf("\n=================================================================\n");
	printf("Data Members Of 'struct MyData' Are : \n\n");
	printf("integer_number = %d\n", data.integer_number);
	printf("float_number = %.2f\n", data.float_number);
	printf("double_number = %.4lf\n", data.double_number);

	// Calculating Sizes (In Bytes) Of The Data Members Of 'struct MyData'
	integer_size = sizeof(data.integer_number);
	float_size = sizeof(data.float_number);
	double_size = sizeof(data.double_number);

	// Displaying Sizes (In Bytes) Of The Data Members Of 'struct MyData'
	printf("\n==================================================================\n");
	printf("Sizes (In Bytes) Of Data Members Of 'struct MyData' Are : \n\n");
	printf("Size Of 'integer_number = %d bytes\n", integer_size);
	printf("Size Of 'float_number' = %d bytes\n", float_size);
	printf("Size Of 'double_number' = %d bytes\n", double_size);

	// Calculating Size (In Bytes) Of The Entire 'struct MyData'
	struct_MyData_size = sizeof(MyData);	// Can Also Give Struct Name-> sizeof(MyData)

	// Displaying Sizez (In Bytes) Of The Entire 'struct MyData'
	printf("\n=================================================================\n");
	printf("Sizes Of 'struct MyData' : %d bytes\n\n", struct_MyData_size);

	return (0);
}
