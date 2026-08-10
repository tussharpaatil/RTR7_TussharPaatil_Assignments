// Program Name : StringByString.c

#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	// Function Prototype
	void MyStrcpy(char[], char[]);

	// Variable Declarations

	// ***** A 'String' Is An Array Of Characters ... So char[] Is A char Array And Hence, char[] Is A 'String' ****
	// ***** An Array Of Char ARRRAYs Is An Arrays Of String !!! *****
	// ***** Hence, char[] Is One char ARRAY And Hence, Is One String *****
	// ***** Hence, char[][] Is An Array Of Char Arrays And Hence, Is An Array Of String *****

	// Here, The string array can allow a maximum number of 5 strings (5 rows) and each of these 5 strings can have only 
	// upto 10 characters maximum (10 columns)
	char stringArray[5][10]; // 5 Rows (0, 1, 2, 3, 4) -> 5 Strings (Each String Can Have A Maximum Of 10 Characters)
	int character_size;
	int stringArray_size;
	int stringArray_number_elements, stringArray_number_rows, stringArray_number_columns;
	int counter;

	// Code
	printf("\n=====================================================================================================\n");
	character_size = sizeof(char);

	stringArray_size = sizeof(stringArray);
	printf("Size Of Two Dimensional (2D) Character Array (String Array) Is = %d\n\n", stringArray_size);

	stringArray_number_rows = stringArray_size / sizeof(stringArray[0]);
	printf("Number Of Rows (Strings) In Two Dimensional (2D) Character Array (String Array) Is = %d\n\n", stringArray_number_rows);

	stringArray_number_columns = sizeof(stringArray[0]) / character_size;
	printf("Number Of Columns In Two Dimensional (2D) Character Array (String Array) Is = %d\n\n", stringArray_number_columns);

	stringArray_number_elements = stringArray_number_rows * stringArray_number_columns;
	printf("Maximum Number Of Elements (Characters) In Two Dimensional (2D) Character Array (String Array) Is = %d\n\n", stringArray_number_elements);

	// ****** Piece-Meal Assignment *****
	MyStrcpy(stringArray[0], "My");
	MyStrcpy(stringArray[1], "Name");
	MyStrcpy(stringArray[2], "Is");
	MyStrcpy(stringArray[3], "Tusshar");
	MyStrcpy(stringArray[4], "Paatil");

	printf("\n==================================================================================================\n");
	printf("The Strings In The 2D Character Array Are : \n\n");

	for (counter = 0; counter < stringArray_number_rows; counter++)
		printf("%s", stringArray[counter]);

	printf("\n==================================================================================================\n");

	return (0);
}

void MyStrcpy(char string_destination[], char string_source[])
{
	// Function Prototype
	int MyStrlen(char[]);

	// Variable Declarations
	int countStringLength = 0;
	int counter;

	// Code
	countStringLength = MyStrlen(string_source);
	for (counter = 0; counter < countStringLength; counter++)
		string_destination[counter] = string_source[counter];

	string_destination[counter] = '\0';
}

int MyStrlen(char string[])
{
	// Variable Declarations
	int counter;
	int string_length = 0;

	// Code
	// ***** Determining Exact Length Of The String, By Detecting The First Occurence Of Null-Terminating Character ( \0 ) ****
	for (counter = 0; counter < MAX_STRING_LENGTH; counter++)
	{
		if (string[counter] == '\0')
			break;
		else
			string_length++;
	}
	return (string_length);
}

