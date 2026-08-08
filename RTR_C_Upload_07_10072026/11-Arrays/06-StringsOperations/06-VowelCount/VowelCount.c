// Progam Name : VowelCount.c

#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	// Function Prototype
	int MyStrlen(char[]);

	// Variable Declarations
	char characterArray[MAX_STRING_LENGTH];		// A Character Array Is A String
	int countStringLength = 0;
	int count_A = 0, count_E = 0, count_I = 0, count_O = 0, count_U = 0; // Initial Counts = 0
	int counter;

	// Code
	// ***** String Input *****
	printf("\n=============================================\n");
	printf("Enter A String : \n\n");
	gets_s(characterArray, MAX_STRING_LENGTH);

	// String Input 
	printf("\n=============================================\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", characterArray);

	countStringLength = MyStrlen(characterArray);

	for (counter = 0; counter < countStringLength; counter++)
	{
		switch (characterArray[counter])
		{
		case 'A':
		case 'a':
			count_A++;
			break;
		case 'E':
		case 'e':
			count_E++;
			break;
		case 'I':
		case 'i':
			count_I++;
			break;
		case 'O':
		case 'o':
			count_O++;
			break;
		case 'U':
		case 'u':
			count_U++;
			break;
		default:
			break;
		}
	}

	printf("\n====================================\n");
	printf("In The String Enetered By You, THe Vowels And The Number Of Theire Occurences Are as Follows : \n\n");
	printf("'A' Has Occured = %d Times !!!\n\n", count_A);
	printf("'E' Has Occured = %d Times !!!\n\n", count_E);
	printf("'I' Has Occured = %d Times !!!\n\n", count_I);
	printf("'O' Has Occured = %d Times !!!\n\n", count_O);
	printf("'U' Has Occured = %d Times !!!\n\n", count_U);

	return (0);
}

int MyStrlen(char string[])
{
	// Variable Declarations
	int counter = 0;
	int string_length = 0;

	// Code
	// **** Determining Exact Length Of String, By Detecting The First Occurence Of Null-Terminating Character ( \0 ) ****
	for (counter = 0; counter < MAX_STRING_LENGTH; counter++)
	{
		if (string[counter] == '\0')
			break;
		else
			string_length++;
	}
	return (string_length);
}
