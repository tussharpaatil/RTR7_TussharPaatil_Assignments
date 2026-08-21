// Program Name : FloatArrayAddresses.c
#include <stdio.h>

int main(void)
{
	// Variable Declarations
	float floatArray[10];
	float *ptr_floatArray = NULL;
	int counter;

	// Code
	for (counter = 0; counter < 10; counter++)
		floatArray[counter] = (float)(counter + 1) * 1.2f;

	// *** Name Of Any Array Is Its Base Address ***
	// *** Hence, 'floatArray' Is The Base Address Of Array floatArray[] Or 'floatArray' Is
	// The Address Of Element floatArray[0] *****
	// *** Assigning Base Address Of Array 'floatArray[]' To Float Pointer 'ptr_floatArray'

	ptr_floatArray = floatArray; // ptr_floatArray = &floatArray[0];

	printf("\n========================================================================\n");
	printf("Elements Of The Float Array : \n\n");
	for (counter = 0; counter < 10; counter++)
		printf("floatArray[%d] = %f\n", counter, *(ptr_floatArray + counter));

	printf("\n========================================================================\n");
	printf("Elements Of The Float Array : \n\n");
	for (counter = 0; counter < 10; counter++)
		printf("floatArray[%d] = %f    Address = %p\n", counter, *(ptr_floatArray + counter), (ptr_floatArray + counter));

	printf("\n========================================================================\n");

	return (0);
}
