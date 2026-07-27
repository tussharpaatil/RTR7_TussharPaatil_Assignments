// Program Name : UserControlledInfiniteLoop.c

#include <stdio.h>

int main(void)
{
	// Veriable Declarations
	char choice, character = '\0';

	// Code
	printf("\n====================================================================================\n");

	printf("Once The Infinite Loop Begines, Enter 'Q' or 'q' To Quit The Infinite For Loop : \n\n");
	printf("Enter 'Y' or 'y' To Initiate User Controlled Infinite Loop : ");
	printf("\n====================================================================================\n");
	choice = getch();

	if (choice == 'Y' || choice == 'y')
	{
		for (;;) // Infinite Loop
		{
			printf("In Loop.... \n");
			character = getch();
			if (character == 'Q' || character == 'q')
				break; // User Controlled Exitting From Infinite Loop
		}
	}
	printf("\n====================================================================================\n");
	printf("Exitting User Controlled Infinite Loop....");
	printf("\n====================================================================================\n");

	return (0);
}
