// Program Name : IntegerArraysAsPointerParameters.c

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// Function Declarations
	void MultiplyArrayElementsByNumber(int *, int, int);

	// Variable Declaration
	int* integerArray = NULL;
	int number_of_elements;
	int counter, number;

	// Code
	printf("\n==================================================================================================\n");
	printf("Enter How Many Elements You Must In The Integer Array : ");
	scanf("%d", &number_of_elements);

	integerArray = (int*)malloc(number_of_elements * sizeof(int));
	if (integerArray == NULL)
	{
		printf("Memoery Allocation To 'integerArray' Has Failed !!! Exitting Now...\n\n");
		exit(0);
	}
	printf("\n==================================================================================================\n");
	printf("Enter %d Elements For The Integer Array : \n\n", number_of_elements);
	for (counter = 0; counter < number_of_elements; counter++)
		scanf("%d", &integerArray[counter]);

	// ******** One **********
	printf("Array Before Passing To Function MultiplyArrayElementsByNumber() : \n\n");
	for (counter = 0; counter < number_of_elements; counter++)
		printf("integerArray[%d] = %d\n", counter, integerArray[counter]);

	printf("\n==================================================================================================\n");
	printf("Enter The Number By Which You Want To Multiply Each Array Element : ");
	scanf("%d", &number);

	MultiplyArrayElementsByNumber(integerArray, number_of_elements, number);

	printf("\n==================================================================================================\n");
	printf("Array Returned By Function MultiplyArrayElementsByNumber() : \n\n");

	for (counter = 0; counter < number_of_elements; counter++)
		printf("integerArray[%d] = %d\n", counter, integerArray[counter]);

	if (integerArray)
	{
		free(integerArray);
		integerArray = NULL;
		printf("\n==================================================================================================\n");
		printf("Memory Allocated To 'integerArray' Has Been Successfully Freed !!!\n\n");
	}

	return (0);
}

void MultiplyArrayElementsByNumber(int* array, int countNumberOfElements, int number)
{
	// Variable Declarations
	int counter;

	// Code
	for (counter = 0; counter < countNumberOfElements; counter++)
		array[counter] = array[counter] * number;
}
