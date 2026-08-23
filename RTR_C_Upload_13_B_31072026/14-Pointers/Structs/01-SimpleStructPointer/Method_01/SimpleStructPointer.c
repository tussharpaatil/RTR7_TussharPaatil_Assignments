// Program Name : SimpleStructPointer.c

#include <stdio.h>
#include <stdlib.h>

// Defining Struct
typedef struct
{
	int iNum;
	float fNum;
	double dNum;
} MyData;

int main(void)
{
	// Variable Declarations
	int int_size;
	int float_size;
	int double_size;
	int struct_MyData_size;
	int pointer_to_struct_MyData_size;

	MyData *pData = NULL;

	// Code
	printf("\n========================================================================\n");

	pData = (MyData*)malloc(sizeof(MyData));
	if (pData == NULL)
	{
		printf("Failed To Allocate Memory To 'Mydata' !!! Exitting Now ...\n\n");
		exit(0);
	}
	else
		printf("Successfully Allocated Memory To 'MyData' !!!\n\n");

	// Assigning Data Values To The Data Members Of 'MyData'
	(*pData).iNum = 24;
	(*pData).fNum = 3.12f;
	(*pData).dNum = 1.342342;

	// Displaying Values Of The Data Members Of 'MyData'
	printf("\n=======================================================================\n");
	printf("Data Members Of 'MyData' Are : \n\n");
	printf("iNum = %d\n", (*pData).iNum);
	printf("fNum = %f\n", (*pData).fNum);
	printf("dNum = %lf\n", (*pData).dNum);
	
	// Calculating Sizes (In Bytes) Of The Data Members Of 'MyData'
	int_size = sizeof((*pData).iNum);
	float_size = sizeof((*pData).fNum);
	double_size = sizeof((*pData).dNum);

	// Displaying Sizes (In Bytes) Of The Data Members Of 'MyData'
	printf("\n========================================================================\n");
	printf("Sizes (in bytes) Of Data Members Of 'MyData' Are : \n\n");
	printf("Sizes Of 'iNum' = %d bytes\n", int_size);
	printf("Sizes Of 'fNum' = %d bytes\n", float_size);
	printf("Sizes Of 'dNum' = %d bytes\n", double_size);

	// Calculating Size (In Bytes) Of The Entire 'MyData'
	struct_MyData_size = sizeof(MyData);
	pointer_to_struct_MyData_size = sizeof(MyData *);

	// Displaying Sizes (In Bytes) Of The Entire 'MyData'
	printf("\n=========================================================================\n");
	printf("Size Of 'MyData' : %d bytes\n\n", struct_MyData_size);
	printf("Size Of Pointer To 'MyData' : %d bytes\n\n", pointer_to_struct_MyData_size);

	if (pData)
	{
		free(pData);
		pData = NULL;
		printf("Memory Allocated To 'MyData' Has Been Successfully Freed !!! \n\n");
	}

	return (0);
}
