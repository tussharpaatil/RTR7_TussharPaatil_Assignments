// Program Name : StructAddresses.c

#include <stdio.h>

typedef struct
{
	int integer_number;
	float float_number;
	double double_number;
	char ch;
} MyData;

int main(void)
{
	// Variable Declarations
	MyData data;

	// Code
	// Assigning Data Values TO The Data Members Of 'struct MyData'
	data.integer_number = 24;
	data.float_number = 4.23f;
	data.double_number = 5.234234;
	data.ch = 'T';

	// Displaying Values Of The Data Members Of 'struct MyData'
	printf("\n==========================================================\n");
	printf("Data Members Of 'struct MyData' Are : \n\n");
	printf("integer_number = %d\n", data.integer_number);
	printf("float_number = %f\n", data.float_number);
	printf("double_number = %lf\n", data.double_number);
	printf("ch =  %c\n", data.ch);

	printf("\n==========================================================\n");
	printf("Addresses Of Data Members Of 'struct MyData' Are : \n\n");
	printf("'integer_number' Occupies Addresses From %p\n", &data.integer_number);
	printf("'float_number' Occupies Addresses From %p\n", &data.float_number);
	printf("'double_number' Occupies Addresses From %p\n", &data.double_number);
	printf("'ch' Occupies Addresses From %p\n", &data.ch);

	printf("Starting Address Of 'struct MyData' Variable 'data' = %p\n\n", &data);

	return (0);
}
