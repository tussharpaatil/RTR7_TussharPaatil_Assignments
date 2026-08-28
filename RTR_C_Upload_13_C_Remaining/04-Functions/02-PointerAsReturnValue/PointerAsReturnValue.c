// Program Name : PointerAsReturnValue.c

#include <stdio.h>
#include <stdlib.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	// Function Declarations
	char* ReplaceVowelsWithHashSymbol(char *);

	// Variable Declarations
	char string[MAX_STRING_LENGTH];
	char* replaced_string = NULL;

	// Code
	printf("\n===========================================================================================\n");
	printf("Enter A String : ");
	gets_s(string, MAX_STRING_LENGTH);

	replaced_string = ReplaceVowelsWithHashSymbol(string);
	if (replaced_string == NULL)
	{
		printf("ReplaceVowelsWithHashSymbol() Function Has Failed !!! Exitting Now ...\n\n");
		exit(0);
	}

	printf("\n===========================================================================================\n");
	printf("Replaced String Is : \n\n");
	printf("%s\n\n", replaced_string);

	if (replaced_string)
	{
		free(replaced_string);
		replaced_string = NULL;
	}

	return (0);
}

char* ReplaceVowelsWithHashSymbol(char* string)
{
	// Function Prototype
	void MyStrcpy(char*, char*);
	int MyStrlen(char*);

	// Variable Declarations
	char* new_string = NULL;
	int counter;

	// Code
	new_string = (char*)malloc(MyStrlen(string) * sizeof(char));
	if (new_string == NULL)
	{
		printf("Could Not Allocate Memory For New String !!!\n\n");
		return (NULL);
	}

	MyStrcpy(new_string, string);
	for (counter = 0; counter < MyStrlen(new_string); counter++)
	{
		switch (new_string[counter])
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
			new_string[counter] = '#';
			break;
		default:
			break;
		}
	}

	return(new_string);
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

int MyStrlen(char *string)
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
	return(string_length);
}
