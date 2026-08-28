// Program Name : PointerAsOutParameter.c

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// Function Declarations
	void MathematicalOperations(int, int, int*, int*, int*, int*, int*);

	// Variable Declarations
	int x;
	int y;
	int* addition_result = NULL;
	int* subtraction_result = NULL;
	int* multiplication_result = NULL;
	int* quotient_result = NULL;
	int* remainder_result = NULL;

	// Code
	printf("\n===============================\n");
	printf("Enter Value Of 'X' : ");
	scanf("%d", &x);

	printf("\n===============================\n");
	printf("Enter Value Of 'Y' : ");
	scanf("%d", &y);

	// Passing Addresses To Function... Function Will FIll Them Up With Values... Hence, They Go Into The Function As Address
	// Parameters And Come Out Of The Function Filled With Valid Values
	// Thus, (&addition_result, &subtraction_result, &multiplication_result, &quotient_result, &remainder_result) Are Called 
	// "Out Parameters" Or "Parameterized Return Values" ... Return Values Of Functions Coming Via Parameters
	// Hence, Although Each Function Has Only One Return Value, Using The Concept Of "Paramerized Return Values", Out Function
	// "MathematicalOperations()" Has Given Us 5 Return Values !!!

	addition_result = (int*)malloc(1 * sizeof(int));
	if (addition_result == NULL)
	{
		printf("Could Not Allocate Memory For 'addition_result'. Exitting Now...\n\n");
		exit(0);
	}

	subtraction_result = (int*)malloc(1 * sizeof(int));
	if (subtraction_result == NULL)
	{
		printf("Count Not Allocate Memory For 'subtraction_result'. Exitting Now...\n\n");
		exit(0);
	}

	multiplication_result = (int*)malloc(1 * sizeof(int));
	if (multiplication_result == NULL)
	{
		printf("Count Not Allocate Memory For 'multiplication_result'. Exitting Now...\n\n");
		exit(0);
	}

	quotient_result = (int*)malloc(1 * sizeof(int));
	if (quotient_result == NULL)
	{
		printf("Count Not Allocate Memory For 'quotient_result'. Exitting Now...\n\n");
		exit(0);
	}

	remainder_result = (int*)malloc(1 * sizeof(int));
	if (remainder_result == NULL)
	{
		printf("Count Not Allocate Memory For 'remainder_result'. Exitting Now...\n\n");
		exit(0);
	}

	MathematicalOperations(x, y, addition_result, subtraction_result, multiplication_result, quotient_result, remainder_result);

	printf("\n=====================================\n");
	printf("************ Result ***************\n\n");
	printf("Addition = %d\n\n", *addition_result);
	printf("Subtraction = %d\n\n", *subtraction_result);
	printf("Multiplication = %d\n\n", *multiplication_result);
	printf("Quatient = %d\n\n", *quotient_result);
	printf("Remainder = %d\n\n", *remainder_result);

	if (remainder_result)
	{
		free(remainder_result);
		remainder_result = NULL;
		printf("Memory Allocated For 'remainder_result' Successfully Freed !!!\n\n");
	}

	if (quotient_result)
	{
		free(quotient_result);
		quotient_result = NULL;
		printf("Memory Allocated For 'quotient_result' Successfully Freed !!!\n\n");
	}

	if (multiplication_result)
	{
		free(multiplication_result);
		multiplication_result = NULL;
		printf("Memory Allocated For 'multiplication_result' Successfully Freed !!!\n\n");
	}

	if (subtraction_result)
	{
		free(subtraction_result);
		subtraction_result = NULL;
		printf("Memory Allocated For 'subtraction_result' Successfully Freed !!!\n\n");
	}

	if (addition_result)
	{
		free(addition_result);
		addition_result = NULL;
		printf("Memory Allocated For 'addition_result' Successfully Freed !!!\n\n");
	}

	return (0);
}

void MathematicalOperations(int p, int q, int* addition, int* subtraction, int* multiplication, int* quotient, int* remainder)
{
	// Code
	*addition = p + q;  // Value At Address 'addition = (p + q)
	*subtraction = p - q; // Value At Address 'subtraction = (p - q)
	*multiplication = p * q; // Value At Address 'multiplication = (p * q)
	*quotient = p / q; // Value At Address 'quotient = (p / q)
	*remainder = p % q; // Value At Address 'remainder = (p % q)
}
