// Program Name : IfElseStatement.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int x, y, m;

	// Code 
	x = 3;
	y = 24;
	m = 24;

	// **** First if-else PAIR ****
	printf("======================================================\n");

	if (x < y)
	{
		printf("Entering First if-block....\n\n");
		printf("X Is Less Than Y !!!\n\n");
	}
	else
	{
		printf("Entering First else-block....\n\n");
		printf("X Is Not Less Than Y !!!\n\n");
	}
	printf("First if-else Pair Done !!!\n\n");

	// **** Second if-else PAIR ****
	printf("======================================================\n");
	if (x != m)
	{
		printf("Entering Second if-block....\n\n");
		printf("Y Is Not Equal To M !!!\n\n");
	}
	else
	{
		printf("Entering Second else-block...\n\n");
		printf("Y Is Equal To M !!!\n\n");
	}
	printf("Second if-else Pair Done !!! \n\n");

	return (0);
}
