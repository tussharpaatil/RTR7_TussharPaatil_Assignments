// Program Name : PointerWithinStructs.c

#include <stdio.h>

// Defining struct
typedef struct
{
	int *ptr_int;
	int iNum;

	float *ptr_float;
	float fNum;

	double *ptr_double;
	double dNum;
} MyData;

int main(void)
{
	// Variable Declarations
	MyData data;

	// Code
	data.iNum = 6;
	data.ptr_int = &data.iNum;

	data.fNum = 5.32f;
	data.ptr_float = &data.fNum;

	data.dNum = 4.23234;
	data.ptr_double = &data.dNum;

	printf("\n========================================\n");
	printf("iNum = %d\n", *(data.ptr_int));
	printf("Address Of 'iNum' = %p\n", data.ptr_int);

	printf("\n========================================\n");
	printf("fNum = %f\n", *(data.ptr_float));
	printf("Address Of 'fNum' = %p\n", data.ptr_float);

	printf("\n========================================\n");
	printf("dNum = %lf\n", *(data.ptr_double));
	printf("Address Of 'dNum' = %p\n", data.ptr_double);

	return (0);
}
