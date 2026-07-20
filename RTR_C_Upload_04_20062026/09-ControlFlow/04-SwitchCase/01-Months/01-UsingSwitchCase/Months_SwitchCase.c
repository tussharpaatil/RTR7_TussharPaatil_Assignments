// Program Name : Months_SwitchCase.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int month_number;

	// Code
	printf("================================================================\n\n");
	printf("Enter Month Number (1 to 12) : ");
	scanf("%d", &month_number);
	printf("================================================================\n\n");

	switch (month_number)
	{
	case 1: // Like 'if'
		printf("Month Number %d Is January !!!\n\n", month_number);
		break;

	case 2: // Like 'else if'
		printf("Month Number %d Is February !!!\n\n", month_number);
		break;

	case 3: // Like 'else if'
		printf("Month Number %d Is March !!!\n\n", month_number);
		break;

	case 4: // Like 'else if'
		printf("Month Number %d Is March !!!\n\n", month_number);
		break;

	case 5: // Like 'else if'
		printf("Month Number %d Is April !!!\n\n", month_number);
		break;

	case 6: // Like 'else if'
		printf("Month Number %d Is May !!!\n\n", month_number);
		break;
	
	case 7: // Like 'else if'
		printf("Month Number %d Is June !!!\n\n", month_number);
		break;

	case 8: // Like 'else if'
		printf("Month Number %d Is July !!!\n\n", month_number);
		break;

	case 9: // Like 'else if'
		printf("Month Number %d Is August !!!\n\n", month_number);
		break;

	case 10: // Like 'else if'
		printf("Month Number %d Is September !!!\n\n", month_number);
		break;

	case 11: // Like 'else if'
		printf("Month Number %d Is October !!!\n\n", month_number);
		break;

	case 12: // Like 'else if'
		printf("Month Number %d Is November !!!\n\n", month_number);
		break;

	default: // Like ending OPTIONAL 'else' ... just like terminating 'else' is optional in if-else if-else ladder, so us the 'default' case optiobal in switch case
		printf("Invalid Month Number %d Entered !!! Please Try Again... \n\n", month_number);
		break;
	}

	printf("Switch Case Block Complete !!!\n");
	return (0);
}
