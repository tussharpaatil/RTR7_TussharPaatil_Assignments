// Program Name : CharArrayAddresses.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	char characterArray[10];
	int counter;

	// Code
	for (counter = 0; counter < 10; counter++)
		characterArray[counter] = (char)(counter + 65);

	printf("\n============================================================\n");
	printf("Elements Of The 'char' Array : \n\n");
	for (counter = 0; counter < 10; counter++)
		printf("characterArray[%d] = %c\n", counter, characterArray[counter]);

	printf("\n============================================================\n");
	printf("Elements Of The 'char' Array : \n\n");
	for (counter = 0; counter < 10; counter++)
		printf("characterArray[%d] = %c    Address = %p\n", counter, characterArray[counter], &characterArray[counter]);

	printf("\n============================================================\n");

	return (0);
}
