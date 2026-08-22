// Program Name : SwapNumbersWithPointers.c

#include <stdio.h>

int main(void)
{
	// Function Declarations
	void SwapNumbers(int*, int*);

	// Variable Declaration
	int a, b;

	// Code
	printf("\n================================================\n");
	printf("Enter Value For 'A' : ");
	scanf("%d", &a);

	printf("\n================================================\n");
	printf("Enter Value For 'B' : ");
	scanf("%d", &b);

	printf("\n================================================\n");
	printf("******* Before Swapping 'This is in main()' *******\n\n");
	printf("Value Of 'A' = %d\n\n", a);
	printf("Value Of 'B' = %d\n\n", b);

	SwapNumbers(&a, &b); // *** Arguments Passed 'By Reference / Address' ***

	printf("\n================================================\n");
	printf("********* After Swapping 'This is in main()' ******* \n\n");
	printf("Value Of 'A'  = %d\n\n", a);
	printf("Value Of 'B'  = %d\n\n", b);

	return (0);
}

// Address Of 'a' is copied into 'x' and Address of 'b' is copied into 'y'... So, '&a' and 'x' are pointing to ONE and 
// SAME Address and '&b' and 'y' are pointing to ONE and the SAME Address....
// Swapping takes place between 'value at address of x' (value at &a i.e. : 'a') and 'value at address of y' (value at &b i.e. : 'b')...
// Hence, Swapping in this case takes place between '*x' and '*y' as well as between 'a' and 'b'//

void SwapNumbers(int* x, int* y)
{
	// Variable Declarations
	int temp;

	// Code
	printf("\n=================================================\n");
	printf("******** Before Swapping 'This is in SwapNumbers()' ************\n\n");
	printf("Value Of 'X' = %d\n\n", *x);
	printf("Value Of 'Y' = %d\n\n", *y);

	temp = *x;
	*x = *y;
	*y = temp;

	printf("\n=================================================\n");
	printf("********* After Swapping 'This is in SwapNumbers()' ***********\n\n");
	printf("Value Of 'X'  = %d\n\n", *x);
	printf("Value Of 'Y'  = %d\n\n", *y);
}
