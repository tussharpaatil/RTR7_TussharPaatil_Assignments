// Program Name : EntryPointFunction.c

#include <stdio.h>	// 'stdio.h' contains declaration of 'printf()'

// Entry-Point Function => main() => Valid Return Type (int) and 2 Parameters (int argc, char *argv[])

int main(int argc, char* argv[])
{
	// Variable Declarations
	int counter;

	// Code
	printf("\n============================================================================\n");
	printf("Hello World !!!\n\n");	// Library Function
	printf("Number Of Command Line Arguments = %d\n\n", argc);
	
	printf("Command Line Arguments Passed To This Program Are : \n\n");

	for (counter = 0; counter < argc; counter++)
	{
		printf("Command Line Argument Number %d = %s\n", (counter + 1), argv[counter]);
	}
	printf("\n============================================================================\n");
	
	return (0);
}
