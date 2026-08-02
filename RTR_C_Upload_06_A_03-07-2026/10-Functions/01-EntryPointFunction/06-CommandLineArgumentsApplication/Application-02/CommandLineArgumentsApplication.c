// Program Name : CommandLineArgumentsApplication.c

#include <stdio.h>		// 'stdio.h' Contains Declaration Of 'printf()'
#include <stdlib.h>		// 'stdlib.h' Contains Declaration Of 'exit()'

int main(int argc, char* argv[], int* envp[])
{
	// Variable Declarations
	int counter = 0;

	// Code
	if (argc != 4) // Program Name + First Name + Middle Name + Surname = 4 Command Line Arguments Are Required
	{
		printf("\n============================================================================\n");
		printf("Invalid Usage !!! Exitting Now ... \n\n");
		printf("Usage : CommandLineArgumentsApplication <First Name> <Middle Name> <Surname>\n\n");

		exit(0);
	}

	// *** This Program Prints Your Full Name As Entered In The Command Line Arguments ***
	printf("\n============================================================================\n");
	printf("Full Name Is : ");
	for (counter = 1; counter < argc; counter++)	// Loop Starts counter = 1 Because, counter = 0 will result in 'argv[counter]' = 'argv[0]' 
		// Which Is The Name Of The Program Itselg i.e. 'CommandLineArgumentsApplication.exe'
	{
		printf("%s ", argv[counter]);
	}
	printf("\n============================================================================\n");

	return (0);
}
