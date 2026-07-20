// Program Name: IfStatement.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int number;

	// Code
	printf("=============================================================\n");

	printf("Enter Value for 'number' : ");
	scanf("%d", &number);

	if (number < 0)
	{
		printf("Number = %d Is Less Than 0 (Negative).\n\n", number);
	}
	
	if ((number > 0) && (number <= 100))
	{
		printf("Number = %d Is Between 0 And 100.\n\n", number);
	}

	if ((number > 100) && (number <= 200))
	{
		printf("Number = %d Is Between 100 And 200.\n\n", number);
	}

	if ((number > 200) && (number <= 300))
	{
		printf("Number = %d Is Between 200 And 300.\n\n", number);
	}

	if ((number > 300) && (number <= 400))
	{
		printf("Number = %d Is Between 300 And 400.\n\n", number);
	}

	if ((number > 400) && (number <= 500))
	{
		printf("Number = %d Is Between 400 And 500.\n\n", number);
	}

	if (number > 500)
	{
		printf("Number = %d Is Greater Than 500.\n\n", number);
	}

	return (0);
}
