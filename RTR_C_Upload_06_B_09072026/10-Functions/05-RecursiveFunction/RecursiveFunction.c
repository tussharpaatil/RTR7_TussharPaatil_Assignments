// Program Name : RecursiveFunction.c

#include <stdio.h>

int main(int argc, char* argv[], char* envp[])
{
	// Variable Declarations
	unsigned int number;

	// Function Prototype
	void recursive(unsigned int);

	// Code
	printf("\n=========================================================================\n");
	printf("Enter Any Number : \n\n");
	scanf("%u", &number);

	printf("\n=========================================================================\n");
	printf("Output Of Recursive Function : \n\n");

	recursive(number);

	printf("\n=========================================================================\n");

	return (0);
}

void recursive(unsigned int x)
{
	// Code
	printf("x = %d\n", x);

	if (x > 0)
	{
		recursive(x - 1);
	}
}
