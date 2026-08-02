// Program Name : CallMethod_01.c
#include <stdio.h>	// 'stdio.h' Contains Declaration of 'printf()'

// ***** User Defined Functions : Methods Of Calling Function 3 *****
// ***** Calling Only One Function Directly In main(), Rest Of The Functions Trace Their Call Indirectly To main() *****

int main(int argc, char* argv[], char* envp[])
{
	// Function Prototypes
	void Function_Country();

	// Code
	Function_Country();
	return (0);
}

void Function_Country(void)		// Function Definition
{
	// Function Declarations
	void Function_OfAMC(void);

	// Code
	Function_OfAMC();

	printf("\n===========================================================================\n");

	printf("I live In India.");

	printf("\n===========================================================================\n");
}

void Function_OfAMC(void)		// Function Definition
{
	// Function Declarations
	void Function_Surname(void);

	// Code 
	Function_Surname();

	printf("\n===========================================================================\n");

	printf("Of ASTROMEDICOMP.");
}

void Function_Surname(void)		// Function Definition
{
	// Function Declarations
	void Function_MiddleName(void);

	// Code
	Function_MiddleName();

	printf("\n===========================================================================\n");

	printf("Paatil");
}

void Function_MiddleName(void)	// Function Definition
{
	void Function_FirstName(void);

	// Code
	Function_FirstName();

	printf("\n===========================================================================\n");

	printf("Pramod");
}

void Function_FirstName(void)	// Function Definition
{
	// Function Declarations
	void Function_Is(void);

	// Code
	Function_Is();

	printf("\n===========================================================================\n");

	printf("Tusshar");
}

void Function_Is(void)		// Function Definition
{
	// Function Declarations
	void Function_Name(void);

	// Code
	Function_Name();

	printf("\n===========================================================================\n");

	printf("Is");
}

void Function_Name(void)	// Function Definition
{
	// Function Declarations
	void Function_My(void);

	// Code
	Function_My();

	printf("\n===========================================================================\n");

	printf("Name");
}

// ***** User-Defined Functions Definitions... ******
void Function_My(void)		// Function Definition
{
	// Code
	printf("\n===========================================================================\n");

	printf("My");
}
