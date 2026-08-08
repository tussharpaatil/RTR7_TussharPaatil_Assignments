// Program Name : StringReverse.c

#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	// Function Prototype
	void MyStrrev(char[], char[]);

	// Variable Declarations
	char characterArray_Original[MAX_STRING_LENGTH], characterArray_Reversed[MAX_STRING_LENGTH]; // A Character Array Is A String

	// Code

	// String Input
	printf("\n==================================================================\n");
	printf("Enter A String : \n\n");
	gets_s(characterArray_Original, MAX_STRING_LENGTH);

	// String Reversed
	MyStrrev(characterArray_Reversed, characterArray_Original);

	// String Output
	printf("The Reversed String (i.e. 'characterArray_Reversed[]') Is : \n\n");
	printf("%s\n", characterArray_Reversed);

	return (0);
}

void MyStrrev(char string_destination[], char string_source[])
{
	// Function Prototype
	int MyStrlen(char[]);

	// Variable Declarations
	int countStringLength = 0;
	int counter1, counter2, length;

	// Code
	countStringLength = MyStrlen(string_source);

	// Array Indices Begin From 0, Hence, Last Index Will Always Be (Length - 1)
	length = countStringLength - 1;

	// We Need To Put The Character Which Is At Last Index Of 'string_source' To The First Index Of 'string_destination'
	// And Second_Last Character Of 'string_source' To The Second Character of 'string_destination' and so on.....
	for (counter1 = 0, counter2 = length; counter1 < countStringLength, counter2 >= 0; counter1++, counter2--)
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
	// *** Determining Exact Length Of The String, By Detecting The First Occurence Of Null-Terminating Character ( \0 ) ****
	for (counter2 = 0; counter2 < MAX_STRING_LENGTH; counter2++)
	{
		if (string[counter2] == '\0')
			break;
		else
			string_length++;
	}
	return (string_length);
}
