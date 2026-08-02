// Program Name : OrdinaryLocalVariables.c

#include <stdio.h>

// ***** Global Scope *****

int main(void)
{
	// ***** Local Scope Of main() begins *****
	
	// Variable Declarations
	// 'x' is a Local Variable. It is local to main() only.
	int x = 6;

	// Function Prototypes
	void change_count(void);

	// Code 
	printf("\n======================================================================\n");
	printf("X = %d\n\n", x);

	// local_variable is initialized to 0.
	// local_variable = local_variable + 1 = 0 + 1 = 1
	change_count();

	// Since, 'local_variable' is an ordinary local variable of change_count(), it will NOT remain its value from previoud call to count_change().
	// So local_variable is AGAIN initialized to 0
	// local_variable = local_variable + 1 = 0 + 1 = 1
	change_count();

	// Since, 'local_variable' is a ordinary local variable of change_count(), it will NOT remain its value from previous call to change_count().
	// So local_count is AGAIN initialized to 0
	// local_count = local_count + 1 = 0 + 1 = 1
	change_count();

	return (0);

	// ***** Local Scope Of main() ends *****
}

// ***** Global Scope *****

void change_count(void)
{
	// ****** Local Scope Of change_count() begins ******

	// Variable Declarations
	// 'local_variable' is a Local Variable. It is local to change_change() only.
	int local_variable = 0;

	// Code
	local_variable = local_variable + 1;

	printf("Local Variable = %d\n", local_variable);

	// ***** Local Scope Of change_count() ends *****
}

// ***** Global Scope ******
