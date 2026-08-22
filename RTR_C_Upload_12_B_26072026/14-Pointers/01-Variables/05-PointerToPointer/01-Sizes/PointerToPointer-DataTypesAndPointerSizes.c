// Program Name : PointerToPointer-DataTypesAndPointerSizes.c

#include <stdio.h>

typedef struct
{
	char name[100];
	int age;
	float salary;
	char sex;
	char marital_status;
} Employee;

int main(void)
{
	// Code
	printf("\n===================================================================================================================================================\n");
	printf("Sizes Of Data Types And Pointers To Those Respective Data Types Are : \n\n");
	printf("Size Of (int)              : %zu ||  Size Of Pointer To int (int*)           : %zu  ||  Size Of Pointer To Pointer to int (int**)	        : %zu\n\n", sizeof(int), sizeof(int*), sizeof(int**));
	printf("Size Of (float)            : %zu ||  Size Of Pointer To float (float*)       : %zu  ||  Size Of Pointer To Pointer to float (float**)       : %zu\n\n", sizeof(float), sizeof(float*), sizeof(float**));
	printf("Size Of (double)           : %zu ||  Size Of Pointer To double (double*)     : %zu  ||  Size Of Pointer To Pointer to double (double**)     : %zu\n\n", sizeof(double), sizeof(double*), sizeof(double**));
	printf("Size Of (char)             : %zu ||  Size Of Pointer To char (char*)         : %zu  ||  Size Of Pointer To Pointer to char (char**)	        : %zu\n\n", sizeof(char), sizeof(char*), sizeof(char**));
	printf("Size Of (struct Employee*) : %zu ||  Size Of pointer to Employee (Employee*) : %zu  ||  Size Of pointer To Pointer to Employee (Employee**) : %zu\n\n", sizeof(Employee), sizeof(Employee*), sizeof(Employee**));
	printf("\n===================================================================================================================================================\n");

	return (0);
}
