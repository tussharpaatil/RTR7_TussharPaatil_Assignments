// Progam Name : DefinitionMethod_03.c

#include <stdio.h>

// Entry-Point Function => Valid Return Type (int) and 3 Parameters (int argc, char *argv[], char *envp[])
int main(int argc, char* argv[], char* envp[])
{
	// Function Prototype / Declaration / Signiture
	void MySum(int, int);

	// Variable Declarations : Local Variables to main()
	int x, y;

	// Code
	printf("\n=====================================================================\n");
	printf("Enter Integer Value For 'X' : ");
	scanf("%d", &x);

	printf("\n=====================================================================\n");
	printf("Enter Integer Value For 'Y' : ");
	scanf("%d", &y);

	MySum(x, y);	// Function Call

	return (0);
}

// **** User Defined Function : Method Of Definition 3 *******
// **** No Return Value, Valid Parameters (int, int) *******

void MySum(int p, int q)	// Function Definition
{
	// Variable Declarations : Local Variable to MySum()
	int addition = 0;

	// Code
	addition = p + q;
	printf("\n=====================================================================\n");

	printf("Addition Of %d And %d = %d\n\n", p, q, addition);
}
