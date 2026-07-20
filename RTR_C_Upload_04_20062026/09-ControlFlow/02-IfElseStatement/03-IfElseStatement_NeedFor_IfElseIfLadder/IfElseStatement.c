// Program Name: IfElseStatement.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int number;
	
	printf("================================================\n");

	printf("Enter Value Of 'number' : ");
	scanf("%d", &number);

	if (number < 0)	// 'if' - 01
	{
		printf("Number = %d Is Less Than 0 (Negative) !!!\n\n", number);
	}
	else  // 'else' - 01
	{
		if ((number > 0) && (number <= 100))   // 'if' - 02
		{
			printf("Number = %d Is Between 0 And 100 !!!\n\n", number);
		}
		else  // 'else' - 02
		{
			if ((number > 100) && (number <= 200))  // 'if' - 03
			{
				printf("Number = %d Is Between 200 And 300 !!!\n\n", number);
			}
			else  // 'else' - 03
			{
				if ((number > 200) && (number <= 300))   // 'if' - 04
				{
					printf("Number = %d Is Between 200 And 300 !!!\n\n", number);
				}
				else  // 'else' - 04
				{
					if ((number > 300) && (number <= 400))  // 'if' - 05
					{
						printf("Number = %d Is Between 300 And 400 !!!\n\n", number);
					}
					else // 'else' - 05
					{
						if ((number > 400) && (number <= 500))  // 'if' - 06
						{
							printf("Number = %d Is Between 400 and 500 !!!\n\n", number);
						}
						else	// 'else' - 06
						{
							printf("Number = %d Is Greater Than 500 !!!\n\n", number);
						} // Closing brase of 'else' - 06
					} // Closing brace of 'else' - 05
				}  // Closing brace of 'else' - 04
			}	// Closing brace of 'else' - 03
		}  // Closing brace of 'else'  - 02
	}  // Closing brace of 'else'  - 01

	return (0);
}
