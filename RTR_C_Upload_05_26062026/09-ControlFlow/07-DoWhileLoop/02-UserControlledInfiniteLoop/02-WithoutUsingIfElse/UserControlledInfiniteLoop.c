// Program Name : UserControlledInfiniteLoop.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	char choice, character = '\0';

	// Code
	printf("\n====================================================================\n");
	printf("Once The Infinite Loop Begins, Enter 'Q' or 'q' To Quit The Infinite For Loop : \n\n");

	do
	{
		do
		{
			printf("\n");
			printf("In Loop....\n");
			character = getch();		// Control Flow Waits For Character Input.....
		} while (character != 'Q' && character != 'q');
		printf("\n====================================================================\n");
		printf("Do You Want To Begin User Controlled Infinite Loop Again? .... (Y/y - Yes, Any Other Key - No) : ");
		choice = getch();
	} while (choice == 'Y' || choice == 'y');
	
	return (0);
}
