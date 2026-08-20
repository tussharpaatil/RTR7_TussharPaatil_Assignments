// Program Name : ConstantPointerToVariableInteger.c

#include <stdio.h>

int main(void)
{
	// Variable declarations
	int number = 5;
	int* const ptr = &number; // Read this line from right to left => "ptr is a constant (const) pointer (*) to integer (int)."

	// Code
	printf("\n====================================================\n");
	printf("Current Value Of 'number' = %d\n", number);
	printf("Current 'ptr' (Address of 'number') = %p\n", ptr);

	// The following line does NOT give error ... as we are modifying the value of the variable individually

	number++;
	printf("\n====================================================\n");
	printf("After number++, value of 'number' = %d\n", number);

	// The following line gives error and is hence commented out.
	// We cannot alter the 'ptr' value as 'ptr' is "a constant pointer to integer".
	// With respect to the pointer, the value it points to is not constant but the pointer itself is constant.
	// Uncomment it and see the error.
	
	// ptr++;

	// The following line does NOT give error 
	// We do not get error because we are changing the value at a constant pointer (Address)
	// The pointer is constant. The value to which the pointer points is NOT constant.
	(*ptr)++;

	printf("\n=====================================================\n");
	printf("After (*ptr)++, value of 'ptr' = %p\n", ptr);
	printf("Value at this 'ptr' = %d\n", *ptr);
	printf("\n=====================================================\n");

	return (0);
}

// CONCLUSION : 
// As "ptr" is a "constant pointer to a pointer variable integer" - We can change the value stored at address "ptr" but we cannot 
// change the 'ptr' (Address) itself.
// We can change the value of the variable (number) individually - who address is contained in "ptr"
// We can also change the "the value at address of ptr" - We can change the value of "number" with respect to "ptr" => (*ptr)++ is allowed.
// We cannot change the value of 'ptr' -> that is we cannot store in new address inside 'ptr' => so, ptr++ is NOT allowed