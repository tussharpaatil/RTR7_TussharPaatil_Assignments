// Program Name : BracketsAndPointerOperations.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int number;
	int* ptr = NULL;
	int answer;

	// Code
	number = 5;
	ptr = &number;

	printf("\n==================================================\n");
	printf("     number        = %d\n", number);
	printf("     &number       = %p\n", &number);
	printf("     *(&number)    = %d\n", *(&number));
	printf("     ptr           = %p\n", ptr);
	printf("     *ptr          = %d\n", *ptr);

	printf("\n===================================================\n");

	// Add 10 to 'ptr' which is the address of 'number'
	// Hence, 10 will be added to the address of 'number' and the resultant address will be displayed
	printf("Answer Of (ptr + 10)     = %p\n", (ptr + 10));

	// Add 10 to 'ptr' which is the address of 'number' and give value at the new address....
	// Hence, 10 will be added to the address of 'number' and the value at resultant address will be displayed ...
	printf("Answer Of *(ptr + 10)    = %p\n", *(ptr + 10));

	// Add 10 to '*ptr' which is the value at address of 'number' (i.e. : 'number' i.e. 5) and give new value without any change in any address..
	// Hence, will be added to the '*ptr'  (number = 5) and the resultant value will be given (*ptr + 10) = (number + 10) = (5 + 10) = 15...
	printf("Answer Of (*ptr + 10)    = %d\n\n", (*ptr + 10));

	// *** Associativity Of * (Value At address) AND ++ AND -- Operators Is From Right To Left ***

	// (Right To Left) Consider value *ptr .... Pre-increment *ptr ... That is, value at address 'ptr' i.e. *ptr is pre-incremented (++*ptr)
	++*ptr; // *ptr is pre-incremented ... *ptr is 5... after execution of this statement... *ptr = 6
	printf("Answer Of ++*ptr : %d\n", *ptr); // Brackets not necessary for pre-imcrement / pre-decrement

	// ( Right To Left) Post-increment value *ptr... That is, value at address 'ptr' i.e. *ptr is post-incremented (*ptr)++
	ptr = &number;
	(*ptr)++;  // Correcct method of post-incrementing a value using pointer.... *ptr is 6.... at this statement *ptr is post-incremented (*ptr)++
	printf("Answer Of (*ptr)++ : %d\n\n", *ptr); //Brackets are necessary for post-increment / post-decrement

	return (0);
}
