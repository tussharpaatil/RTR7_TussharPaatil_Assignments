// Program Name : PointerVariable_Char.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	char character;
	char *ptr = NULL; // Declaration Method 1: '*ptr' is a variable of type 'char'

	// Code
	character = 'T';
	printf("\n\n");

	printf("******************** Before ptr = &number *******************\n\n");
	printf("Values Of 'character'		= %c\n\n", character);
	printf("Address Of 'character'		= %p\n\n", &character);
	printf("Value At Address Of 'character'	= %c\n\n", *(&character));

	// Assigning address of variable 'character' to pointer variable 'ptr'
	// 'ptr' now contrains address of 'character' ..... hence, 'ptr' is SAME as '&character'
	ptr = &character;

	printf("\n===========================================================\n\n");

	printf(" ***************** After ptr = &character ***********************\n\n");
	printf("Value Of 'character'		= %c\n\n", character);
	printf("Address Of 'character'		= %p\n\n", ptr);
	printf("Value At Address Of 'character'	= %c\n\n", *ptr);

	return (0);
}
