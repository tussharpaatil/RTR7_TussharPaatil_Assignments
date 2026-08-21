// Program Name : DoubleArrayAddresses.c
#include <stdio.h>

int main(void)
{
	// Variable Declarations
	double doubleArray[10];
	double *ptr_doubleArray = NULL;
	int counter;

	// Code
	for (counter = 0; counter < 10; counter++)
		doubleArray[counter] = (double)(counter + 1) * 1.222222;

	// *** Name Of Any Array Is Its Base Address ***
	// *** Hence, 'doubleArray' Is The Base Address Of Array doubleArray[] Or 'doubleArray' Is
	// The Address Of Element doubleArray[0] *****
	// *** Assigning Base Address Of Array 'doubleArray[]' To double Pointer 'ptr_doubleArray'

	ptr_doubleArray = doubleArray; // ptr_doubleArray = &doubleArray[0];

	printf("\n========================================================================\n");
	printf("Elements Of The double Array : \n\n");
	for (counter = 0; counter < 10; counter++)
		printf("doubleArray[%d] = %lf\n", counter, *(ptr_doubleArray + counter));

	printf("\n========================================================================\n");
	printf("Elements Of The double Array : \n\n");
	for (counter = 0; counter < 10; counter++)
		printf("doubleArray[%d] = %lf    Address = %p\n", counter, *(ptr_doubleArray + counter), (ptr_doubleArray + counter));

	printf("\n========================================================================\n");

	return (0);
}
