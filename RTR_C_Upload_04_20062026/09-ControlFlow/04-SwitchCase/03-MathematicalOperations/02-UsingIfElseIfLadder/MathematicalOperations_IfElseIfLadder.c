// Program Name : MathematicalOperations_IfElseIfLadder.c
#include <stdio.h> // For printf()
#include <conio.h>

int main(void)
{
	// Variable Declarations
	int x, y;
	int result;

	char option, option_division;

	// Code
	printf("\n=================================================================\n");

	printf("Enter Value For 'X' : ");
	scanf("%d", &x);

	printf("Enter Value For 'Y' : ");
	scanf("%d", &y);

	printf("Enter Option In Character : \n\n");
	printf("'A' or 'a' For Addition : \n");
	printf("'S' or 's' For Subtraction : \n");
	printf("'M' or 'm' For Multiplication : \n");
	printf("'D' or 'd' For Division : \n\n");

	printf("Enter Option : ");
	option = getch();

	printf("\n===================================================================\n");

	if (option == 'A' || option == 'a')
	{
		result = x + y;
		printf("Addition Of X = %d And Y = %d Gives Result %d !!! \n\n", x, y, result);
	}

	else if (option == 'S' || option == 's')
	{
		if (x >= y)
		{
			result = x - y;
			printf("Subtraction Of Y = %d From X = %d Gives Result %d !!!\n\n", y, x, result);
		}
		else
		{
			result = y - x;
			printf("Subtraction Of X = %d From Y = %d Gives Result %d !!!\n\n", x, y, result);
		}
	}
	else if (option == 'M' || option == 'm')
	{
		result = x * y;
		printf("Multiplication Of X = %d And Y = %d Gives Result %d !!!\n\n", x, y, result);
	}
	else if (option == 'D' || option == 'd')
	{
		printf("Enter Option In Character : \n\n");
		printf("'Q' or 'q' or '/' For Quotient Upon Division : \n");
		printf("'R' or 'r' or '%%' For Remainder Upon Division : \n");

		printf("Enter Option : ");
		option_division = getch();

		printf("\n===================================================================\n");

		if (option_division == 'Q' || option_division == 'q' || option_division == '/')
		{
			if (x >= y)
			{
				result = x / y;
				printf("Division Of Y = %d By X = %d Gives Quotient = %d !!! \n\n", y, x, result);
			}
		}
		else if (option_division == 'R' || option_division == 'r' || option_division == '%')
		{
			if (x >= y)
			{
				result = x % y;
				printf("Division Of X = %d By Y = %d Gives Remainder = %d !!!\n\n", x, y, result);
			}
			else
			{
				result = y % x;
				printf("Division Of Y = %d By X = %d Gives Remainder = %d !!!\n\n", y, x, result);
			}
		}
		else
			printf("Invalid Character %c Entered For Division !!! PLease try again... \n\n", option_division);
	}
	else
		printf("Invalid Character %c Entered !!! Please try again....\n\n", option);

	printf("If - Else If Ladder Complete !!! \n");

	return (0);
}