// Program Name : UserInputDependentIteration.c 
#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int int_number, number, counter;

	// Code
	printf("\n==========================================================================\n");

	printf("Enter An Integer Value Which Iteration Must Begin : ");
	scanf("%d", &int_number);

	printf("How Many Digits Do You Want To Print From %d Onwards ? : ", int_number);
	scanf("%d", &number);

	printf("Printing Digits %d to %d : \n\n", int_number, (int_number + number));

	for (counter = int_number; counter <= (int_number + number); counter++)
	{
		printf("\t %d \n", counter);
	}

	printf("\n==========================================================================\n");

	return (0);
}
