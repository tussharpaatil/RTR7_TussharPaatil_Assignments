// Program Name : IfElseStatement.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int age_elig;

	printf("========================================================\n\n");
	printf("Enter Age : ");
	scanf("%d", &age_elig);
	printf("========================================================\n\n");

	if (age_elig > 18)
	{
		printf("Entering if-block...\n\n");
		printf("You Are Eligible For Voting !!!\n\n");
	}
	else
	{
		printf("Entering else-block...\n\n");
		printf("You Are Not Eligible For Voting !!!\n\n");
	}
	printf("Bye !!!\n\n");

	return (0);
}
