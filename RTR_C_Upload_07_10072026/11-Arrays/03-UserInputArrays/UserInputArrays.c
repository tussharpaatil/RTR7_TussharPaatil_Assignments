// Program Name : UserInputArrays.c

#include <stdio.h>

// Macro Constants Used AS Array Size In Subscript And AS Array Length.
// Hence, This Program's Arrays Sizes Can Be Simply Changed By Changing These Following 3 Global Macro Constant Values,
// Before Compiling, Linking And Executing The Program. !!!!

#define INT_ARRAY_NUMBER_OF_ELEMENTS 10
#define FLOAT_ARRAY_NUMBER_OF_ELEMENTS 5
#define CHAR_ARRAY_NUMBER_OF_ELEMENTS 16

int main(void)
{
	// Variable Declarations
	int intArray[INT_ARRAY_NUMBER_OF_ELEMENTS];
	float floatArray[FLOAT_ARRAY_NUMBER_OF_ELEMENTS];
	char charArray[CHAR_ARRAY_NUMBER_OF_ELEMENTS];
	int counter, number;

	// Code

	// ***************** Array Elements Input ******************
	printf("\n================================================================================\n");
	printf("Enter Elements For 'Integer' Array : \n");
	for (counter = 0; counter < INT_ARRAY_NUMBER_OF_ELEMENTS; counter++)
	{
		scanf("%d", &intArray[counter]);
	}

	printf("\n=================================================================================\n");
	printf("Enter ELements for 'Floating-point' Array : \n");
	for (counter = 0; counter < FLOAT_ARRAY_NUMBER_OF_ELEMENTS; counter++)
	{
		scanf("%f", &floatArray[counter]);
	}

	printf("\n=================================================================================\n");
	printf("Enter Elements For 'Character' Array : \n");
	for (counter = 0; counter < CHAR_ARRAY_NUMBER_OF_ELEMENTS; counter++)
	{
		charArray[counter] = getch();
		printf("%c\n", charArray[counter]);
	}

	// ******************* Array Elements Output ******************
	printf("\n==================================================================================\n");
	printf("Integer Array Entered By You : \n\n");
	for (counter = 0; counter < INT_ARRAY_NUMBER_OF_ELEMENTS; counter++)
	{
		printf("%d\n", intArray[counter]);
	}

	printf("\n==================================================================================\n");
	printf("Float Array Entered By You : \n\n");
	for (counter = 0; counter < FLOAT_ARRAY_NUMBER_OF_ELEMENTS; counter++)
	{
		printf("%f\n", floatArray[counter]);
	}

	return (0);
}
