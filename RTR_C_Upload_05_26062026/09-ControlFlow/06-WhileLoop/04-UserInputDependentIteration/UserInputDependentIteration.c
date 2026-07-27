// Program Name : UserInputDependentIteration.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int integer_number, number, counter;

	// Code
	printf("\n==================================================================================\n");

	printf("Enter An Integer Value From Which Iteration Must Begin : ");
	scanf("%d", &integer_number);

	printf("How Many Digits Do You Want To Print From %d Onwards ? : ", integer_number);
	scanf("%d", &number);

	printf("Printing Digits %d to %d : \n\n", integer_number, (integer_number + number));

	counter = integer_number;
	while (counter <= (integer_number + number))
	{
		printf("\t%d\n", counter);
		counter++;
	}

	printf("\n==================================================================================\n");

	return (0);
}
