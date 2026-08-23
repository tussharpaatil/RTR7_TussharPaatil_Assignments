// Program Name : SimpleStructPointer.c

#include <stdio.h>
#include <stdlib.h>

// Defining Struct using typedef
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

	MyData* pData = NULL;
	
	// Code
	printf("\n===========================================================================\n");

	pData = (MyData*)malloc(sizeof(MyData));
	if (NULL == pData)
	{
		printf("Failed To Allocate Memory To 'MyData' !!! Exitting Now .. \n\n");
		exit(0);
	}
	else
		printf("Successfully Allocated Memory To 'MyData' !!!\n\n");

	// Assigning Data Values To The Data Members Of 'Mydata'
	pData->iNum = 24;
	pData->fNum = 23.23f;
	pData->dNum = 2.234243;

	// Displaying Values Of The Data Members Of 'MyData'
	printf("\n=============================================================================\n");
	printf("Data Members Of 'MyData' Are : \n\n");
	printf("iNum = %d\n", pData->iNum);
	printf("fNum = %f\n", pData->fNum);
	printf("dNum = %lf\n", pData->dNum);

	// Calculating Sizes (In Bytes) Of The Data Members Of 'MyData'
	int_size = sizeof(pData->iNum);
	float_size = sizeof(pData->fNum);
	double_size = sizeof(pData->dNum);

	// Displaying Sizes (In Bytes) Of The Data Members Of 'MyData'
	printf("\n==============================================================================\n");
	printf("Sizes (In Bytes) Of Data Members of 'MyData' Are : \n\n");
	printf("Size Of 'iNum' = %d bytes\n", int_size);
	printf("Size Of 'fNum' = %d bytes\n", float_size);
	printf("Size Of 'dNum' = %d bytes\n", double_size);

	// Calculating Sizes (In Bytes) Of The Entire 'MyData'
	struct_MyData_size = sizeof(MyData);
	pointer_to_struct_MyData_size = sizeof(MyData*);

	// Displaying Sizes (In Bytes) Of The Entire 'MyData'
	printf("\n==============================================================================\n");
	printf("Size Of 'MyData' : %d bytes \n\n", struct_MyData_size);
	printf("Size Of Pointer To 'MyData' : %d bytes \n\n", pointer_to_struct_MyData_size);

	if (pData)
	{
		free(pData);
		pData = NULL;
		printf("Memory Allocated to 'MyData' Has Been Successfully Freed !!!\n\n");
	}

	return (0);
}
