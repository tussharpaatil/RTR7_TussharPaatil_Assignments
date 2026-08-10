// Program Name : ArrayOfStrings.c

#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	// Function Prototype
	int MyStrlen(char[]);

	// Variable Declarations

	// *** A 'String' Is An Array Of Characters ...... So char[] Is a char Array And Hence, char[] Is a 'STRING' ***
	// *** An Array Of char Arrrays Is An Array Of String !!! ***
	// *** Hence, char[] Is ONE char Array And Hence, Is ONE STRING ****
	// *** Hence, char[][] Is An Array Of char Arrays And Hence, Is An Array Of String ***

	// Hence, The String Array Can Allow A Maximum Number Of 10 Strings (10 Rows) And Each Of These 10 Strings
	// Can Only Upto 15 Characters Maximum (15 columns)

	char stringArray[10][15] = { "Hello!", "Welcome", "To", "Real", "Time", "Rendering", "Batch", "(2026-2027)", "Of", "AstroMediComp" };
	// In-Line Initialization
	int character_size;
	int stringArray_size;
	int stringArray_number_elements, stringArray_number_rows, stringArray_number_columns;
	int stringActual_number_chars = 0;
	int counter;

	// Code
	printf("\n============================================================================================================\n");

	character_size = sizeof(char);

	stringArray_size = sizeof(stringArray);
	printf("Size Of Two Dimensional (2D) Character Array (String Array) Is = %d\n\n", stringArray_size);

	stringArray_number_rows = stringArray_size / sizeof(stringArray[0]);
	printf("Number Of Rows (Strings) In Two Dimensional (2D) Character Array (String Array) Is = %d\n\n", stringArray_number_rows);

	stringArray_number_columns = sizeof(stringArray[0]) / character_size;
	printf("Number Of Columns In Two Dimensinal (2D) Character Array (String Array) Is = %d\n\n", stringArray_number_columns);
	
	stringArray_number_elements = stringArray_number_rows * stringArray_number_columns;
	printf("Maximum Number Of Elements (Characters) In Two Dimensional (2D) Character Array (String Array) Is = %d\n\n", stringArray_number_elements);

	for (counter = 0; counter < stringArray_number_rows; counter++)
	{
		stringActual_number_chars = stringActual_number_chars + MyStrlen(stringArray[counter]);
	}
	printf("Actual Number Of Elements (Characters) In Two Dimensional (2D) Character Array (String Array) Is = %d\n\n", stringActual_number_chars);

	printf("\n============================================================================================================\n");
	printf("String In The 2D Array : \n\n");

	// Since, char[][] is an array of string, referencing only by the row number (first[]) will give the row or the string
	// The Column Number (Second[]) is the particular character in the string/row)
	printf("%s", stringArray[0]);
	printf("%s", stringArray[1]);
	printf("%s", stringArray[2]);
	printf("%s", stringArray[3]);
	printf("%s", stringArray[4]);
	printf("%s", stringArray[5]);
	printf("%s", stringArray[6]);
	printf("%s", stringArray[7]);
	printf("%s", stringArray[8]);
	printf("%s", stringArray[9]);
	printf("\n============================================================================================================\n");

	return (0);
}

int MyStrlen(char string[])
{
	// Variable Declarations
	int counter;
	int string_length = 0;
	
	// Code
	// *** Determining Exact Length Of The String, By Detecting The First Occurence Of Null-Terminating Character ( \0 ) ****
	for (counter = 0; counter < MAX_STRING_LENGTH; counter++)
	{
		if (string[counter] == '\0')
			break;
		else
			string_length++;
	}
	return (string_length);
}
