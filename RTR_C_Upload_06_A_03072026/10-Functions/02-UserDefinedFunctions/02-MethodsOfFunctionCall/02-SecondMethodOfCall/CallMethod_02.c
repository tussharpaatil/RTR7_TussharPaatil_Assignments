// Program Name : CallMethod_02.c
#include <stdio.h> // 'stdio.h' Contains declaration of 'printf()'

// ***** User Defined Functions : Method Of Calling Function 2 ******
// ***** Calling Only Two Functions Directly In main(), Rest Of The Functions Trace Their Indirectly To main() *****

int main(int argc, char* argv[], char* envp[])
{
	// Function Prototypes
	void display_information(void);
	void Function_Country(void);

	// Code
	display_information();	// Function Call
	Function_Country();		// Function Call

	return (0);
}

// ***** User-Defined Functions Definitions.... *****

void display_information(void)	// Function Definition
{
	// Function Prototypes
	void Function_My(void);
	void Function_Name(void);
	void Function_Is(void);
	void Function_FirstName(void);
	void Function_MiddleName(void);
	void Function_Surname(void);
	void Function_OfAMC(void);

	// Code

	// ***** Function Calls *****
	Function_My();
	Function_Name();
	Function_Is();
	Function_FirstName();
	Function_MiddleName();
	Function_Surname();
	Function_OfAMC();
}

void Function_My(void)	// Function Definition
{
	// Code
	printf("\n===========================================================================\n");

	printf("My");
}

void Function_Name(void)	// Function Definition
{
	// Code
	printf("\n===========================================================================\n");

	printf("Name");
}

void Function_Is(void)	// Function Definition
{
	// Code
	printf("\n===========================================================================\n");

	printf("Is");
}

void Function_FirstName(void)	// Function Definition
{
	printf("\n===========================================================================\n");

	printf("Tusshar");
}

void Function_MiddleName(void)	// Function Definition
{
	printf("\n===========================================================================\n");

	printf("Pramod");
}

void Function_Surname(void)		// Function Definition
{
	printf("\n===========================================================================\n");

	printf("Paatil");
}

void Function_OfAMC(void)		// Function Definition
{
	printf("\n===========================================================================\n");

	printf("Of ASTROMEDICOMP.");
}

void Function_Country(void)	// Function Definition
{
	printf("\n===========================================================================\n");

	printf("I live in India.");

	printf("\n===========================================================================\n");
}

