// Program Name : DefinitionMethod_02.c

#include <stdio.h>		// 'stdio.h' Contains Declaration of 'printf()'

// Entry-Point Function => main() => Valid Return Type (int) and 3 parameters (int argc, char *argv[], char *envp[])

int main(int argc, char *argv[], char *envp[])
{
	// Function Prototype / Declaration / Sigature
	int MySum(void);

	// Variable declarations : Local Variables to main()
	int addition_result;

	// Code
	addition_result = MySum();	// Function call

	printf("\n=====================================================================\n");
	printf("Addition = %d\n\n", addition_result);

	return (0);
}

// ****** User Defined Function : Method Of Definition 2 ******
// ****** Valid (int) Result Value, No Parameters *******

int MySum(void)	// Function Definition
{
	// Variable Declarations : Local Variables to MySum()
	int x, y, addition;

	// Code
	printf("\n=====================================================================\n");
	printf("Enter Integer Value For 'X' : ");
	scanf("%d", &x);

	printf("\n=====================================================================\n");
	printf("Enter Integer Value For 'Y' : ");
	scanf("%d", &y);

	addition = x + y;

	return (addition);
}
