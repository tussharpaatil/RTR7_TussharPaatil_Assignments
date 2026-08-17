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

MyData data = { 6.2342, 24, 6.34f, 'T' };

int main(void)
{
	// Code
	// Displaying Values Of The Data Members Of 'struct MyData'
	printf("\n==================================================================\n");
	printf("Data Members Of 'struct MyData' Are : \n\n");
	printf("double_number = %lf\n", data.double_number);
	printf("integer_number = %d\n", data.integer_number);
	printf("float_number = %f\n", data.float_number);
	printf("ch = %c\n", data.ch);

	return (0);
}
