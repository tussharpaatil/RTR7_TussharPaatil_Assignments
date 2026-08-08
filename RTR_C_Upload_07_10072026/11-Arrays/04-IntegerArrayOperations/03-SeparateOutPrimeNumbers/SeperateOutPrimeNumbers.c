// Program Name : SeperateOutPrimeNumbers.c

#include <stdio.h>

#define NUMBER_ELEMENTS 10

int main(void)
{
	// Variable Declarations
	int intArray[NUMBER_ELEMENTS];
	int x, number, y, count = 0;

	// Code
	printf("\n=================================================================\n");
	// ***** Array Elements Input *****
	printf("Enter Integer Elements For Array : \n\n");
	for (x = 0; x < NUMBER_ELEMENTS; x++)
	{
		scanf("%d", &number);

		// If 'number' is negative ( < 0 ), then convert it to positive (multiply by -1)
		if (number < 0)
			number = -1 * number;

		intArray[x] = number;
	}

	// ***** Printing Entire Array *****
	printf("\n================================================================\n");
	printf("Prime Numbers Amongst The Array Elements Are : \n\n");
	for (x = 0; x < NUMBER_ELEMENTS; x++)
	{
		for (y = 1; y <= intArray[x]; y++)
		{
			if ((intArray[x] % y) == 0)
				count++;
		}

		// Number 1 Is Neither A Prime Number Nor A Constant 
		// If A Number If Prime, It Is Only Divisible By 1 And Itself.
		// Hence, If A Number Is Prime, The Value Of 'count' Will Be exactly 2.
		// If The Value Of 'count' Is Greater Than 2, The Number Is Divisible By Numbers Other Than 1 And Itself 
		// And Hence, It Is Not Prime 
		// The Value Of 'count' Will Be 1 Only If intArray[x] Is 1.
		if (count == 2)
			printf("%d\n", intArray[x]);
		count = 0;		// RESET 'count' To 0 For Checking The Next Number ..... 
	}

	return (0);
}
