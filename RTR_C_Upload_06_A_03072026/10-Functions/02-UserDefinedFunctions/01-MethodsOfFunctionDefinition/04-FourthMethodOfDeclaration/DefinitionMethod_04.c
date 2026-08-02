// Program Name : DefinitionMethod_04.c

#include <stdio.h>	// 'stdio.h' Contains Declaration of 'printf()'

// Entry-Point Function => main() => Valid Return Type (int) and 3 Parameters (int argc, char *argv[], char *envp[])
int main(int argc, char* argv[], char* envp[])
{
	// Function Prototype / Declaration / Signature
	int MySum(int, int);

	// Variable Declarations : Local Variables to main()
	int x, y, sum;

	// Code
	printf("\n=====================================================================\n");
	printf("Enter Integer Value For 'X' : ");
	scanf("%d", &x);

	printf("\n=====================================================================\n");
	printf("Enter Integer Value For 'Y' : ");
	scanf("%d", &y);

	sum = MySum(x, y);	// Function Call
	printf("\n=====================================================================\n");
	printf("Sum Of  %d And %d = %d\n\n", x, y, sum);

	return (0);
}

// ***** User Defined Function : Method Of Definition 4 *******
// ***** Valid (int) Return Value, Valid Parameters (int, int) *******

int MySum(int x, int y)		// Function Definition
{
	// Variable Declarations: Local Variables to MySum()
	int addition;
	
	// Code
	addition = x + y;
	return (addition);
}
