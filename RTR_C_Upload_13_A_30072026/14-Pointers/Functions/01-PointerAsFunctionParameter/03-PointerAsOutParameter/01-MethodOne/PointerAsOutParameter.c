// Program Name : PointerAsOutParameter.c

#include <stdio.h>

int main(void)
{
	// Function Declarations
	void MathematicalOperations(int, int, int*, int*, int*, int*, int*);

	// Variable Declaration
	int x;
	int y;
	int result_addition;
	int result_subtraction;
	int result_multiplication;
	int result_quotient;
	int result_remainder;

	// Code
	printf("\n================================\n");
	printf("Enter Value Of 'X' : ");
	scanf("%d", &x);

	printf("\n================================\n");
	printf("Enter Value Of 'Y' : ");
	scanf("%d", &y);

	// Passing Addresses To Function... Function Will Full Then Up With Values... Hence, They Go Into The Function As Address 
	// Parameters And Come Out Of The Function Filled With Valid values..
	// Thus, (&result_addition, &result_subtraction, &result_multiplication, &result_multiplication, &result_quotient, 
	// &result_remainder) Are Called "Out parameters" Or "Prameterized Return Values"... Return Values Of Functions coming Via Parameters
	// Hence, Although Each Function Has Only One Return Value, Using The Concept Of "Parameterized Return Values", Our Function 
	// "MathematicalOperations()" Has Given Us 5 Return Values !!!

	MathematicalOperations(x, y, &result_addition, &result_subtraction, &result_multiplication, &result_quotient, &result_remainder);

	printf("\n=================================\n");
	printf("******** Results ********** : \n\n");
	printf("Addition       = %d\n\n", result_addition);
	printf("Subtraction    = %d\n\n", result_subtraction);
	printf("Multiplication = %d\n\n", result_multiplication);
	printf("Quotient       = %d\n\n", result_quotient);
	printf("Remainder      = %d\n\n", result_remainder);

	return (0);
}

void MathematicalOperations(int p, int q, int* addition, int* subtract, int* multiply, int* quotient, int* remainder)
{
	// Code
	*addition = p + q; // Value at address 'addition' = (p + q)
	*subtract = p - q; // Value at address 'subtract' = (p - q)
	*multiply = p * q; // Value at address 'multiply' = (p * q)
	*quotient = p / q; // Value at address 'quotient' = (p / q)
	*remainder = p % q; // Value at address 'remainder' = (p % q)
}
