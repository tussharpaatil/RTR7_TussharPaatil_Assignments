// Program Name : IntegerArrayAddresses.c
#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int integerArray[10];
	int* ptr_integerArray = NULL;
	int counter;

	// Code
	for (counter = 0; counter < 10; counter++)
		integerArray[counter] = (counter + 1) * 6;

	// *** Name Of Any Array Is Its Base Address ***
	// *** Hence, 'integerArray' Is The Base Address Of Array integerArray[] Or 'integerArray' Is
	// The Address Of Element integerArray[0] *****
	// *** Assigning Base Address Of Array 'integerArray[]' To Integer Pointer 'ptr_integerArray'

	ptr_integerArray = integerArray; // ptr_integerArray = &integerArray[0];

	printf("\n========================================================================\n");
	printf("Elements Of The Integer Array : \n\n");
	for (counter = 0; counter < 10; counter++)
		printf("integerArray[%d] = %d\n", counter, *(ptr_integerArray + counter));
	
	printf("\n========================================================================\n");
	printf("Elements Of The Integer Array : \n\n");
	for (counter = 0; counter < 10; counter++)
		printf("integerArray[%d] = %d    Address = %p\n", counter, *(ptr_integerArray + counter), (ptr_integerArray + counter));

	printf("\n========================================================================\n");

	return (0);
}
