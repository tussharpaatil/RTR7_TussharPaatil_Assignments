// Program Name : IntegerArrayAddresses.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int integerArray[10];
	int counter;

	// Code
	for (counter = 0; counter < 10; counter++)
		integerArray[counter] = (counter + 1) * 5;

	printf("\n============================================================\n");
	printf("Elements Of The Integer Array : \n\n");
	for (counter = 0; counter < 10; counter++)
		printf("integerArray[%d] = %d\n", counter, integerArray[counter]);

	printf("\n============================================================\n");
	printf("Elements Of The Integer Array : \n\n");
	for (counter = 0; counter < 10; counter++)
		printf("integerArray[%d] = %d    Address = %p\n", counter, integerArray[counter], &integerArray[counter]);

	printf("\n============================================================\n");

	return (0);
}
