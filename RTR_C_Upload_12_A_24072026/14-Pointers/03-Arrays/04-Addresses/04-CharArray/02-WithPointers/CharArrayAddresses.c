// Program Name : CharArrayAddresses.c
#include <stdio.h>

int main(void)
{
	// Variable Declarations
	char characterArray[10];
	char *ptr_characterArray = NULL;
	int counter;

	// Code
	for (counter = 0; counter < 10; counter++)
		characterArray[counter] = (char)(counter + 65);

	// *** Name Of Any Array Is Its Base Address ***
	// *** Hence, 'characterArray' Is The Base Address Of Array characterArray[] Or 'characterArray' Is
	// The Address Of Element characterArray[0] *****
	// *** Assigning Base Address Of Array 'characterArray[]' To double Pointer 'ptr_characterArray'

	ptr_characterArray = characterArray; // ptr_characterArray = &characterArray[0];

	printf("\n========================================================================\n");
	printf("Elements Of The Character Array : \n\n");
	for (counter = 0; counter < 10; counter++)
		printf("characterArray[%d] = %c\n", counter, *(ptr_characterArray + counter));

	printf("\n========================================================================\n");
	printf("Elements Of The Character Array : \n\n");
	for (counter = 0; counter < 10; counter++)
		printf("characterArray[%d] = %c    Address = %p\n", counter, *(ptr_characterArray + counter), (ptr_characterArray + counter));

	printf("\n========================================================================\n");

	return (0);
}
