// ***** Global Scope *****
// global_variable is a global variable declared in source code file ExternalGlobalVariablesInMultipleFiles.c
// To access it in this file, it must first be re-declared as an external variable in the global scope of this file 
// along with the 'extern' keyword and its proper data type
// Then, it can be used as any ordinary global variable throughout this file as well.
// Here, re-declaring 'global_variable' as a local variable using 'extern' keyword within change_count_two()

#include <stdio.h>

void change_count_two(void)
{
	// Code
	extern int global_variable;
	global_variable = global_variable + 1;
	printf("change_count_two() : Value Of global_variable in File_02 = %d\n", global_variable);
}
