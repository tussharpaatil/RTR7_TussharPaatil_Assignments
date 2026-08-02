// Program Name : LocalStaticVariables.c

#include <stdio.h>

// **** Global Scope *****

int main(void)
{
	// ***** Local Scope Of main() begins *****

	// Variable Declarations
	// 'x' is a Local Variable. It is local to main() only.
	int x = 5;

	// Function Prototypes
	void change_count(void);

	// Code
	printf("\n=====================================================================\n");
	printf("X = %d\n\n", x);

	// local_variable is initialized to 0.
	// local_variable = local_variable + 1 = 0 + 1 = 1
	change_count();
	
	// Since, 'local_variable' is a local static variable of change_count(), it WILL retain its value from previous call to change_count().
	// So local_variable is 1.
	// local_variable = local_variable + 1 = 1 + 1 = 2
	change_count();

	// Since, 'local_variable' is a local static variable of change_count(), it WILL retain its value from previous call to change_count().
	// So local_variable is 2
	// local_variable = local_variable + 1 = 2 + 1 = 3
	change_count();

	return (0);

	// ***** Local Scope Of main() ends *****
}

// ***** Global Scope *****

void change_count(void)
{
	// ***** Local Scope Of change_count() begins *****

	// Variable Declarations
	// 'local_variable; is a Local Static Variable. It is to change_count() only.
	// It will remain its value between calls to change_count()
	
	static int local_variable = 0;

	// Code 
	local_variable = local_variable + 1;
	printf("Local Variable = %d\n", local_variable);

	// ***** Local Scope Of change_count() ends *****
}

// ***** Global Scope ******
