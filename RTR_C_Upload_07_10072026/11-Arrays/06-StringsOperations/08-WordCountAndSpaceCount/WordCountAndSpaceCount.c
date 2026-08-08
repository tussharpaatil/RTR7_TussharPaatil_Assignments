// Program Name : WordCountAndSpaceCount.c

#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	// Function Prototype
	int MyStrlen(char[]);
	char MyStrcpy(char[], char[]);

	// Variable Declarations
	char characterArray[MAX_STRING_LENGTH]; // A Character Is A String
	int countStringLength;
	int counter;
	int word_count = 0, space_count = 0;

	// Code

	// String Input
	printf("\n====================================\n");
	printf("Enter A String : \n\n");
	gets_s(characterArray, MAX_STRING_LENGTH);

	countStringLength = MyStrlen(characterArray);

	for (counter = 0; counter < countStringLength; counter++)
	{
		switch (characterArray[counter])
		{
		case 32: // 32 IS THE ASCII VALUE FOR SPACE (' ') CHARACTER
			space_count++;
			break;
		default:
			break;
		}
	}

	word_count = space_count + 1;

	// String Output
	printf("\n=======================================\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", characterArray);

	printf("\n=======================================\n");
	printf("Number Of Spaces In The Input String = %d\n\n", space_count);
	printf("Number Of Words In The Input String = %d\n\n", word_count);

	return (0);
}

int MyStrlen(char string[])
{
	// Variable Declarations
	int counter;
	int string_length = 0;

	// Code
	// Determining Exact Length Of The String, By Detecting The First Occurence Of Null-Terminating Character ( \0 ) 
	for (counter = 0; counter < MAX_STRING_LENGTH; counter++)
	{
		if (string[counter] == '\0')
			break;
		else
			string_length++;
	}
	return (string_length);
}
