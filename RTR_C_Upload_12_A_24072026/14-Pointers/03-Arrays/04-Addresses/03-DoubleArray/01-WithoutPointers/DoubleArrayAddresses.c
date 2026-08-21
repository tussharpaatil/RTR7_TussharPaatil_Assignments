// Program Name : DoubleArrayAddresses.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	double doubleArray[10];
	int counter;

	// Code
	for (counter = 0; counter < 10; counter++)
		doubleArray[counter] = (double)(counter + 1) * 3.11122;

	printf("\n============================================================\n");
	printf("Elements Of The 'double' Array : \n\n");
	for (counter = 0; counter < 10; counter++)
		printf("doubleArray[%d] = %lf\n", counter, doubleArray[counter]);

	printf("\n============================================================\n");
	printf("Elements Of The 'double' Array : \n\n");
	for (counter = 0; counter < 10; counter++)
		printf("doubleArray[%d] = %lf    Address = %p\n", counter, doubleArray[counter], &doubleArray[counter]);

	printf("\n============================================================\n");

	return (0);
}
