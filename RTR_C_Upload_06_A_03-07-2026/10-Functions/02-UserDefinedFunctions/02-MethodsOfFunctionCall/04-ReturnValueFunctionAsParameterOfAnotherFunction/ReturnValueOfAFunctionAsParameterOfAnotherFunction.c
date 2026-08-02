// Program Name : ReturnValueOfAFunctionAsParameterOfAnotherFunction.c

#include <stdio.h>

int main(int argc, char* argv[], char* envp[])
{
	// Function Prototypes Or Declarations
	int MyAddition(int, int);

	// Variable Declarations
	int answer;
	int number1, number2;
	int number3, number4;

	// Code
	number1 = 10;
	number2 = 20;
	number3 = 30;
	number4 = 40;

	answer = MyAddition(MyAddition(number1, number2), MyAddition(number3, number4));
	// Return Value Of MyAddition() Is Sent As Parameter To Another Call To MyAddition()

	printf("\n============================================================================\n");
	printf("%d + %d + %d + %d = %d\n", number1, number2, number3, number4, answer);
	printf("\n============================================================================\n");

	return (0);
}

// ***** Function Definition Of MyAddition() ******
int MyAddition(int x, int y)	// Function Definition
{
	// Variable Declaration
	int addition;

	// Code
	addition = x + y;
	return (addition);
}
