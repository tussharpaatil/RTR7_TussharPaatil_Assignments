// Program Name : StringLength.c

#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	// Function Prototype
	int MyStelen(char[]);

	// Variable Declarations
	char characterArray[MAX_STRING_LENGTH]; // A Character Is A String
	int countStringLength = 0;

	// Code

	// ****** STRING OUTPUT *****
	printf("\n===========================================================\n");
	printf("Enter A String : \n\n");
	gets_s(characterArray, MAX_STRING_LENGTH);

	// ****** STRING OUTPUT ******
	printf("\n===========================================================\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", characterArray);

	// ****** STRING OUTPUT ******
	printf("\n===========================================================\n");
	countStringLength = MyStrlen(characterArray);
	printf("Length Of String Is  = %d Characters !!! \n\n", countStringLength);

	return (0);
}

int MyStrlen(char string[])
{
	// Variable Declarations
	int counter;
	int string_length = 0;

	// Code
	// ***** Determining Exact Length Of The String, By Detecting THe First Occurence Of Null-Terminating Character ( \0 ) *****
	for (counter = 0; counter < MAX_STRING_LENGTH; counter++)
	{
		if (string[counter] == '\0')
			break;
		else
			string_length++;
	}

	return (string_length);
}

