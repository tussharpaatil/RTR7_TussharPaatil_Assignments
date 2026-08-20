// Program Name : PointerCopy.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int number;
	int *ptr = NULL;
	int* copy_ptr = NULL;

	// Code
	number = 6;
	ptr = &number;

	printf("\n===========================================================================\n");
	printf("*************************** Before copy_ptr = ptr ***************************\n");
	printf("   number          = %d\n", number);
	printf("   &number         = %p\n", &number);
	printf("   *(&number)      = %d\n", *(&number));
	printf("   ptr             = %p\n", ptr);
	printf("   *ptr            = %d\n", *ptr);

	// 'ptr' is an integer pointer variable... That it can hold the address of any integer variable only.
	// 'copy_ptr' is another integer pointer variable
	// If ptr = &number ... 'ptr' will contain address address of integer variable 'number'
	// If 'ptr' is assigned to 'copy_ptr', 'copy_ptr' will also contain address of integer variable 'number' 
	// Hence, Now, both 'ptr' and 'copy_ptr' will point to 'number'...
	
	copy_ptr = ptr; // copy_ptr = ptr = &number

	printf("\n============================================================================\n");
	printf("*************************** After copy_ptr = ptr *****************************\n");
	printf("   number       = %d\n", number);
	printf("   &number      = %p\n", &number);
	printf("   *(&number)   = %d\n", *(&number));
	printf("   ptr          = %p\n", ptr);
	printf("   *ptr         = %d\n", *ptr);
	printf("   copy_ptr     = %p\n", copy_ptr);
	printf("   *copy_ptr    = %d\n", *copy_ptr);

	return (0);
}
