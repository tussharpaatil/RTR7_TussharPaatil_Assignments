// Program Name : CharacterRecognition_SwitchCase.c

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
	printf("\n==========================================================\n\n");
	printf("Enter Character : ");
	character = getch();
	printf("\n==========================================================\n\n");

	switch (character)
	{
		// FALL THROUGH CONDITION
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
		printf("Character \'%c\' Entered By You, Is A Vowel Character From the English Alphabet !!!\n\n", character);
		break;
	default:
		character_value = (int)character;
		// If the character has ASCII value between 65 and 90 OR Betweeb 97 AND 122, It is still a letter of the alphabet, but it is a 'CONSTANT' and Not a 'Vowel'
		if ((character_value >= CHAR_ALPHABET_UPPER_CASE_BEGINNING && character_value <= CHAR_ALPHABET_UPPER_CASE_ENDING) || (character_value >= CHAR_ALPHABET_LOWER_CASE_BEGINNING && character_value <= CHAR_ALPHABET_LOWER_CASE_ENDING))
		{
			printf("Character \'%c\' Entered By You, Is a Consonant Character From The English Alphabet !!!\n\n", character);
		}

		else if (character_value >= CHAR_DIGIT_BEGINNING && character_value <= CHAR_DIGIT_ENDING)
		{
			printf("Character \'%c\' Entered By You, Is a Digit Character !!!\n\n", character);
		}

		else
		{
			printf("Character \'%c\' Entered By You, Is a Special Character !!!\n\n", character);
		}
		break;
	}

	printf("Switch Case Block Complete !!!\n");

	return (0);
}
