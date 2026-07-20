// Program Name : MathematicalOperations_SwitchCase.c

#include <stdio.h> // For printf()
#include <conio.h> // For getch()

int main(void)
{
	// Variable Declarations
	int x, y;
	int result;

	char option, option_division;

	// Code
	printf("\n=====================================================\n");

	printf("Enter Value For 'X' : ");
	scanf("%d", &x);

	printf("Enter Value For 'Y' : ");
	scanf("%d", &y);

	printf("Enter Option In Character : \n\n");
	printf("'A' or 'a' For Addition : \n");
	printf("'S' or 's' For Subtraction : \n");
	printf("'M' or 'm' For Multiplication : \n");
	printf("'D' or 'd' For Division : \n");

	printf("Enter Option : ");
	option = getch();

	printf("\n======================================================\n");

	switch (option)
	{
		// FALL THROUGH CONDITION FOR 'A' and 'a'
	case 'A':
	case 'a':
		result = x + y;
		printf("Addition Of X = %d And Y = %d Gives Result %d !!!\n\n", x, y, result);
		break;

		// FALL THROUGH CONDITION FOR 'S'and 's'
	case 'S':
	case 's':
		if (x >= y)
		{
			result = x - y;
			printf("Subtraction Of Y = %d From X = %d Gives Result %d !!!\n\n", x, y, result);
		}
		else
		{
			result = y - x;
			printf("Subtraction Of A = %d From B = %d Gives Result %d !!!\n\n", x, y, result);
		}
		break;

		// FALL THROUGH CONDITION FOR 'M' and 'm'
	case 'M':
	case 'm':
		result = x * y;
		printf("Multiplication Of X = %d And Y = %d Gives Result %d !!!\n\n", x, y, result);
		break;

		// FALL THROUGH CONDITION FOR 'D' and 'd'
	case 'D':
	case 'd':
		printf("Enter Option In Character : \n\n");
		printf("'Q' or 'q' '/' For Quotient Upon Division : \n");
		printf("'R' or 'r' or '%%' For Remainder Upon Division : \n");

		printf("Enter Option : ");
		option_division = getch();

		printf("\n============================================================================\n");
		switch (option_division)
		{
		// FALL THROUGH CONDITION FOR 'Q' and 'q' and '/'
		case 'Q':
		case 'q':
		case '/':
			if (x >= y)
			{
				result = x / y;
				printf("Division Of X = %d By Y = %d Gives Quotient = %d !!!\n\n", x, y, result);
			}
			else
			{
				result = y / x;
				printf("Division Of Y = %d By X = %d Gives Quotient = %d !!!\n\n", x, y, result);
			}
			break;  // "break" of case 'Q' or case 'q' or '/'
		case 'R':
		case 'r':
		case '%':
			if (x >= y)
			{
				result = x % y;
				printf("Division Of X = %d By Y = %d Gives Remainder = %d !!!\n\n", y, x, result);
			}
			break; // 'break' of case 'R' or 'r' or '%'
		default: // 'default' case for switch(option_division)
			printf("Invalid Character %c Entered For Division !!! Please Try Again...\n\n", option_division);
			break; // 'break' of 'default' of switch(optin_division)
		} // ending curly brace of switch(option_division)
		
		break; // 'break' of case 'D' or case 'd'

	default: // 'default' case for switch (option)
		printf("Invalid Character %c Entered !!! Please Try Again...\n\n", option);
		break;
	} // Ending curly brace of switch(option)

	printf("Switch Case Block Complete !!!\n");

	return (0);
}
