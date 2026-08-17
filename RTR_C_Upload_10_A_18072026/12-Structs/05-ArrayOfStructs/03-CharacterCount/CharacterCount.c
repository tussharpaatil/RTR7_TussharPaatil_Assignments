// Program Name : CharacterCount.c

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_STRING_LENGTH 1024

typedef struct
{
	char character;
	int ch_count;
} CharacterCount;

CharacterCount character_and_count[] = { { 'A', 0 }, // character_and_count[0].character = 'A' & character_and_count[0].ch_count = 0
										 { 'B', 0 }, // character_and_count[0].character = 'B' & character_and_count[1].ch_count = 0
										 { 'C', 0 }, // character_and_count[0].character = 'C' & character_and_count[2].ch_count = 0
										 { 'D', 0 }, // character_and_count[0].character = 'D' & character_and_count[3].ch_count = 0
										 { 'E', 0 }, // character_and_count[0].character = 'E' & character_and_count[4].ch_count = 0
										 { 'F', 0 },
										 { 'G', 0 },
										 { 'H', 0 },
										 { 'I', 0 },
										 { 'J', 0 },
										 { 'J', 0 },
										 { 'L', 0 },
										 { 'M', 0 },
										 { 'O', 0 },
										 { 'P', 0 },
										 { 'Q', 0 },
										 { 'R', 0 },
										 { 'S', 0 },
										 { 'T', 0 },
										 { 'U', 0 },
										 { 'V', 0 },
										 { 'W', 0 },
										 { 'X', 0 },
										 { 'Y', 0 },
										 { 'Z', 0 } };// character_and_count[25].ch = 'Z' & character_and_count[25].ch_count = 0

#define SIZE_OF_ENTIRE_ARRAY_OF_STRUCTS sizeof(character_and_count)
#define SIZE_OF_ONE_STRUCT_FROM_THE_ARRAY_OF_STRUCTS sizeof(character_and_count[0])
#define NUMBER_OF_ELEMENTS_IN_ARRAY (SIZE_OF_ENTIRE_ARRAY_OF_STRUCTS / SIZE_OF_ONE_STRUCT_FROM_THE_ARRAY_OF_STRUCTS)

// Entry Point Function

int main(void)
{
	// Variable Declarations
	char string[MAX_STRING_LENGTH];
	int counter1, counter2, actual_string_length = 0;

	// Code
	printf("\n===========================================================================\n");
	printf("Enter A String : \n\n");
	gets_s(string, MAX_STRING_LENGTH);

	actual_string_length = strlen(string);

	printf("\n===========================================================================\n");
	printf("The String You Have Entered Is : \n\n");
	printf("%s\n\n", string);

	for (counter1 = 0; counter1 < actual_string_length; counter1++)
	{
		for (counter2 = 0; counter2 < NUMBER_OF_ELEMENTS_IN_ARRAY; counter2++)
			// Run every character of the input string through the entire alphabet (A To Z)
		{
			string[counter1] = toupper(string[counter1]); // If inut character is in lower case, turn it to uppoer case for comparison

			if (string[counter1] == character_and_count[counter2].character) // If character is present .....
				character_and_count[counter2].ch_count++; // Increment its count by 1....
		}
	}

	printf("\n============================================================================\n");
	printf("The Number Of Occurences Of All Characters from The Alphabet Are As Follows : \n\n");

	for (counter1 = 0; counter1 < NUMBER_OF_ELEMENTS_IN_ARRAY; counter1++)
	{
		printf("Character %c = %d\n", character_and_count[counter1].character, character_and_count[counter1].ch_count);
	}
	printf("\n============================================================================\n");

	return (0);
}
