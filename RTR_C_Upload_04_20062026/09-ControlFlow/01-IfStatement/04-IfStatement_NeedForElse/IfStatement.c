// Program Name: IfStatement.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int age_elig;

	// Code
	printf("====================================================\n");

	printf("Enter Age : ");
	scanf("%d", &age_elig);

	if (age_elig >= 18)
	{
		printf("You Are Eligible For Voting !!!\n\n");
	}
	printf("You Are Not Eligible For Voting !!!\n\n");

	return (0);
}
