// Program Name : ExternalGlobalVariableInSingleFile.c

#include <stdio.h>

// ***** Global Scope *****

int main(void)
{
	// Function Prototypes
	void change_count(void);

	// Variable Declarations
	extern int global_counter_variable;

	// Code
	printf("\n");
	printf("Value Of global_counter_variable before change_count() = %d\n", global_counter_variable);
	change_count();
	printf("Value Of global_counter_variable after change_count() = %d\n", global_counter_variable);

	return (0);
}

// ***** Global Scope *****
// global_counter_variable is a global variable.
// Since, It is declared before change_count(), it can be accessed and used as any ordinary global variable in change_count()
// Since, It is declared after main(), it must be first re-declared in main() as an external global variable by means of the 
// 'extern' keyword and the type of the variable.
// Once this is done, it can be used as an ordinary global variable in main as well.

int global_counter_variable = 0;

void change_count(void)
{
	// Code
	global_counter_variable = 6;
	printf("Value Of global_counter_variable in change_count() = %d\n", global_counter_variable);
}
