// Program Name : StringCopy.c

#include <stdio.h>
#include <stdlib.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	// Function Prototype
	void MyStrcpy(char*, char*);
	int MyStrlen(char*);

	// Variable Declarations
	char *characterArray_Original = NULL, *characterArray_Copy = NULL; // A Character Array Is A String
	int original_string_length;

	// Code

	// String Input
	printf("\n==================================================================================================\n");
	characterArray_Original = (char*)malloc(MAX_STRING_LENGTH * sizeof(char));
	if (characterArray_Original == NULL)
	{
		printf("Memory Allocation For Original String Failed !!! Exitting Now ...\n\n");
		exit(0);
	}

	printf("Enter A String : \n\n");
	gets_s(characterArray_Original, MAX_STRING_LENGTH);

	original_string_length = MyStrlen(characterArray_Original);
	characterArray_Copy = (char*)malloc(original_string_length * sizeof(char));
	if (characterArray_Copy == NULL)
	{
		printf("Memory Allocation For Copied String Failed !!! Exiting Now...\n\n");
		exit(0);
	}

	// String Copy
	MyStrcpy(characterArray_Copy, characterArray_Original);

	// String Output
	printf("\n==================================================================================================\n");
	printf("The Original String Entered By You (i.e. : characterArray_Original) Is : \n\n");
	printf("%s\n", characterArray_Original);

	printf("\n==================================================================================================\n");
	printf("The Copied String (i.e. characterArray_Copy) Is : \n\n");
	printf("%s\n", characterArray_Copy);

	if (characterArray_Copy)
	{
		free(characterArray_Copy);
		characterArray_Copy = NULL;
		printf("Memory Allocated For Copied String Has Been Successfully Freed !!!\n\n");
	}

	if (characterArray_Original)
	{
		free(characterArray_Original);
		characterArray_Original = NULL;
		printf("\n==================================================================================================\n");
		printf("Memory Allocated For Original String Has Been Successfully Freed !!!\n\n");
	}

	return (0);
}

void MyStrcpy(char* string_destination, char* string_source)
{
	// Function Prototype
	int MyStrlen(char*);

	// Variable Declarations
	int countStringLength = 0;
	int counter;

	// Code
	countStringLength = MyStrlen(string_source);
	for (counter = 0; counter < countStringLength; counter++)
		*(string_destination + counter) = *(string_source + counter);

	*(string_destination + counter) = '\0';
}

int MyStrlen(char* string)
{
	// Variable Declarations
	int counter;
	int string_length = 0;

	// Code
	// *** Determining Exact length Of the String, By Detecting The First Occurence Of Null-Terminating Character ( \0 ) ****
	for (counter = 0; counter < MAX_STRING_LENGTH; counter++)
	{
		if (string[counter] == '\0')
			break;
		else
			string_length++;
	}
	return (string_length);
}
