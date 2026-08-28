// Program Name : StringReverse.c

#include <stdio.h>
#include <stdlib.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	// Function Prototype
	void MyStrrev(char*, char*);
	int MyStrlen(char*);

	// Variable Declarations
	char *characterArray_Original = NULL, *characterArray_Reversed = NULL; // A character Array Is A String
	int original_string_length;

	// Code

	// String Input
	printf("\n==============================================================================================\n");
	characterArray_Original = (char*)malloc(MAX_STRING_LENGTH * sizeof(char));
	if (characterArray_Original == NULL)
	{
		printf("Memory Allocation For Original String Failed !!! Exitting Now... \n\n");
		exit(0);
	}

	printf("Enter A String : \n\n");
	gets_s(characterArray_Original, MAX_STRING_LENGTH);

	// String Reverse
	original_string_length = MyStrlen(characterArray_Original);
	characterArray_Reversed = (char*)malloc(original_string_length * sizeof(char));
	if (characterArray_Reversed == NULL)
	{
		printf("Memory Allocation For Reversed String Failed !!! Exitting Now...\n\n");
		exit(0);
	}
	
	MyStrrev(characterArray_Reversed, characterArray_Original);

	// String Input
	printf("\n==============================================================================================\n");
	printf("The Original String Entered By You (i.e. : characterArray_Original[]' Is : \n\n");
	printf("%s\n", characterArray_Original);

	printf("\n==============================================================================================\n");
	printf("The Reversed String (i.e. 'characterArray_Reversed[]' Is : \n\n");
	printf("%s\n", characterArray_Reversed);

	if (characterArray_Reversed)
	{
		free(characterArray_Reversed);
		characterArray_Reversed = NULL;
		printf("\n==============================================================================================\n");
		printf("Memory Allocated To Reversed String Has Successfully Freed !!!\n\n");
	}

	if (characterArray_Original)
	{
		free(characterArray_Original);
		characterArray_Original = NULL;
		printf("\n==============================================================================================\n");
		printf("Memory Allocated To Original String Has Been Successfully Freed !!!\n\n");
	}

	return (0);
}

void MyStrrev(char* string_destination, char* string_source)
{
	// Function Prototype
	int MyStrlen(char*);

	// Variable Declarations
	int countStringLength = 0;
	int i, j, length;

	// Code
	countStringLength = MyStrlen(string_source);

	// Array Indices Begin From 0, Hence, Last Index Will Always Be (Length - 1)
	length = countStringLength - 1;

	// We Need To Put The Character Which Is At Last Index Of 'string_source' To The First Index Of 'string_destination'
	// And Second-last character Of 'string_source' To The Second Character Of 'string_destination' and So on...

	for (i = 0, j = length; i < countStringLength, j >= 0; i++, j--)
	{
		*(string_destination + i) = *(string_source + j);
	}

	*(string_destination + i) = '\0';
}

int MyStrlen(char* string)
{
	// Variable Declarations
	int counter;
	int string_length = 0;

	// Code
	// *** Determining Exact Length Of The String, By Detecting The First Occurence Of Null-Terminating Character ( \0 ) ***
	for (counter = 0; counter < MAX_STRING_LENGTH; counter++)
	{
		if (string[counter] == '\0')
			break;
		else
			string_length++;
	}
	return (string_length);
}
