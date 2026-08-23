// Program Name : TypedefWithStructPointer.c

#include <stdio.h>
#include <stdlib.h>

// Defining Struct
struct MyData
{
	int iNum;
	float fNum;
	double dNum;
};

int main(void)
{
	// Variable Declarations
	int int_size;
	int float_size;
	int double_size;
	int struct_MyData_size;
	int pointer_to_struct_MyData_size;

	typedef struct MyData* MyDataPtr;

	MyDataPtr pData;

	// Code
	printf("\n========================================================\n");
	
	pData = (MyDataPtr)malloc(sizeof(struct MyData));
	if (pData == NULL)
	{
		printf("Failed To Allocate Memory to 'struct MyData' !!! \n\n");
		exit(0);
	}
	else
		printf("Successfully Allocated Memory To 'struct MyData' !!! \n\n");

	// Assigning Data Values To The Data Members Of 'struct MyData'
	printf("\n========================================================\n");
	pData->iNum = 24;
	pData->fNum = 2.42f;
	pData->dNum = 2.435234;

	// Displaying Values To The Data Members Of 'struct MyData'
	printf("\n========================================================\n");
	printf("Data Members Of 'struct MyData' Are : \n\n");
	printf("iNum = %d\n", pData->iNum);
	printf("fNum = %f\n", pData->fNum);
	printf("dNum = %lf\n", pData->dNum);

	// Calculating Sizes (In Bytes) Of The Data Members Of 'struct MyData'
	int_size = sizeof(pData->iNum);
	float_size = sizeof(pData->dNum);
	double_size = sizeof(pData->fNum);

	// Displaying Sizes (In Bytes) Of The Data Members of 'struct MyData'
	printf("\n========================================================\n");
	printf("Sizes (In Bytes) Of Data Members Of 'struct MyData' are \n\n");
	printf("Size Of 'iNum' = %d bytes\n", int_size);
	printf("Size Of 'fNum' = %d bytes\n", float_size);
	printf("Size Of 'dNum' = %d bytes\n", double_size);

	// Calculating Sizes (In Bytes) Of The Entire 'struct MyData'
	struct_MyData_size = sizeof(struct MyData);
	pointer_to_struct_MyData_size = sizeof(MyDataPtr);

	// Displaying Sizes (In Bytes) Of The Entire 'struct MyData'
	printf("\n========================================================\n");
	printf("Size Of 'struct MyData' : %d bytes\n\n", struct_MyData_size);
	printf("Size Of pointer to 'struct MyData' : %d bytes\n\n", pointer_to_struct_MyData_size);

	if (pData)
	{
		free(pData);
		pData = NULL;
		printf("Memory Allocated To 'struct MyData' Has Been Successfully Freed !!!\n\n");
	}

	return (0);
}
