// Program Name : ExternalGlobalVariablesInMultipleFile.c

#include <stdio.h>

// ***** Global Scope *****
int global_variable = 0;

int main(void)
{
	// Function Prototype
	void change_count(void);
	void change_count_one(void);	// Function Defined In File_01.c
	void change_count_two(void);	// Function Defined In File_02.c

	// Code
	printf("\n");

	change_count();
	change_count_one();		// Function Defined In File_01.c
	change_count_two();		// Function Defined In File_02.c

	return (0);
}

void change_count(void)
{
	// Code
	global_variable = global_variable + 1;
	printf("Global Variable = %d\n", global_variable);
}


/*
1. Compile all.c files to.obj files
cl.exe / c / EHsc ExternalGlobalVariablesInMultipleFiles.c File_01.c File_02.c

2. Link object files into an executable
link.exe ExternalGlobalVariablesInMultipleFiles.obj File_01.obj File_02.obj / OUT:myprogram.exe
*/

