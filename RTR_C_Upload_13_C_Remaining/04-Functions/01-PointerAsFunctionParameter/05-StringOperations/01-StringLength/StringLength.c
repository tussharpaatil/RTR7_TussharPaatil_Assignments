// Program Name : StringLength.c

#include <stdio.h>
#include <stdlib.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	// Function Prototype
	int MyStrlen(char*);

	// Variable Declarations
	char* characterArray = NULL; // Character Array Can Be Represented By A char pointer To Mark The Base Address (char *)
	int countStringLength = 0;

	// Code
	printf("\n===========================================================================================\n");
	characterArray = (char*)malloc(MAX_STRING_LENGTH * sizeof(char));
	if (characterArray == NULL)
	{
		printf("Memory Allocated To Character Array Failed !!! Exitting Now...\n\n");
		exit(0);
	}

	// String Input 
	printf("Enter A String : \n\n");
	gets_s(characterArray, MAX_STRING_LENGTH);

	// String Output
	printf("\n===============================================================================\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", characterArray);

	// String Length
	printf("\n===============================================================================\n");
	countStringLength = MyStrlen(characterArray);
	printf("Length Of String Is = %d Characters !!!\n\n", countStringLength);

	if (characterArray)
	{
		free(characterArray);
		characterArray = NULL;
	}

	return (0);
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
		if (*(string + counter) == '\0')
			break;
		else
			string_length++;
	}
	return (string_length);
}
