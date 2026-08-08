// Program Name : RemoveSpaces.c

#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	// Function Prototype
	int MyStrlen(char[]);
	void MyStrcpy(char[], char[]);

	// Variable Declarations
	char characterArray[MAX_STRING_LENGTH], characterArray_SpacesRemoved[MAX_STRING_LENGTH]; // A Character Array Is A String
	int countStringLength;
	int x, y;

	// Code
	
	// **** String Input *****
	printf("\n====================================\n");
	printf("Enter A String : \n\n");
	gets_s(characterArray, MAX_STRING_LENGTH);

	countStringLength = MyStrlen(characterArray);
	y = 0;
	for (x = 0; x < countStringLength; x++)
	{
		if (characterArray[x] == ' ')
			continue;
		else
		{
			characterArray_SpacesRemoved[y] = characterArray[x];
			y++;
		}
	}
	
	characterArray_SpacesRemoved[y] = '\0';

	// ***** String Output *****
	printf("\n====================================\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", characterArray);

	printf("\n====================================\n");
	printf("String After Removal Of Spaces Is : \n\n");
	printf("%s\n", characterArray_SpacesRemoved);

	return (0);
}

int MyStrlen(char string[])
{
	// Variable Declarations
	int y;
	int string_length = 0;

	// Code
	// ****** Determining Exact Length Of The String, By Detecting The First Occurence Of Null-Terminating Character ( \0 ) *****
	for (y = 0; y < MAX_STRING_LENGTH; y++)
	{
		if (string[y] == '\0')
			break;
		else
			string_length++;
	}
	return (string_length);
}
