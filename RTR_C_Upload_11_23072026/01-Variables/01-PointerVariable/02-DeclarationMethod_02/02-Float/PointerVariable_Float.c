// Program Name : POinterVariable_Float.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	float number;
	float* ptr = NULL; // Declaration Method 1: 'ptr' is a variable of type 'float*'

	// Code
	number = 4.235f;

	printf("\n\n");

	printf("******************** Before ptr = &number *******************\n\n");
	printf("Values Of 'number'		= %f\n\n", number);
	printf("Address Of 'number'		= %p\n\n", &number);
	printf("Value At Address Of 'number'	= %f\n\n", *(&number));

	// Assigning address of variable 'number' to pointer variable 'ptr'
	// 'ptr' now contrains address of 'number' ..... hence, 'ptr' is SAME as '&number'
	ptr = &number;

	printf("\n===========================================================\n\n");

	printf(" ***************** After ptr = &number ***********************\n\n");
	printf("Value Of 'number'		= %f\n\n", number);
	printf("Address Of 'number'		= %p\n\n", ptr);
	printf("Value At Address Of 'number'	= %f\n\n", *ptr);

	return (0);
}
