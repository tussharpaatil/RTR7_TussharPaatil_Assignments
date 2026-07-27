// Program Name : SimpleLoop_Break.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int counter;
	char character;

	// Code
	printf("\n============================================================================\n");

	printf("Printing Even Numbers From 1 To 100 For Every User Input. Exitting The Loop When User Enters Character 'Q' or 'q' : \n\n");
	printf("Enter Character 'Q' Or 'q' To Exit Loop : \n\n");

	for (counter = 1; counter <= 100; counter++)
	{
		printf("\t%d\n", counter);
		character = getch();
		if (character == 'Q' || character == 'q')
		{
			break;
		}
	}
	printf("\n============================================================================\n");
	printf("Exitting Loop.....");
	printf("\n============================================================================\n");

	return (0);
}
