// Program Name : CharacterRecongnition_IfElse_AndIfElseIfLadder.c

#include <stdio.h> // For printf()
#include <conio.h> // For getch()

// ASCII Values For 'A' to 'Z' => 65 to 90
#define CHAR_ALPHABET_UPPER_CASE_BEGINNING 65
#define CHAR_ALPHABET_UPPER_CASE_ENDING 90

// ASCII Values For 'a' to 'z' => 97 to 122
#define CHAR_ALPHABET_LOWER_CASE_BEGINNING 97
#define CHAR_ALPHABET_LOWER_CASE_ENDING 122

// ASCII Values For '0' to '9' => 48 to 57
#define CHAR_DIGIT_BEGINNING 48
#define CHAR_DIGIT_ENDING 57

int main(void)
{
	// Variable Declarations
	char character;
	int character_value;

	// Code
	printf("\n====================================================\n");

	printf("Enter character : ");
	character = getch();

	if ((character == 'A' || character == 'a') || (character == 'E' || character == 'e') || (character == 'I' || character == 'i') || (character == 'O' || character == 'o') || (character == 'U' || character == 'u'))
	{
		printf("Character \'%c\' Entered By You, Is a Vowel Character From The English Alphabet !!!\n\n", character);
	}

	else
	{
		character_value = (int)character;

		// If The Character Has ASCII Value Between 65 AND 90 OR Between 97 AND 122,
		// It Is Still a Letter Of The Alphabet, But It Is A 'Consonant', and Not a 'Vowel'...

		if ((character_value >= CHAR_ALPHABET_UPPER_CASE_BEGINNING && character_value <= CHAR_ALPHABET_UPPER_CASE_ENDING) || (character_value >= CHAR_ALPHABET_LOWER_CASE_BEGINNING && character_value <= CHAR_ALPHABET_LOWER_CASE_ENDING))
		{
			printf("Character \'%c\' Entered By You, Is A Consonant Character From The English Alphabet !!!\n\n", character);
		}

		else if (character_value >= CHAR_DIGIT_BEGINNING && character_value <= CHAR_DIGIT_ENDING)
		{
			printf("Character \'%c\' Entered By You, Is A Digit Character !!!\n\n", character);
			printf("Character \'%c\' Entered By You, Is A Digit Character !!!\n\n", character);
		}

		else
		{
			printf("Character \'%c\' Entered By You, Is A Special Character !!!\n\n", character);
		}
	}

	return (0);
}
