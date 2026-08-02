// Program Name : ReturnValueOfFunctionAsReturnValueOfAnotherFunction.c

#include <stdio.h>

int main(int argc, char* argv[], char* envp[])
{
	// Function Prototypes Or Declarations
	int MyAddition(int, int);

	// Variable Declarations
	int answer;
	int number1, number2;

	// Code
	number1 = 10;
	number2 = 20;

	printf("\n============================================================================\n");
	printf("%d + %d = %d\n", number1, number2, MyAddition(number1, number2));
	printf("\n============================================================================\n");

	return (0);
}

// ***** Function Definition Of MyAddition() ******
int MyAddition(int x, int y)	// Function Definition
{
	// Function Prototype
	int Sum(int, int);

	// Code
	return (Sum(x, y)); // Return Value Of Function Sum() As Return Value Of Function MyAddition()
}

int Sum(int p, int q)
{
	// Code
	return (p + q);
}
