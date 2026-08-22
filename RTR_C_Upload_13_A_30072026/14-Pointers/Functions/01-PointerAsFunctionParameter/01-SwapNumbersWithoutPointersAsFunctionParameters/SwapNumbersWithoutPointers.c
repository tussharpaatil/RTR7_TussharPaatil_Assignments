// Program Name : SwapNumbersWithoutPointers.c

#include <stdio.h>

int main(void)
{
	// Function Declarations
	void SwapNumbers(int, int);

	// Variable Declarations
	int x, y;

	// Code
	printf("\n=============================================\n");
	printf("Enter Value For 'X' : ");
	scanf("%d", &x);

	printf("\n=============================================\n");
	printf("Enter Value For 'Y' : ");
	scanf("%d", &y);

	printf("\n=============================================\n");
	printf("**** Before Swapping In main() ******\n\n");
	printf("Value Of 'X' = %d\n\n", x);
	printf("Value Of 'Y' = %d\n\n", y);

	SwapNumbers(x, y); // *** Arguments Passed 'By Value' *****

	printf("\n=============================================\n");
	printf("**** After Swapping In main() ******\n\n");
	printf("Value Of 'X' = %d\n\n", x);
	printf("Value Of 'Y' = %d\n\n", y);

	return (0);
}

void SwapNumbers(int i, int j) // Value Of 'x' is copied into 'i' and value of 'y' is copied into 'j'...
// Swappping takes place between 'i' and 'j', not between 'x' and 'y'....
{
	// Variable Declarations
	int temp;

	// Code
	printf("\n=============================================\n");
	printf("**** Before Swapping Inside SwapNumbers() Function ***** \n\n");
	printf("Value Of 'I' = %d\n\n", i);
	printf("Value Of 'J' = %d\n\n", j);

	temp = i;
	i = j;
	j = temp;
	printf("\n=============================================\n");
	printf("**** After Swapping Inside SwapNumbers() Function ***** \n\n");
	printf("Value Of 'I' = %d\n\n", i);
	printf("Value Of 'J' = %d\n\n", j);
}
