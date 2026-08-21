// Program Name : UseOfMallocAndFree.c

#include <stdio.h>
#include <stdlib.h> // Contains Prototypes of malloc() and free()

int main(void)
{
	// Variable Declarations
	int* ptr_integerArray = NULL; // It is good discipline to initialize any pointer with null address to prevent any garbage value
	// getting into it, that way, it makes it easy to check for success or failure of memory allocation later on after malloc()...
	unsigned int integerArrayLength = 0;
	int counter;

	// Code
	printf("\n================================================================================================\n");
	printf("Enter The Number Of Elements You Want In Your Integer Array : ");
	scanf("%u", &integerArrayLength);

	// *** Allocating As Much Memory Required To The Integer Array ***
	// *** Memory Required For Integer Array = Size In Bytes Of One Integer * Number Of Integers To Be Stored In Array ***
	// *** To Allocate Said Amount Of Memory, Function malloc() Will Be Used ***
	// *** malloc() Will Allocate Said Amount Of Memory And Will Return The Initial / Starting / Base Address Of The Allocated Memory,
	// Which Must Be Captured In A Pointer Variable ***
	// *** Using This Base Address, The Integer Array Can Be accessed And Used ***

	ptr_integerArray = (int *)malloc(sizeof(int) * integerArrayLength);
	if (ptr_integerArray == NULL) // If ptr_integerArray Is Still NULL, Even After Call To malloc(), It Means malloc() Has Failed
		// To Allocate Memory And No Address Has Been Returned By malloc() in ptr_integerArray....
	{
		printf("\n========================================================================================================\n");
		printf("Memory Allocation For Integer Array Has Failed !!! Exiting Now .... \n\n");
		exit(0);
	}
	else // If ptr_integer Is NOT NULL, It Means It Must Contain A Valid Address Which Is Returned By malloc(), Hence, malloc()
		// Has Succeeded In Memory Allocation ....
	{
		printf("\n========================================================================================================\n");
		printf("Memory Allocation For Integer Array Has Succeeded !!!\n\n");
		printf("Memory Addresses From %p To %p Have Been Allocated To Integer Array !!!\n\n", ptr_integerArray, (ptr_integerArray + (integerArrayLength + 1)));
	}

	printf("\n=================================================================================================\n");
	printf("Enter %d Elements For The Integer Array : \n\n", integerArrayLength);
	for (counter = 0; counter < integerArrayLength; counter++)
		scanf("%d", (ptr_integerArray + counter));

	printf("\n=================================================================================================\n");
	printf("The Integer Array Entered By You, Consisting Of %d Elements : \n\n", integerArrayLength);
	for (counter = 0; counter < integerArrayLength; counter++)
	{
		printf("ptr_integerArray[%d] = %d      At Address &ptr_integerArray[%d] : %p\n", counter, ptr_integerArray[counter], counter, &ptr_integerArray[counter]);
	}

	printf("\n=================================================================================================\n");
	for (counter = 0; counter < integerArrayLength; counter++)
	{
		printf("*(ptr_integerArray + %d) = %d  At Address (ptr_integerArray +%d) : %p\n", counter, *(ptr_integerArray + counter), counter, (ptr_integerArray + counter));
	}

	// *** Checking If Memory Is Still Allocated By Checking Validity Of Base Address 'ptr_integerArray" ***
	// *** If Address Is Valid, That Is If 'ptr_integerArray' Exists, That Is, If Is NOT NULL, Memory Is Still Allocated ***
	// *** In That Case, The Allocated Memory Must Be Freed ***
	// *** Once Memory Is Freed Using free(), The Base Address Must Be Cleaned, That Is, It Must Be Re-initialized To 'NULL' 
	// To Keep Away Garbase Values, This Is Not Compulsory, But It Is Good Conding Discipline ***

	if (ptr_integerArray)
	{
		free(ptr_integerArray);
		ptr_integerArray = NULL;

		printf("\n==============================================================================================\n");
		printf("Memory Allocated For Integer Array Has Been Successfully Freed !!!\n\n");
	}

	return (0);
}
