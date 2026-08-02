// Program Name : OrdinaryGlobalVariables.c

#include <stdio.h>

// ***** Global Scope *****

// If not initialized by us, global variables are initialized to their zero values (with respect to their data types. i.e.:
// 0 for int, 0.0 for float and double, etc.) by default.
// But still, for good programming discipline, we shall explicitly initialize our global variable with 0.

int global_counter_variable = 0;

int main(void)
{
	// Function Prototypes
	void change_count_one(void);
	void change_count_two(void);
	void change_count_three(void);

	// Code
	printf("\n");

	printf("main() : Value Of global_counter_variable = %d \n", global_counter_variable);

	change_count_one();
	change_count_two();
	change_count_three();

	printf("\n");
	return (0);
}

// ***** Global Scope *****

void change_count_one(void)
{
	// Code
	global_counter_variable = 100;
	printf("change_count_one() : Value Of global_counter_variable = %d\n", global_counter_variable);
}

// ***** Global Scope *****

void change_count_two(void)
{
	// Code
	global_counter_variable = global_counter_variable + 1;
	printf("change_count_two() : Value Of global_counter_variable = %d\n", global_counter_variable);
}

// ***** Global Scope *****
void change_count_three(void)
{
	// Code
	global_counter_variable = global_counter_variable + 10;
	printf("change_count_three() : Value Of global_counter_variable = %d\n", global_counter_variable);
}

// ***** Global Scope *****
