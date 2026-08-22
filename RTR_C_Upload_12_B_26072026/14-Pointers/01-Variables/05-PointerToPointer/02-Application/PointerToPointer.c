// Program Name : PointerToPointer.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int number;
	int *ptr = NULL;
	int **pptr = NULL; // Declaration Method 1 :- **pptr Is A Variable Of Type 'int'

	// Code
	number = 10;

	printf("\n===============================================================\n");

	printf(" **************** Before ptr = &num ********************\n\n");
	printf("Value Of 'number'                          = %d\n\n", number);
	printf("Address Of 'number'                        = %p\n\n", &number);
	printf("Value At Address Of 'number                = %d\n\n", *(&number));

	// Assigning address of variable 'number' to pointer variable 'ptr'
	// 'ptr' now contains address of 'number'.... Hence, 'ptr' is SAME as '&number'

	ptr = &number;

	printf("\n================================================================\n");

	printf(" ********** After ptr = &number *************\n\n");
	printf("Value Of 'number'                    = %d\n\n", number);
	printf("Address Of 'number'                  = %p\n\n", ptr);
	printf("Value At Address Of 'number'         = %d\n\n", *ptr);

	// Assigning address of variable 'ptr' to pointer-to-pointer variable 'pptr'
	// 'pptr' now contains the address of 'ptr' which in turn contains the address of 'number' 
	// Hence, 'pptr' is SAME as '&ptr'
	// 'ptr' is SAME as '&number'
	// Hence, pptr = &ptr = &(&number)
	// If ptr = &number and *ptr = *(&number) = Value at address of 'number'
	// Then, pptr = &ptr an and *pptr = *(&ptr) = ptr = value at address of 'ptr' i.e. 'ptr' i.e. Address of 'number'
	// Then, **pptr = **(&ptr) = *(*(&ptr)) = *ptr = *(&number) = number = 10
	// Hence, number = *(&number) = *ptr = *(*pptr) = **pptr

	pptr = &ptr;
	
	printf("\n=================================================================\n");

	printf(" ****************** After pptr = &ptr ***************\n\n");
	printf("Value Of 'number'                            = %d\n\n", number);
	printf("Address of 'number' (ptr)                    = %p\n\n", ptr);
	printf("Address Of 'ptr' (pptr)                      = %p\n\n", pptr);
	printf("Value At Address Of 'ptr' (*pptr)            = %p\n\n", *pptr);
	printf("Value At Address Of 'number' (*ptr) (**pptr) = %d\n\n", **pptr);

	return (0);
}
