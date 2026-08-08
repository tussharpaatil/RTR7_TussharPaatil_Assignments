// Program Name : StringCopy.c

#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	// Function Prototype
	void MyStrcpy(char[], char[]);

	// Variable Declarations
	char characterArray_Original[MAX_STRING_LENGTH], characterArray_Copy[MAX_STRING_LENGTH]; // A Character Array Is A String

	// Code

	// String Input "
	printf("\n================================================================================\n");
	printf("Enter A String : \n\n");
	gets_s(characterArray_Original, MAX_STRING_LENGTH);

	// String Copy
	MyStrcpy(characterArray_Copy, characterArray_Original);

	// String Output
	printf("\n================================================================================\n");
	printf("The Original String Entered By You (i.e. 'characterArray_Original[]') Is : \n\n");
	printf("%s\n", characterArray_Original);

	printf("\n================================================================================\n");
	printf("The Copied String (i.e. : 'characterArray_Copy[]' Is : \n\n");
	printf("%s\n", characterArray_Copy);

	return (0); 
}

void MyStrcpy(char string_destination[], char string_source[])
{
	// Function Prototype
	int MyStelen(char[]);

	// Variable Declarations
	int countStringLength = 0;
	int counter;

	// Code
	countStringLength = MyStrlen(string_source);
	for (counter = 0; counter < countStringLength; counter++)
		string_destination[counter] = string_source[counter];

	string_destination[counter] = '\0';
}

int MyStrlen(char string[])
{
	// Variable Declarations
	int counter;
	int string_length = 0;

	// Code
	// *** Determining Exact Length Of The String, By Detecting The First Occurence Of Null_Terminating Character ( \0 ) ****
	for (counter = 0; counter < MAX_STRING_LENGTH; counter++)
	{
		if (string[counter] == '\0')
			break;
		else
			string_length++;
	}
	return (string_length);
}
