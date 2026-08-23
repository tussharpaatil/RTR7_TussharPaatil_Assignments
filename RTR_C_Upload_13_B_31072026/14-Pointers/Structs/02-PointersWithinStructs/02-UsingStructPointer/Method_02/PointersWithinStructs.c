// Program Name : PointersWithinStructs.c
#include <stdio.h>
#include <stdlib.h>

// Defining struct
typedef struct
{
	int* ptr_int;
	int iNum;

	float* ptr_float;
	float fNum;

	double* ptr_double;
	double dNum;
} MyData;

int main(void)
{
	// Variable Declarations
	MyData* pData = NULL;

	// Code
	printf("\n========================================================================================\n");
	pData = (MyData*)malloc(sizeof(MyData));
	if (pData == NULL)
	{
		printf("Failed To Allocate Memory To 'Mydata' !!! Exitting Now .....\n\n");
		exit(0);
	}
	else
		printf("Successfully Allocated Memory To 'MyData' !!!\n\n");

	pData->iNum = 6;
	pData->ptr_int = &(pData->iNum);

	pData->fNum = 4.23f;
	pData->ptr_float = &(pData->fNum);

	pData->dNum = 3.23424;
	pData->ptr_double = &(pData->dNum);

	printf("\n==================================\n");
	printf("iNum = %d\n", *(pData->ptr_int));
	printf("Address Of 'iNum' = %p\n", pData->ptr_int);

	printf("\n==================================\n");
	printf("fNum = %f\n", *(pData->ptr_float));
	printf("Address Of 'fNum' = %p\n", pData->ptr_float);

	printf("\n==================================\n");
	printf("dNum = %lf\n", *(pData->ptr_double));
	printf("Address Of 'dNum' = %p\n", pData->ptr_double);

	if (pData)
	{
		free(pData);
		pData = NULL;
		printf("Memory Allocated To 'MyData' Has Been Successfully Freed !!! \n\n");
	}

	return (0);
}


