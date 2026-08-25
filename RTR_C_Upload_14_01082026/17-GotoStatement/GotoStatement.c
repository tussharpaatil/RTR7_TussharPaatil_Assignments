// Program Name : GotoStatement.c

#include <stdio.h>
#include <string.h>	 // For toupper()

int main(void)
{
	// Variable Declarations
	char character, character_i;
	unsigned int ascii_character = 0;

	// Code
	printf("\n======================================================\n");
	printf("Enter The First Character of First Name : ");
	character = getch();

	character = toupper(character);

	for (character_i = 'A'; character_i <= 'Z'; character_i++)
	{
		if (character == character_i)
		{
			ascii_character = (unsigned int)character;
			goto result_output; // Program Flow jumps Directly To Label "result_output"
		}
	}

	printf("\n======================================================\n");
	printf("Goto Statement Not Executed, So Printing \"Hello, World !!!\".\n"); // Will Be Ommited if 'goto' Statement Is Executed

result_output: // Label Itself Does Not Alter Flow Of Program. Following Code Is Executed Regardless Of Whether goto Statement Is Executed or Not.
	printf("\n======================================================\n");

	if (ascii_character == 0)
	{
		printf("You must have a strange name ! Could not find the character '%c' in the entire English Alphabet!\n", character);
	}

	else
	{
		printf("Character '%c' found. It Has ASCII Value %u.\n", character, ascii_character);
	}

	printf("\n=======================================================\n");

	return (0);
}
