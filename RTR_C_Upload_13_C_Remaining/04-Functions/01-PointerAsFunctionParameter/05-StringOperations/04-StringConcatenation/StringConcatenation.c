// Program Name : StringConcatenation.c

#include <stdio.h>
#include <stdlib.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	// Function Prototype
	void MyStrcat(char *, char *);
	int MyStrlen(char *);

	// Variable Declarations
	char *characterArray_One = NULL, *characterArray_Two = NULL; // A Character Array Is A String

	// Code
	// String Input
	printf("\n===================================================================================================\n");
	characterArray_One = (char*)malloc(MAX_STRING_LENGTH * sizeof(char));
	if (characterArray_One == NULL)
	{
		printf("Memory Allocation To First String Failed !!! Exitting Now ... \n\n");
		exit(0);
	}

	printf("Enter First String : \n\n");
	gets_s(characterArray_One, MAX_STRING_LENGTH);
	printf("\n===================================================================================================\n");
	characterArray_Two = (char*)malloc(MAX_STRING_LENGTH * sizeof(char));
	if (characterArray_Two == NULL)
	{
		printf("Memory Allocation To First String Failed !!! Exitting Now... \n\n");
		exit(0);
	}
	
	printf("Enter Second String : \n\n");
	gets_s(characterArray_Two, MAX_STRING_LENGTH);

	// String Concat
	printf("\n===================================================================================================\n");
	printf("********** Before Concatenation ************");
	printf("\n===================================================================================================\n");
	printf("The Original First String Entered By You (i.e. 'characterArray_One[]' Is : \n\n");
	printf("%s\n\n", characterArray_One);

	printf("\n===================================================================================================\n");
	printf("The Original Second String Entered By You (i.e. 'characterArray_Two[]' Is : \n\n");
	printf("%s\n", characterArray_Two);

	MyStrcat(characterArray_One, characterArray_Two);

	printf("\n===================================================================================================\n");
	printf("********** After Concatenation ****************");
	printf("\n===================================================================================================\n");
	printf("'characterArray_One[]' Is : \n\n");
	printf("%s\n", characterArray_One);

	printf("\n===================================================================================================\n");
	printf("'characterArray_Two[]' Is : \n\n");
	printf("%s\n", characterArray_Two);

	if (characterArray_Two)
	{
		free(characterArray_Two);
		characterArray_Two = NULL;
		printf("\n===================================================================================================\n");
		printf("Memory Allocated To Second String Has Been Successfully Freed !!!\n\n");
	}

	if (characterArray_One)
	{
		free(characterArray_One);
		characterArray_One = NULL;
		printf("\n===================================================================================================\n");
		printf("Memory Allocated To First String Has Been Successfully Freed !!!\n\n");
	}

	return (0);
}

void MyStrcat(char* string_destination, char* string_source)
{
	// Function Prototype
	int MyStrlen(char*);

	// Variable Declarations
	int countStringLength_Source = 0, countStringLength_Destination = 0;
	int x, y;

	// Code
	countStringLength_Source = MyStrlen(string_source);
	countStringLength_Destination = MyStrlen(string_destination);

	// Array Indices Begin From 0, Hence, Last Valid Index Of Array Will Always be (Length - 1)
	// So, Concatenation Mus Begin From Index Number Equal To Length Of the Array 'string_destination'
	// We Need To Put The Character Which Is At First Index Of 'string_source' To The (Last Index + 1) Of 'string_destination'
	for (x = countStringLength_Destination, y = 0; y < countStringLength_Source; x++, y++)
	{
		*(string_destination + x) = *(string_source + y);
	}

	*(string_destination + x) = '\0';
}

int MyStrlen(char* string)
{
	// Variable Declarations
	int counter;
	int string_length = 0;

	// Code
	// *** Determining Exact Length Of The String, By Detecting The First Occurence Of Null-Terminating Character  ( \0 ) ***
	for (counter = 0; counter < MAX_STRING_LENGTH; counter++)
	{
		if (string[counter] == '\0')
			break;
		else
			string_length++;
	}
	return (string_length);
}
