// Program Name : IfElseIfLadder.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int number;

	// Code
	printf("===========================================================\n\n");

	printf("Enter Value For 'number' : ");
	scanf("%d", &number);

	// IF - ELSE - IF LADDER BEGINS FROM HERE ....
	if (number < 0)
		printf("Number = %d Is Less Than 0 (NEGATIVE) !!!\n\n", number);

	else if ((number > 0) && (number <= 100))
		printf("Number = %d Is Between 0 And 100 !!!\n\n", number);

	else if ((number > 100) && (number <= 200))
		printf("Number = %d Is Between 100 And 200 !!!\n\n", number);

	else if ((number > 200) && (number <= 300))
		printf("Number = %d Is Between 200 And 300 !!!\n\n", number);

	else if ((number > 300) && (number <= 400))
		printf("Number = %d Is Between 300 And 400 !!!\n\n", number);

	else if ((number > 400) && (number <= 500))
		printf("Number = %d Is Between 400 And 500 !!!\n\n", number);
	else if (number > 500)
		printf("Number = %d Is Greater Than 500 !!!\n\n", number);

	// **** NO TERMINATING 'ELSE' IN THIS LADDER !!! ****

	return (0);
}
