// Program Name : CommandLineArgumentsApplication.c

#include <stdio.h>	// 'stdio.h' Contains Declaration Of 'printf()'
#include <ctype.h>	// 'ctype.h' Contains Declaration Of 'atoi()'
#include <stdlib.h>	// 'stdlib.h' Contains Declarations of 'exit()'

int main(int argc, char* argv[], char* envp[])
{
	// Variable Declarations
	int counter;
	int number;
	int addition = 0;

	// Code
	if (argc == 1)
	{
		printf("\n==============================================================================\n");
		printf("No Numbers Given For Addition !!! Exitting Now ... \n\n");
		printf("Usage : CommandLineArgumentsApplication <First Number> <Second Number> ....\n\n");

		exit(0);
	}

	// *** This Program Adds All Command Line Arguments Given In Integer Form Only And Outputs The Sum/Addition ***
	// *** Due To Use Of atoi(), All Command Line Arguments Of Types Other Than 'int' Are Ignored ***
	printf("\n==============================================================================\n");
	printf("Sum Of All Integer Command Line Arguments Is : \n\n");
	for (counter = 1; counter < argc; counter++)	// Loop Starts From counter = 1 Because, counter = 0 will result in 'argv[counter]' = 'argv[0]
		// Which Is The Name Of The Program Itself i.e. 'CommandLineArgumentsApplication.exe'
	{
		number = atoi(argv[counter]);
		addition = addition + number;
	}

	printf("Addition = %d\n\n", addition);

	return (0);
}
