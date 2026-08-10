// Program Name : CharacterBreakdown.c

#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	// Function Prototype
	int MyStrlen(char[]);

	// Variable Declarations

	// *** A 'STRING' Is Array Of Characters ... So char[] Is A char Array And Hence, char[] Is A 'STRING' ****
	// *** An Array Of char Array Is An Array Of String !!! ***
	// *** Hence, char[] Is One char Array and Hence, Is One String ***
	// *** Hence, char[][] Is An Array Of Char Arrays And Hence, Is A Array Of String ***

	// Here, The String Array Can Allow A Maximum Number Of 10 Strings (10 rows) and each Of These 10 Strings Can Have
	// Only 15 Characters Maximum (15 columns)
	char stringArray[10][15] = { "Hello!", "Welcome", "To", "Real", "Time", "Redenring", "Batch", "(2026-2027)", "Of", "AstroMediComp." };
	// In-Line Initialization
	int countStringLengths[10]; // 1D Integer Array = Stores length Of Those Strings At Corresponding Indices In 'stringArray[]'
	// e.g. countStringLengths[0] Will Be The Length Of String At 'stringArray[0]', countStringLengths[1] Will Be The Length Of String
	// At stringArray[1]...10 Strings, 10 lengths...
	int stringArray_size;
	int stringArray_number_rows;
	int counter1, counter2;

	// Code
	stringArray_size = sizeof(stringArray);
	stringArray_number_rows = stringArray_size / sizeof(stringArray[0]);

	// Storing in lengths Of All The strings....
	for (counter1 = 0; counter1 < stringArray_number_rows; counter1++)
		countStringLengths[counter1] = MyStrlen(stringArray[counter1]);

	printf("\n===========================================================================================================\n");
	printf("Strings In The 2D Array : \n\n");

	// Since, char[][] in an array of strings, referencing only by the row number (first[]) will give the row or the string
	// The column Number (second[]) is the particular character in that string / row
	for (counter1 = 0; counter1 < stringArray_number_rows; counter1++)
	{
		printf("String Number %d => %s\n\n", (counter1 + 1), stringArray[counter1]);
		for (counter2 = 0; counter2 < countStringLengths[counter1]; counter2++)
		{
			printf("Character %d = %c\n", (counter2 + 1), stringArray[counter1][counter2]);
		}
		printf("\n===================================================================================================================\n");
	}

	return (0);
}

int MyStrlen(char string[])
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
	return (string_length);
}
