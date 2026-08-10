// Program Name : CharacterByCharacter.c

#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	// Variable Declarations

	// **** A 'String' Is An Array Of Characters.... So char[] Is A char Array and Hence, char[] Is A 'String' ******
	// **** An Array Of char Arrays Is An Array Of Strings !!! ****
	// **** Hence, char[] Is One char Array And Hence, Is one String ****
	// **** Hence, char[][] Is An Array Of Char Arrays And Hence, Is An Array Of String ****

	// Here, The string array can allow a maximum number of 5 strings (5 rows) and each of these 5 strings can have only
	// upto 10 character maximum (10 columns)
	char stringArray[5][10]; // 5 Rows (0, 1, 2, 3, 4) -> 5 Strings (Each Strings Can Have A Maximum Of 10 Characters)
	int character_size;
	int stringArray_size;
	int stringArray_number_elements, stringArray_number_rows, stringArray_number_columns;
	int counter;

	// Code
	printf("\n====================================================================================\n");

	character_size = sizeof(char);

	stringArray_size = sizeof(stringArray);
	printf("Size Of Two Dimensional (2D) Character Array (String Array) Is = %d\n\n", stringArray_size);

	stringArray_number_rows = stringArray_size / sizeof(stringArray[0]);
	printf("Number Of Rows (String) In Two Dimensional (2D) Character Array (String Array) Is = %d\n\n", stringArray_number_rows);

	stringArray_number_columns = sizeof(stringArray[0]) / character_size;
	printf("Number Of Columns In Two Dimensional (2D) Character Array (String Array) Is = %d\n\n", stringArray_number_columns);

	stringArray_number_elements = stringArray_number_rows * stringArray_number_columns;
	printf("Maximum Number Of Elements (Character) In Two Dimensional (2D) Character Array (String Array) Is = %d\n\n", stringArray_number_elements);

	// **** Piece-Meal Assignment *****
	// **** Row 1/ String 1 *****
	stringArray[0][0] = 'M';
	stringArray[0][1] = 'y';
	stringArray[0][2] = '\0';	// Null-Terminating Character

	// **** Row 2 / String 2 *****
	stringArray[1][0] = 'N';
	stringArray[1][1] = 'a';
	stringArray[1][2] = 'm';
	stringArray[1][3] = 'e';
	stringArray[1][4] = '\0'; // Null-Terminating Character

	// **** Row 3 / String 3 *****
	stringArray[2][0] = 'I';
	stringArray[2][1] = 's';
	stringArray[2][2] = '\0';	// Null-Terminating Character

	// **** Row 4 / String 4 *****
	stringArray[3][0] = 'T';
	stringArray[3][1] = 'u';
	stringArray[3][2] = 's';
	stringArray[3][3] = 's';
	stringArray[3][4] = 'h';
	stringArray[3][5] = 'a';
	stringArray[3][6] = 'r';
	stringArray[3][7] = '\0'; // Null-Terminating Character

	// **** Row 5 / String 5 *****
	stringArray[4][0] = 'P';
	stringArray[4][1] = 'a';
	stringArray[4][2] = 'a';
	stringArray[4][3] = 't';
	stringArray[4][4] = 'i';
	stringArray[4][5] = 'l';
	stringArray[4][6] = '\0'; // Null-terminating Character

	printf("\n==============================================================================================\n");
	printf("The Strings In The 2D Character Array Are : \n\n");

	for (counter = 0; counter < stringArray_number_rows; counter++)
		printf("%s ", stringArray[counter]);

	printf("\n==============================================================================================\n");

	return (0);
}

int MyStrlen(char string[])
{
	// Variable Declarations
	int counter;
	int string_length = 0;

	// Code
	// **** Determining Exact Length Of The String, By Detecting The First Occurence Of Null-Terminating Character ( \0 ) ****
	for (counter = 0; counter < MAX_STRING_LENGTH; counter++)
	{
		if (string[counter] == '\0')
			break;
		else
			string_length++;
	}
	return (string_length);
}
