// Program Name : SingleStructVariableInitialization.c

#include <stdio.h>

int main(void)
{
	// Defining Struct 
	struct MyData
	{
		double double_number;
		int integer_number;
		float float_number;
		char ch;
	} data = { 3.122, 24, 8.23f, 'P' };

	// Displaying Values Of The Data Members Of 'struct MyData'
	printf("\n================================================================\n");
	printf("Data Members Of 'struct MyData' Are : \n\n");
	printf("double_number = %.3lf\n", data.double_number);
	printf("integer_number = %d\n", data.integer_number);
	printf("float_number = %.2f\n", data.float_number);
	printf("ch = %c\n", data.ch);

	return (0);
}