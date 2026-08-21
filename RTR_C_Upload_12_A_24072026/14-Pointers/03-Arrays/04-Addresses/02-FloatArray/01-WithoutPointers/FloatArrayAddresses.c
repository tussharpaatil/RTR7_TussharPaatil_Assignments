// Program Name : FloatArrayAddresses.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	float floatArray[10];
	int counter;

	// Code
	for (counter = 0; counter < 10; counter++)
		floatArray[counter] = (float)(counter + 1) * 1.2f;

	printf("\n============================================================\n");
	printf("Elements Of The Float Array : \n\n");
	for (counter = 0; counter < 10; counter++)
		printf("floatArray[%d] = %f\n", counter, floatArray[counter]);

	printf("\n============================================================\n");
	printf("Elements Of The Float Array : \n\n");
	for (counter = 0; counter < 10; counter++)
		printf("floatArray[%d] = %f    Address = %p\n", counter, floatArray[counter], &floatArray[counter]);

	printf("\n============================================================\n");

	return (0);
}
