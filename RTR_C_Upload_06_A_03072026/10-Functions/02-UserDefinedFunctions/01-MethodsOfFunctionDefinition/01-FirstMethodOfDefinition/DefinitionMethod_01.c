// Program Name : DefinitionMethod_01.c

#include <stdio.h>	// 'stdio.h' Contains Declaration of 'printf()'

// Entry-point Function => main() => Valid Return Type (int) and 3 Parameters (int argc, char *argv[], char *envp[])
int main(int argc, char* argv[], char* envp[])
{
	// Function Prototype / Declaration / Signature
	void MySum(void);

	// Code
	MySum();	// Function call
	return (0);
}

// ***** User Defined Function : Method Of Defition 1 *****
// ***** No Return Value, No Parameters *****

void MySum(void)	// Function Definition
{
	// Variable Declarations : Local Variable To MySum()
	int x, y, addition;

	// Code
	printf("\n============================================================================\n");
	printf("Enter Integer Value For 'X' : ");
	scanf("%d", &x);

	printf("Enter Integer Value For 'Y' : ");
	scanf("%d", &y);

	addition = x + y;
	printf("Addition Of %d And %d = %d\n\n", x, y, addition);
}
