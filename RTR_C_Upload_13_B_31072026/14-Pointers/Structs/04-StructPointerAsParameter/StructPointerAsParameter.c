// Program Name : StructPointerAsParameter.c

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
	// Function Prototypes
	void ChangeValues(MyData*);

	// Variable Declarations
	MyData* pData = NULL;

	// Code
	printf("\n=============================================================\n");

	pData = (MyData*)malloc(sizeof(MyData));
	if (pData == NULL)
	{
		printf("Failed To Allocate Memory To 'MyData' !!! Exitting Now ... \n\n");
		exit(0);
	}
	else
		printf("Successfully Allocated Memory To 'MyData' !!!\n\n");
	
	// Assigning Data Values To The Data Members Of 'MyData'
	pData->iNum = 53;
	pData->fNum = 21.23f;
	pData->dNum = 2.344523;

	// Displaying Values Of The Data Members Of 'MyData'
	printf("\n==============================================================\n");
	printf("Data Members Of 'MyData' Are : \n\n");
	printf("iNum = %d\n", pData->iNum);
	printf("fNum = %f\n", pData->fNum);
	printf("dNum = %lf\n", pData->dNum);

	ChangeValues(pData);

	// Displaying Values Of The Data Members Of 'MyData'
	printf("\n==============================================================\n");
	printf("Data Members Of 'MyData' Are : \n\n");
	printf("iNum = %d\n", pData->iNum);
	printf("fNum = %f\n", pData->fNum);
	printf("dNum = %lf\n", pData->dNum);

	if (pData)
	{
		free(pData);
		pData = NULL;
		printf("Memory Allocated To 'MyData' Has Been Successfully Freed !!!\n\n");
	}

	return (0);
}

void ChangeValues(MyData* pParam_Data)
{
	// Code

	pParam_Data->iNum = 6;
	pParam_Data->fNum = 4.34f;
	pParam_Data->dNum = 2.23354;

	// Can Also Do This As ....
	/* 
	
	(*pParam_Data).iNum = 6;
	(*pParam_Data).fNum = 4.34f;
	(*pParam_Data).dNum = 2.23354;

	*/
}