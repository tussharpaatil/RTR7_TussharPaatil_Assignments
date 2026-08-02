// Program Name : CallMethod_01.c
#include <stdio.h>	// 'stdio.h' Contains Declaration Of 'printf()'

// ***** User Defined Functions : Methods Of Calling Function 1 ******
// ***** Calling All Functions In main() Directly ******

// Entry-Point Function => main() => Valid Return Value (int) and 3 paramters (int argc, char *argv[], char *envp[])
int main(int argc, char* argv[], char* envp[])
{
	// Function Prototypes or Declarations
	void MyAddition(void);
	int MySubtraction(void);
	void MyMultiplication(int, int);
	int MyDivision(int, int);

	// Variable Declarations
	int subtraction_result;
	int x_multiplication, y_multiplication;
	int x_division, y_division, division_result;

	// Code

	// **** ADDITION *****
	MyAddition();	// Function Call

	// **** SUBTRACTION ****
	subtraction_result = MySubtraction();	// Function Call
	printf("\n==============================================================================\n");
	printf("Subtraction Yeilds Result = %d \n", subtraction_result);

	// ******** MULTIPLICATIONS ***********
	printf("\n==============================================================================\n");
	printf("Enter Integer Value For 'X' For Multiplication : ");
	scanf("%d", &x_multiplication);

	printf("\n==============================================================================\n");
	printf("Enter Integer Value For 'Y' For Multiplication : ");
	scanf("%d", &y_multiplication);

	MyMultiplication(x_multiplication, y_multiplication);	// Function Call

	//***** DIVISION ******
	printf("\n==============================================================================\n");
	printf("Enter Integer Value For 'X' for Division : ");
	scanf("%d", &x_division);

	printf("\n==============================================================================\n");
	printf("Enter Integer Value For 'Y' For Division : ");
	scanf("%d", &y_division);

	division_result = MyDivision(x_division, y_division);	// Function Call
	printf("\n==============================================================================\n");

	printf("Division Of %d And %d Gives = %d (Quotient)\n", x_division, y_division, division_result);
	printf("\n==============================================================================\n");

	return (0);
}

// ***** Function Definition Of MyAddition() ******
void MyAddition(void)	// Function Definition
{
	// Variable Declarations : Local Variables To MyAddition()
	int x, y, addition;

	// Code 
	printf("\n==============================================================================\n");
	printf("Enter Integer Value For 'X' For Addition : ");
	scanf("%d", &x);

	printf("\n==============================================================================\n");
	printf("Enter Integer Value For 'Y' For Addition : ");
	scanf("%d", &y);

	addition = x + y;

	printf("\n==============================================================================\n");
	printf("Addition Of %d And %d = %d\n\n", x, y, addition);
}

// **** Function Definition Of MySubtraction() ******
int MySubtraction(void)		// Function Definition
{
	// Variable Declarations : Local Variables To MySubtraction()
	int x, y, subtract;

	// Code
	printf("\n==============================================================================\n");
	printf("Enter Integer Value For 'X' For Subtraction : ");
	scanf("%d", &x);

	printf("\n==============================================================================\n");
	printf("Enter Integer Value For 'y' For Subtraction : ");
	scanf("%d", &y);

	subtract = x - y;
	return (subtract);
}

// **** Function Definition Of MyMultiplication() *****
void MyMultiplication(int x, int y) // Function Definition
{
	// Variable Declarations : Local Variables to MyMultiplication()
	int multiply;

	// Code
	multiply = x * y;

	printf("\n==============================================================================\n");
	printf("Multiplication Of %d And %d = %d\n\n", x, y, multiply);
}

// ***** Function Definition Of MyDivision() *****
int MyDivision(int x, int y)	// Function Definition
{
	// Variable Declarations : Local Variables to MyDivision()
	int div_quotient;

	// Code
	if (x > y)
		div_quotient = x / y;
	else
		div_quotient = y / x;

	return (div_quotient);
}
