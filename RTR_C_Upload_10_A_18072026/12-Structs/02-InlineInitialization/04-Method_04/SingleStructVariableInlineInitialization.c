// Program Name : SingleStructVariableInlineInitialization.c

#include <stdio.h>

// Defining Struct
typedef struct
{
	int integer_number;
	float float_number;
	double double_number;
	char ch;
} MyData;

int main(void)
{
	// Variable Declaration

	// 33 will be assigned to 'integer_number' of 'data_one'
	// 6.32 will be assigned to 'float_number' of 'data_one'
	// 4.23342 will be assigned to 'double_number' of 'data_one'
	// 'O' will be assigned to 'ch' of 'data_one'
	MyData data_one = { 33, 6.32f, 4.23342, 'O' }; // Inline Initialization

	// 'T' will be assigned to 'integer_number' of 'data_two'.. But 'T' is a character (char) and 'integer_number' is an integer..
	// So 'T' is converted into its decimal integer (ASCII) value (84) and 84 is assigned to 'integer_number' of data_two.
	// 3.4 will be assigned to 'float_number' of data_two
	// 10.23223 will be assigned to 'double_number' of data_two
	// 70 will be assigned to 'ch' of 'data_two' ... but 70 is an integer (int) and 'ch' is a 'char' ... So 70 is considered as 
	// a decimal ASCII value and its corresponding character ( 'F' ) is assigned to 'ch' of 'data_two'
	MyData data_two = { 'T', 3.4f, 10.23223, 70 }; // Inline Initialization

	// 42 will be assigned to 'integer_number' of 'data_three'
	// 'P' is a 'char', but 'float_number' of 'data_three' is float... hence, 'P' is converted to its decimal integer ASCII value
	// (80) and this in turn is conerted to 'float' (80.000000) and then it will be assigned to 'float_number' of 'data_three'
	// 0.0000000 will be assigned to 'double_number' of 'data_three'
	// No Character will be assigned to 'c' of 'data_three'
	MyData data_three = { 42, 'P' }; // Inline Initialization

	// 51 will be assigned to 'integer_number' of 'data_four'
	// '0.0000000' will be assigned to 'float_number' of 'data_four' 
	// '0.0000000' will be assigned to 'double_number' of 'data_four'
	// No character will be assigned to 'ch' of 'data_four'
	MyData data_four = { 51 };	// Inline Initialization

	// Code
	// Displaying Values Of The Data Members Of 'struct MyData'
	printf("\n==========================================================\n");
	printf("Data Members Of 'struct MyData data_one' Are : \n\n");
	printf("integer_number = %d\n", data_one.integer_number);
	printf("float_number = %f\n", data_one.float_number);
	printf("double_number = %lf\n", data_one.double_number);
	printf("ch = %c\n", data_one.ch);

	printf("\n==========================================================\n");
	printf("Data Members Of 'struct MyData data_two' Are : \n\n");
	printf("integer_number = %d\n", data_two.integer_number);
	printf("float_number = %f\n", data_two.float_number);
	printf("double_number = %lf\n", data_two.double_number);
	printf("ch = %c\n", data_two.ch);

	printf("\n==========================================================\n");
	printf("Data Members Of 'struct MyData data_three' Are : \n\n");
	printf("integer_number = %d\n", data_three.integer_number);
	printf("float_number = %f\n", data_three.float_number);
	printf("double_number = %lf\n", data_three.double_number);
	printf("ch = %c\n", data_three.ch);

	printf("\n==========================================================\n");
	printf("Data Members Of 'struct MyData data_four' Are : \n\n");
	printf("integer_number = %d\n", data_four.integer_number);
	printf("float_number = %f\n", data_four.float_number);
	printf("double_number = %lf\n", data_four.double_number);
	printf("ch = %c\n", data_four.ch);

	return (0);
}
