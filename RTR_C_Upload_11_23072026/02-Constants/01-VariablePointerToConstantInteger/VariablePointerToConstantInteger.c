// Program Name : VariablePointerToConstantInteger.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int number = 5;
	const int* ptr = NULL; // Read this line from right to left => "ptr is a pointer (*) to integer (int) constant (const).

	// Code
	ptr = &number;
	printf("\n==========================================================\n");
	printf("Current Value Of 'number' = %d\n", number);
	printf("Current 'ptr' (Address Of 'number') = %p\n", ptr);

	// The following line does NOT give error... as we are modifying the vlue of the variable individually
	number++;
	printf("\n==========================================================\n");
	printf("After number++, value of 'number' = %d\n", number);

	// The following line gives error and is hence commented out. 
	// We cannot alter the value stored in "A pointer to constant integer"
	// With respect to the pointer, the value it points to should be constant. 
	// Uncomment it and see the error.

	// (*ptr)++;
	/* When uncommented gives - 
	VariablePointerToConstantInteger.c
	VariablePointerToConstantInteger.c(27): error C2166: l-value specifies const object
	*/

	// The following line does NOT give error
	// We do not get error because we are changing the pointer (address).
	// The pointer is not constant. The value to which the pointer points is constant.

	ptr++;

	printf("\n==========================================================\n");
	printf("After ptr++, value of 'ptr' = %p\n", ptr);
	printf("Value at this new 'ptr' = %d\n", *ptr);
	printf("\n==========================================================\n");
	return (0);
}

// CONCLUSION : 
// As "ptr" is a "variable pointer to constant integer" - We can change the value of pointer "ptr".
// We can change the value of the variable (number) individually - whose address is contained in "ptr"
// So in short, we cannot change "the value at address of ptr" - we cannot change the value of "number" with respect to 
// "ptr" => (*ptr)++ is NOT Allowed
// But, we can change the address 'ptr' itself => So, ptr++ is allowed.