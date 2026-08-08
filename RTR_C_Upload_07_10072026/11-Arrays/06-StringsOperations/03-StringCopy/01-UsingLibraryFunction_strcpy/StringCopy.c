// Program Name : StringCopy.c

#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	// Variable Declarations
	char characterArray_Original[MAX_STRING_LENGTH], characterArray_Copy[MAX_STRING_LENGTH]; // A Character Array Is A String

	// Code

	// ***** String Input *****
	printf("\n===========================================================================\n");
	printf("Enter A String : \n\n");
	gets_s(characterArray_Original, MAX_STRING_LENGTH);


	// String Copy 
	strcpy(characterArray_Copy, characterArray_Original);

	// String Output
	printf("\n===========================================================================\n");
	printf("The Original String Entered By You (i.e. : 'characterArray_Original[]') Is : \n\n");
	printf("%s\n", characterArray_Original);

	printf("\n===========================================================================\n");
	printf("The Copied String (i.e. : 'characterArray[]') Is : \n\n");
	printf("%s\n", characterArray_Copy);

	return (0);
}
