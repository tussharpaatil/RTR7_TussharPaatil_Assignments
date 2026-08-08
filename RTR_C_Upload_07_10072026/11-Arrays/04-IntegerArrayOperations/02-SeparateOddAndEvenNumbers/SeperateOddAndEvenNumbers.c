// Program Name : SeperateOddAndEvenNumbers.c

#include <stdio.h>

#define NUMBER_ELEMENTS 10

int main(void)
{
	// Variable Declarations
	int intArray[NUMBER_ELEMENTS];
	int counter, number, addition = 0;

	// Code
	printf("\n===========================================================================================\n");

	// ******* Array Elements Input ********
	printf("Enter Integer Elements For Array : \n\n");
	for (counter = 0; counter < NUMBER_ELEMENTS; counter++)
	{
		scanf("%d", &number);
		intArray[counter] = number;
	}

	// ******* Seperating Out Even Numbers From Array Elements ******
	printf("\n==============================================================================================\n");
	printf("Enter Numbers Amongst The Array Elements Are : \n\n");
	for (counter = 0; counter < NUMBER_ELEMENTS; counter++)
	{
		if ((intArray[counter] % 2) == 0)
			printf("%d\n", intArray[counter]);
	}

	// ***** Seperating Out Odd Numbers From Array Elements ******
	printf("\n=============================================================================================\n");
	printf("Odd Numbers Amongst The Array Elements Are : \n\n");
	for (counter = 0; counter < NUMBER_ELEMENTS; counter++)
	{
		if ((intArray[counter] % 2) != 0)
			printf("%d\n", intArray[counter]);
	}

	return (0);
}
