// Program Name : Capitalize.c

#include <stdio.h>
#include <ctype.h>	// For toupper()

#define MAX_STRING_LENGTH 512

int main(void)
{
	// Function Prototype
	int MyStrlen(char[]);

	// Variable Declarations
	char characterArray[MAX_STRING_LENGTH], characterArray_CapitalizedFirstLetterOfEveryWord[MAX_STRING_LENGTH]; //A CHARACTER ARRAY IS A STRING
	int countStringLength;
	int x, y;

	// Code

	// ***** String Input *****
	printf("\n======================================\n");
	printf("Enter A String : \n\n");
	gets_s(characterArray, MAX_STRING_LENGTH);

	countStringLength = MyStrlen(characterArray);
	y = 0;
	for (x = 0; x < countStringLength; x++)
	{
		if (x == 0)
			characterArray_CapitalizedFirstLetterOfEveryWord[y] = toupper(characterArray[x]);

		else if (characterArray[x] == ' ')
		{
			characterArray_CapitalizedFirstLetterOfEveryWord[y] = characterArray[x];
			characterArray_CapitalizedFirstLetterOfEveryWord[y + 1] = toupper(characterArray[x + 1]);

			// Since, Already Two Characters ( At Indeces 'x' and 'x + 1' Have Been Considered In This else-if Block....
			// We are Extra-Incrementing 'x' and 'y' By 1
			y++;
			x++;
		}

		else
			characterArray_CapitalizedFirstLetterOfEveryWord[y] = characterArray[x];

		y++;
	}

	characterArray_CapitalizedFirstLetterOfEveryWord[y] = '\0';

	// ***** String Output *****
	printf("\n=====================================\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", characterArray);

	printf("\n=====================================\n");
	printf("String After Capitalized First Letter Of Every Word : \n\n");
	printf("%s\n", characterArray_CapitalizedFirstLetterOfEveryWord);

	return (0);
}

int MyStrlen(char string[])
{
	// Variable Declarations
	int y;
	int string_length = 0;

	// Code
	// ***** Determining Exact Length Of The String, By Detecting The First Occurence Of Null-Terminating Character ( \0 ) *****
	for (y = 0; y < MAX_STRING_LENGTH; y++)
	{
		if (string[y] == '\0')
			break;
		else
			string_length++;
	}
	return (string_length);
}
