// Program Name : StringLength.c

#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	// Variable Declarations
	char characterArray[MAX_STRING_LENGTH];	// A Character Array Is A String
	int countStringLength = 0;
	
	// Code
	
	// ******* String Output ********
	printf("\n=================================================================================\n");
	printf("Enter A String : \n\n");
	gets_s(characterArray, MAX_STRING_LENGTH);

	// ****** STRING OUTPUT ******
	printf("\n=================================================================================\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", characterArray);

	// ****** STRING OUTPUT *****
	countStringLength = strlen(characterArray);
	printf("Length Of String Is = %d Characters !!!\n\n", countStringLength);

	return (0);
}
