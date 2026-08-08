// Program Name : StringReverse.c

#include <stdio.h>
#include <string.h>		// For strrev()

#define MAX_STRING_LENGTH 512

int main(void)
{
	// Variable Declarations
	char characterArray_Original[MAX_STRING_LENGTH];	// A Character Array Is A String

	// Code

	// String Input
	printf("\n===================================================================\n");
	printf("Enter A String : \n\n");
	gets_s(characterArray_Original, MAX_STRING_LENGTH);

	// String Output
	printf("\n===================================================================\n");
	printf("The Original String Entered By You (i.e. : characterArray_Original[]') Is : \n\n");
	printf("%s\n", characterArray_Original);

	printf("\n===================================================================\n");
	printf("The Reversed String (i.e. : characterArray_Reverse[]') Is : \n\n");
	printf("%s\n", strrev(characterArray_Original));

	return (0);
}
