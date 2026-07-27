// Program Name : UserControlledInfiniteLoop.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	char choice, character = '\0';

	// Code
	printf("\n===========================================================================================\n");
	printf("Once The Infinite Loop Begins, Enter 'Q' or 'q' To Quit The Infinite For Loop : \n\n");
	printf("Enter 'Y' or 'y' To Initiate User Controlled Infinite Loop : ");
	printf("\n===========================================================================================\n");

	choice = getch();

	if (choice == 'Y' || choice == 'y')
	{
		while (1) // Infinite Loop
		{
			printf("In Loop...\n");
			character = getch();
			if (character == 'Q' || character == 'q')
				break;	// User Controlled Exitting From Infinite Loop
		}
		printf("\n===========================================================================================\n");
		printf("Exiting User Controlled Infinite Loop....");
		printf("\n===========================================================================================\n");
	}

	else
		printf("You Must Press 'Y' or 'y' To Initiate The User Controlled Infinite Loop....Press Try Again....\n\n");

	return (0);
}
