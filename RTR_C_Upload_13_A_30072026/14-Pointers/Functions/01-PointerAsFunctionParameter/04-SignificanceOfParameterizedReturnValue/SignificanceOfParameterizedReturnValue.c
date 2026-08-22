// Program Name : SignificanceOfParameterizedReturnValue.c

#include <stdio.h>

enum
{
	NEGATIVE = -1,
	ZERO,
	POSITIVE
};

int main(void)
{
	// Function Declarations
	int Difference(int, int, int*);

	// Variable Declarations
	int x, y;
	int result, ret;

	// Code 
	printf("\n==================================\n");
	printf("Enter Value Of 'X' : ");
	scanf("%d", &x);

	printf("\n==================================\n");
	printf("Enter Vaue Of 'Y' : ");
	scanf("%d", &y);

	ret = Difference(x, y, &result);

	printf("\n==================================\n");
	printf("Difference Of %d And %d = %d\n\n", x, y, result);

	if (ret == POSITIVE)
		printf("The Difference Of %d And %d Is Positive !!! \n\n", x, y);

	else if (ret == NEGATIVE)
		printf("The Difference Of %d And %d Is Negative !!!\n\n", x, y);

	else
		printf("The Difference Of %d And %d Is Zero !!!\n\n", x, y);

	return (0);
}

// We Want Our Function Difference() To Perform 2 jobs.

// One, Is To Subtract The Input Numbers ('q' from 'p') and The Second, Is To Tell The difference Of 'p' and 'q' 
// Is Positive or Negative Or ZEro ..
// But Any Function Has Only One Valid Return Value, Then How Can We Manage To Return Two Values To The Calling Function ?
// This Is Where Parameterized Return Value Comes Into The Picture..
// We can Return The ACtual Difference Of 'p' And 'q', That ism The Actual Answer Value, Via Out-Parameter / Parameterized Return Value
// And We Can Return The status Of the result (POSITIVE/ NEGATIVE, ZERO) Via The Actual Return Value Of The Function

int Difference(int p, int q, int* diff)
{
	// Code
	*diff = p - q;

	if (*diff > 0)
		return (POSITIVE);

	else if (*diff < 0)
		return (NEGATIVE);

	else
		return (ZERO);
}
