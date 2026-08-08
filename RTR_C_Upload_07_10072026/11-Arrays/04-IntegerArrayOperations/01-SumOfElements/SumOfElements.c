// Program Name : SumOfElements.c
#include <stdio.h>

#define NUMBER_ELEMENTS 10

int main(void)
{
	// Variable Declarations
	int intArray[NUMBER_ELEMENTS];
	int counter, number, addition = 0;

	// Code
	printf("\n================================================================================\n");
	printf("Enter Integer Elements For Array : \n\n");
	for (counter = 0; counter < NUMBER_ELEMENTS; counter++)
	{
		scanf("%d", &number);
		intArray[counter] = number;
	}

	for (counter = 0; counter < NUMBER_ELEMENTS; counter++)
	{
		addition = addition + intArray[counter];
	}

	printf("\n=================================================================================\n");
	printf("Sum Of All Elements Of Array = %d\n\n", addition);

	return (0);
}
