// ***** Gloobal Scope *****
// global_variable is a global variable declared in source code file ExternalGlobalVariablesInMultipleFiles.c
// To access it in the file, it must first be re-declared as an external variable in the global scope of this file 
// along with the 'extern' keyword and its proper data type.
// Then, It can be used as any ordinary global variable throughout this file as well.

#include <stdio.h>

extern int global_variable;

void change_count_one(void)
{
	// Code
	global_variable = global_variable + 1;
	printf("change_count_one() : Value Of global_count in File_01 = %d\n", global_variable);
}
