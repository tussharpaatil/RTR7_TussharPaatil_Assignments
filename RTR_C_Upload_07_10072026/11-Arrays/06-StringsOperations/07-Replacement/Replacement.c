// Prorgam Name : Replacement.c
// **** This Program Replaces All Vowels In The Input String With The * (asterisk) Symbol ****
// **** For Example, Original String 'Dr. Vijay Dattatray Gokhale ASTROMEDICOMP'
// Will Become 'Dr. V*j*y D*tt*a*tr*y G*kh*l* *STR*M*D*C*MP'

#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	// Function Prototype
	int MyStrlen(char[]);
	void MyStrcpy(char[], char[]);

	// Variable Declarations
	char characterArray_Original[MAX_STRING_LENGTH], characterArray_VowelsReplaced[MAX_STRING_LENGTH]; // A Character Array Is A String
	int countStringLength;
	int counter;

	// Code
	
	// ***** String Input ******
	printf("\n======================================\n");
	printf("Enter A String : \n\n");
	gets_s(characterArray_Original, MAX_STRING_LENGTH);

	// ***** String Output ******
	MyStrcpy(characterArray_VowelsReplaced, characterArray_Original);

	countStringLength = MyStrlen(characterArray_VowelsReplaced);

	for (counter = 0; counter < countStringLength; counter++)
	{
		switch (characterArray_VowelsReplaced[counter])
		{
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
			characterArray_VowelsReplaced[counter] = '*';
			break;
		default:
			break;
		}
	}

	// String Output
	printf("\n========================================\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", characterArray_Original);

	printf("\n========================================\n");
	printf("String After Replacement Of Vowels By * Is : \n\n");
	printf("%s\n", characterArray_VowelsReplaced);

	return (0);
}

int MyStrlen(char string[])
{
	// Variable Declarations
	int counter = 0;
	int string_length = 0;

	// Code
	// ***** Determining Exact Length Of The String, By Detecting The First Occurence Of Null-Terminating Character ( \0 ) ******
	for (counter = 0; counter < MAX_STRING_LENGTH; counter++)
	{
		if (string[counter] == '\0')
			break;
		else
			string_length++;
	}
	return (string_length);
}

void MyStrcpy(char string_destination[], char string_source[])
{
	// Function Prototype
	int MyStrlen(char[]);

	// Variable Declarations
	int countStringLength = 0;
	int counter;

	// Code
	countStringLength = MyStrlen(string_source);
	for (counter = 0; counter < countStringLength; counter++)
		string_destination[counter] = string_source[counter];

	string_destination = '\0';
}
