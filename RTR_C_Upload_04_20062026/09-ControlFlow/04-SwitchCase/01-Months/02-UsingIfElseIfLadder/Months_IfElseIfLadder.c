// Program Name : Months_IfElseIfLadder.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int month_number;

	// Code
	printf("============================================================\n\n");

	printf("Enter Month Number (1 to 12) : ");
	scanf("%d", &month_number);
	printf("============================================================\n\n");

	// IF - ELSE - IF LADDER BEGINS FROM HERE...
	if (month_number == 1) // Like 'case 1'
		printf("Month Number %d Is January !!!\n\n", month_number);

	else if (month_number == 2) // Like 'case 2'
		printf("Month Number %d Is February !!!\n\n", month_number);

	else if (month_number == 3) // Like 'case 3'
		printf("Month Number %d Is March !!!\n\n", month_number);

	else if (month_number == 4) // Like 'case 4'
		printf("Month Number %d Is April !!!\n\n", month_number);

	else if (month_number == 5) // Like 'case 5'
		printf("Month Number %d Is May !!!\n\n", month_number);

	else if (month_number == 6) // Like 'case 6'
		printf("Month Number %d Is June !!!\n\n", month_number);

	else if (month_number == 7) // Like 'case 7'
		printf("Month Number %d Is July !!!\n\n", month_number);

	else if (month_number == 8) // Like 'case 8'
		printf("Month Number %d Is August !!!\n\n", month_number);

	else if (month_number == 9) // Like 'case 9'
		printf("Month Number %d Is September !!!\n\n", month_number);

	else if (month_number == 10) // Like 'case 10'
		printf("Month Number %d Is October !!!\n\n", month_number);

	else if (month_number == 11) // Like 'case 11'
		printf("Month Number %d Is November !!!\n\n", month_number);

	else if (month_number == 12) // Like 'case 12'
		printf("Month Number %d Is December !!!\n\n", month_number);

	else // Like 'default' ... just like 'default' is optional in switch-case, so is 'else' in the if-else if-else ladder....
		printf("Invalid Month Number %d Entered !!! Please Try Again....\n\n", month_number);

	printf("If - Else If - Else Ladder Complete!!!\n");

	return (0);
}
