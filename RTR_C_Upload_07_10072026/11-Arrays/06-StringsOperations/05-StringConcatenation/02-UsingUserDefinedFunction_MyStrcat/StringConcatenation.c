// Program Name : StringConcatenation.c

#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	// Function Prototype
	void MyStrcat(char[], char[]);

	// Variable Declarations
	char characterArray_One[MAX_STRING_LENGTH], characterArray_Two[MAX_STRING_LENGTH];	// A Character Array Is A String

	// Code
	// ***** String Input *****
	printf("\n=====================================================\n");
	printf("Enter First String : \n\n");
	gets_s(characterArray_One, MAX_STRING_LENGTH);

	printf("\n=====================================================\n");
	printf("Enter Second Strong : \n\n");
	gets_s(characterArray_Two, MAX_STRING_LENGTH);

	// ***** STRING CONCAT ******
	printf("\n=====================================================\n");
	printf("*************Before Concatenation****************");
	printf("\n=====================================================\n");
	printf("The Original First String Entered By You (i.e. : 'characterArray_One[]') Is : \n\n");
	printf("%s\n", characterArray_One);

	printf("\n=====================================================\n");
	printf("The Original Second String Entered By You (i.e. : 'characterArray_Two[]') Is : \n\n");
	printf("%s\n", characterArray_Two);

	MyStrcat(characterArray_One, characterArray_Two);

	printf("\n=====================================================\n");
	printf("****************After Concatenation*************");
	printf("\n=====================================================\n");
	printf("'characterArray_One[]' Is : \n\n");
	printf("%s\n", characterArray_One);

	printf("\n=====================================================\n");
	printf("'characterArray_Two[]' Is : \n\n");
	printf("%s\n", characterArray_Two);

	return (0);
}

void MyStrcat(char string_destination[], char string_source[])
{
	// Function Prototype
	int MyStrlen(char[]);

	// Variable Declarations
	int countStringLength_Source = 0, countStringLength_Destination = 0;
	int counter1, counter2;

	// Code
	countStringLength_Source = MyStrlen(string_source);
	countStringLength_Destination = MyStrlen(string_destination);

	// Array Indices Begin From 0, Hence, Last Valid Index Of Array Will Always be (Length - 1)
	// So, Concatenation Must Begin From Index Number Equal To Length Of The Array 'string_destination'
	// We need To Put The Character Which Is At First Index Of 'string_source' To The (Last Index + 1) Of 'string_destination'
	for (counter1 = countStringLength_Destination, counter2 = 0; counter2 < countStringLength_Source; counter1++, counter2++)
	{
		string_destination[counter1] = string_source[counter2];
	}

	string_destination[counter1] = '\0';
}

int MyStrlen(char string[])
{
	// Variable Declarations
	int counter2;
	int string_length = 0;

	// Code
	// **** Determining Exact Length Of The String , By Detecting The First Occurence Of Null-Terminating Character ( \0 ) ****
	for (counter2 = 0; counter2 < MAX_STRING_LENGTH; counter2++)
	{
		if (string[counter2] == '\0')
			break;
		else
			string_length++;
	}
	return (string_length);
}
