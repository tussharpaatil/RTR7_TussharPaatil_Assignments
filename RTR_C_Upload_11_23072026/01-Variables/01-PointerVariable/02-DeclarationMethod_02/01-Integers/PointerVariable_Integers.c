// Program Name : PointerVariable_Integers.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int number;
	int* ptr = NULL; // Declaration Method 1: 'ptr' is a variable of type 'int*'

	// Code
	number = 12;

	printf("\n\n");

	printf("******************** Before ptr = &number *******************\n\n");
	printf("Values Of 'number'		= %d\n\n", number);
	printf("Address Of 'number'		= %p\n\n", &number);
	printf("Value At Address Of 'number'	= %d\n\n", *(&number));

	// Assigning address of variable 'number' to pointer variable 'ptr'
	// 'ptr' now contrains address of 'number' ..... hence, 'ptr' is SAME as '&number'
	ptr = &number;
	
	printf("\n===========================================================\n\n");

	printf(" ***************** After ptr = &number ***********************\n\n");
	printf("Value Of 'number'		= %d\n\n", number);
	printf("Address Of 'number'		= %p\n\n", ptr);
	printf("Value At Address Of 'number'	= %d\n\n", *ptr);

	return (0);
}
