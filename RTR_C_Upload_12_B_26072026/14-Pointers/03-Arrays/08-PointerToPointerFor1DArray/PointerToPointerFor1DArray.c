// Program Name : PointerToPointerFor1DArray.c

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	void MyAlloc(int** ptr, unsigned int numberOfElements);

	// Variable Declarations
	int *ptrintegerArray = NULL;
	unsigned int number_of_elements;
	int counter;

	// Code 
	printf("\n=================================================================\n");
	printf("How Many Elements You Want In Integer Array ? \n\n");
	scanf("%u", &number_of_elements);

	printf("\n=================================================================\n");
	MyAlloc(&ptrintegerArray, number_of_elements);

	printf("Enter %u Elements To Fill Up Ypur Integer Array : \n\n", number_of_elements);
	for (counter = 0; counter < number_of_elements; counter++)
		scanf("%d", &ptrintegerArray[counter]);

	printf("\n=================================================================\n");
	printf("The %u Elements Entered By You In The Integer Array : \n\n", number_of_elements);

	for (counter = 0; counter < number_of_elements; counter++)
		printf("%u\n", ptrintegerArray[counter]);

	printf("\n=================================================================\n");
	if (ptrintegerArray)
	{
		free(ptrintegerArray);
		ptrintegerArray = NULL;
		printf("Memory Allocated Has Now Been Successfully Freed !!!\n\n");
	}

	return (0);
}

void MyAlloc(int** ptr, unsigned int numberOfElements)
{
	// Code
	*ptr = (int*)malloc(numberOfElements * sizeof(int));
	if (NULL == *ptr)
	{
		printf("Could Not Allocate Memory !!! Exitting Now... \n\n");
		exit(0);
	}

	printf("MyAlloc() Has Successfully Allocated %zu Bytes For Integer Array !!!\n\n", (numberOfElements * sizeof(int)));
}
