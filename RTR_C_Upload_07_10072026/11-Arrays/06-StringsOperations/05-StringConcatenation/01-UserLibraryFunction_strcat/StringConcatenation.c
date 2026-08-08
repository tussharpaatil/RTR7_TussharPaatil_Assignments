// Program Name : StringConcatenation.c

#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	// Variable Declarations
	char characterArray_One[MAX_STRING_LENGTH], characterArray_Two[MAX_STRING_LENGTH]; // A Character Array Is A String

	// Code
	
	// String Input
	printf("\n=======================================================\n");
	printf("Enter First String : \n\n");
	gets_s(characterArray_One, MAX_STRING_LENGTH);

	printf("\n=======================================================\n");
	printf("Enter Second String : \n\n");
	gets_s(characterArray_Two, MAX_STRING_LENGTH);

	// String Concat
	printf("\n=======================================================\n");
	printf("**** BEFORE CONCATENATION ******");
	printf("\n=======================================================\n");
	printf("The Original First String Entered By You (i.e. : 'characterArray_One[]' Is : \n\n");
	printf("%s\n", characterArray_One);

	strcat(characterArray_One, characterArray_Two);

	printf("\n=======================================================\n");
	printf("****** After Concatenation ******");
	printf("\n=======================================================\n");
	printf("'characterArray_One[]' Is : \n\n");
	printf("%s\n", characterArray_One);

	printf("=========================================================\n");
	printf("'characterArray_Two[]' Is : \n\n");
	printf("%s\n", characterArray_Two);

	return (0);
}
