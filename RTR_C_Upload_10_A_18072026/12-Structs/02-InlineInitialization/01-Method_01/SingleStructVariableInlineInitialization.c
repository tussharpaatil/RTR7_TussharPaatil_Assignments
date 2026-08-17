// Program Name : SingleStructVariableInlineInitialization.c

#include <stdio.h>

// Defining Struct
typedef struct
{
	double double_number;
	int integer_number;
	float float_number;
	char ch;
} MyData;

MyData data = { 23.3233, 24, 3.5f, 'T' }; // Inline Initialization Of Struct Variable 'data; of type 'struct MyData'

int main(void)
{
	// Code
	// Displaying Values Of The Data Members Of 'struct MyData'
	printf("\n===================================================================\n");
	printf("Data Members Of 'struct MyData' Are : \n\n");
	printf("double_number = %lf\n", data.double_number);
	printf("integer_number = %d\n", data.integer_number);
	printf("float_number = %.2f\n", data.float_number);
	printf("ch = %c\n", data.ch);

	return (0);
}
