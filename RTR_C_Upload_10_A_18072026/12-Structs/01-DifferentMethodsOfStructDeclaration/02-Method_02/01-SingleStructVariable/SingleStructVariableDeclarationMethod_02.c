// Program Name : SingleStructVariableDeclarationMethod_02.c

// Defining Struct
typedef struct
{
	int integer_number;	// 4 bytes (0 - 3 offset)
	float float_number; // 4 bytes (4 - 7 offset)
	double double_number; // 8 bytes ( 8 - 15 offset)
	// Here No padding, as largest element double and offset 8 aligns largest element's requirement
} MyData;

MyData data;	// Declaring A Single Struct Variable Of Type 'struct MyData' globally .....

int main(void)
{
	// Variable Declarations
	int integer_size;
	int float_size;
	int double_size;
	int struct_MyData_size;

	// Code
	// Assigning Data Values To The Data Members Of 'struct MyData'
	data.integer_number = 24;
	data.float_number = 3.14f;
	data.double_number = 5.233;

	// Displaying Values To The Data Members Of 'struct MyData'
	printf("\n===================================================================\n");
	printf("Data Members Of 'struct MyData' Are : \n\n");
	printf("integer_number = %d\n", data.integer_number);
	printf("float_number = %.2f\n", data.float_number);
	printf("double_number = %lf\n", data.double_number);

	// Calculating Sizes (In-Bytes) Of The Data Members Of 'struct MyData' 
	integer_size = sizeof(data.integer_number);
	float_size = sizeof(data.float_number);
	double_size = sizeof(data.double_number);

	// Displaying Sizes ( In Bytes ) Of The Data Members Of 'struct MyData'
	printf("\n====================================================================\n");
	printf("Sizes (In Bytes) Of Data Members Of 'struct MyData' Are : \n\n");
	printf("Size Of integer_size = %d bytes\n", integer_size);
	printf("Size Of float_size = %d bytes\n", float_size);
	printf("Size Of double_size = %d bytes\n", double_size);

	// Calculating Size (In Bytes) Of The Entire 'struct MyData'
	struct_MyData_size = sizeof(MyData); // Can Also Give Name => sizeof(MyData)

	// Displaying Sizes (In Bytes) Of The Entire 'struct MyData'
	printf("\n=====================================================================\n");
	printf("Size of 'struct MyData' : %d bytes\n\n", struct_MyData_size);

	return (0);
}
