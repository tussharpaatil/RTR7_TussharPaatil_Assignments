// Program Name : Capitalize.c

#include <stdio.h>

#define MAX_STRING_LENGTH 512

#define SPACE ' '

#define FULLSTOP '.'
#define COMMA ','
#define EXCLAMATION '!'
#define QUESTION_MARK '?'

int main(void)
{
	// Function Prototype
	int MyStrlen(char[]);
	char MyToUpper(char);

	// Variable Declarations
	char characterArray[MAX_STRING_LENGTH], characterArray_CapitalizedFirstLetterOfEveryWord[MAX_STRING_LENGTH]; // A Character Is A String
	int countStringLength;
	int x, y;

	// Code

	// ***** String Input ******
	printf("\n======================\n");
	printf("Enter A String : \n\n");
	gets_s(characterArray, MAX_STRING_LENGTH);

	countStringLength = MyStrlen(characterArray);
	y = 0;
	for (x = 0; x < countStringLength; x++)
	{
		if (x == 0) // First Letter Of Any Sentence Must Be A Capital Letter
			characterArray_CapitalizedFirstLetterOfEveryWord[y] = MyToUpper(characterArray[x]);

		else if (characterArray[x] == SPACE) // First Letter Of Every Word In The Sentence Must Be A Capital Letter.
			// Words Are Separated By Spaces.
		{
			characterArray_CapitalizedFirstLetterOfEveryWord[y] = characterArray[x];
			characterArray_CapitalizedFirstLetterOfEveryWord[y + 1] = MyToUpper(characterArray[x + 1]);

			// Since, Already Two Characters (At Indices 'x' And 'x + 1' Have Been Considered In This else-if block... 
			// We are Extra-incrementing 'x' and 'y' By 1
			y++;
			x++;
		}

		else if ((characterArray[x] == FULLSTOP || characterArray[x] == COMMA || characterArray[x] == EXCLAMATION || characterArray[x] == QUESTION_MARK) && (characterArray[x] != SPACE))
			// First Letter Of Every Word After Punctuation Mark, In the Sentence Must Be A CAPITAL LETTER. Words Are Separated By Punctuations.
		{
			characterArray_CapitalizedFirstLetterOfEveryWord[y] = characterArray[x];
			characterArray_CapitalizedFirstLetterOfEveryWord[y + 1] = SPACE;
			characterArray_CapitalizedFirstLetterOfEveryWord[y + 2] = MyToUpper(characterArray[x + 1]);

			// Since, Already Two Characters (At Indices 'x' and 'x + 1' have been Considered In This else-if BLOCK...
			// We Are Extra-Incrementing 'x' By 1
			//Since, Already Three Characters (At Indices 'y' And (y + 1) And (y + 2) Have Been Considered In This else-if BLOCK...
			// We are Extra-Incrementing 'y' BY 2
			y = y + 2;
			x++;
		}

		else characterArray_CapitalizedFirstLetterOfEveryWord[y] = characterArray[x];

		y++;
	}

	characterArray_CapitalizedFirstLetterOfEveryWord[y] = '\0';

	// String Output
	printf("\n=======================================================\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", characterArray);

	printf("\n=======================================================\n");
	printf("String After Capitalizing First Letter Of Every Word : \n\n");
	printf("%s\n", characterArray_CapitalizedFirstLetterOfEveryWord);

	return (0);
}

int MyStrlen(char string[])
{
	// Variable Declarations
	int y;
	int string_length = 0;

	// Code
	// ***** Determining Exact Length Of The String, By Detecting The First Occurence Of Null-terminating Character ( \0 ) *****
	for (y = 0; y < MAX_STRING_LENGTH; y++)
	{
		if (string[y] == '\0')
			break;
		else
			string_length++;
	}
	return (string_length);
}

char MyToUpper(char character)
{
	// Vairable Declaration
	int number;
	int count;

	// Code

	// ASCII Value Of 'a' (97) - ASCII Value Of 'A' (65) = 32
	// This Subtraction Will Give The Exact Difference Between The Upper And Lower Case Counterparts Of Each Letter Of The Albhabet
	// If This Difference Is Subtracted From The ASCII Value Of A Lower Case Letter, The Resultant ASCII Value Will Be That Of 
	// Its Upper Case Counter-part, Hence, Helping Us To Find Its Upper Case Letter !!!
	number = 'a' - 'A';

	if ((int)character >= 97 && (int)character <= 122)
	{
		count = (int)character - number;
		return ((char)count);
	}

	else
		return (character);
}
