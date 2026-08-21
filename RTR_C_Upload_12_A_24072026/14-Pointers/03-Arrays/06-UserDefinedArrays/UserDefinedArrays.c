// Program Name : UserDefinedArrays.c

#include <stdio.h>
#include <stdlib.h> // Contains Protptypes for malloc() and free()

#define INTEGER_SIZE sizeof(int)
#define FLOAT_SIZE sizeof(float)
#define DOUBLE_SIZE sizeof(double)
#define CHARACTER_SIZE sizeof(char)

int main(void)
{
	// Variable Declarations
	int *ptr_integerArray = NULL;
	unsigned int integerArrayLength = 0;

	float *ptr_floatArray = NULL;
	unsigned int floatArrayLength = 0;
	
	double *ptr_doubleArray = NULL;
	unsigned int doubleArrayLength = 0;

	char *ptr_characterArray = NULL;
	unsigned int characterArrayLength = 0;

	int counter;

	// Code

	// ***** Integer Array ******
	printf("\n======================================================================================\n");
	printf("Enter The Number Of Elements You Want In The Integer Array : ");
	scanf("%u", &integerArrayLength);

	ptr_integerArray = (int*)malloc(INTEGER_SIZE * integerArrayLength);
	if (ptr_integerArray == NULL)
	{
		printf("\n==========================================================================================\n");
		printf("Memory Allocation For Integer Array Failed !!! Exiting Now ....\n\n");
		exit(0);
	}
	else
	{
		printf("\n===========================================================================================\n");
		printf("Memory Allocation For Integer Array Succeeded !!!\n\n");
	}

	printf("\n======================================================================================\n");
	printf("Enter The %d Integer Elements To Full Up The Integer Array : \n\n", integerArrayLength);
	for (counter = 0; counter < integerArrayLength; counter++)
		scanf("%d", (ptr_integerArray + counter));

	// ******* Float Array ********
	printf("\n======================================================================================\n");
	printf("Enter The Number Of Elements You Want In The 'float' Array : ");
	scanf("%u", &floatArrayLength);

	ptr_floatArray = (float*)malloc(FLOAT_SIZE * floatArrayLength);
	if (ptr_floatArray == NULL)
	{
		printf("\n============================================================================================\n");
		printf("Memory Allocation For Floating-Point Array Failed !!! ... Exitting Now... \n\n");
		exit(0);
	}
	else
	{
		printf("\n============================================================================================\n");
		printf("Memory Allocation For Floating-Point Array Succeeded !!! \n\n");
	}
	printf("\n======================================================================================\n");
	printf("Enter The %d Floating-point Elements To Fill Up The 'float' Array : \n\n", floatArrayLength);
	for (counter = 0; counter < floatArrayLength; counter++)
		scanf("%f", (ptr_floatArray + counter));

	// ******** Double Array ********
	printf("\n======================================================================================\n");
	printf("Enter The Number Of Elements You Want In The 'double' Array : ");
	scanf("%u", &doubleArrayLength);

	ptr_doubleArray = (double*)malloc(DOUBLE_SIZE * doubleArrayLength);
	if (ptr_doubleArray == NULL)
	{
		printf("\n============================================================================================\n");
		printf("Memory Allocation For 'DOUBLE' Array Failed !!!... Exitting Now...\n\n");
		exit(0);
	}
	else
	{
		printf("\n============================================================================================\n");
		printf("Memory Allocation For 'DOUBLE' Array Succeeded !!!\n\n");
	}

	printf("\n========================================================================================\n");
	printf("Enter The %d Double Elements To Fill Up The 'double' Array : \n\n", doubleArrayLength);

	for (counter = 0; counter < doubleArrayLength; counter++)
		scanf("%lf", (ptr_doubleArray + counter));

	// ************ Character Array ***********
	printf("\n========================================================================================\n");
	printf("Enter The Number Of Elements You Want In The Character Array : ");
	scanf("%u", &characterArrayLength);

	ptr_characterArray = (char*)malloc(sizeof(CHARACTER_SIZE * characterArrayLength));
	if (ptr_characterArray == NULL)
	{
		printf("\n============================================================================================\n");
		printf("Memory Allocation For Character Array Failed !!! Exitting Now... \n\n");
		exit(0);
	}
	else
	{
		printf("\n============================================================================================\n");
		printf("Memory Allocation For Character Array Succeeded !!!\n\n");
	}

	printf("\n========================================================================================\n");
	printf("Enter The %d Character Elements To Fill Up The character Array : \n\n", characterArrayLength);
	for (counter = 0; counter < characterArrayLength; counter++)
	{
		*(ptr_characterArray + counter) = getch();
		printf("%c\n", *(ptr_characterArray + counter));
	}

	// ******* Display Of Arrays *******

	// ******* INTEGER ARRAY ***********
	printf("\n=========================================================================================\n");
	printf("Integer Array Entered By You And Consisting Of %d Elements Is As Follows : \n\n", integerArrayLength);
	for (counter = 0; counter < integerArrayLength; counter++)
		printf(" %d      At Address : %p\n", *(ptr_integerArray + counter), (ptr_integerArray + counter));

	// ***** FLOAT ARRAY *********
	printf("\n=========================================================================================\n");
	printf("Float Array Entered By You And Consisting Of %d Elements Is As Follows : \n\n", floatArrayLength);
	for (counter = 0; counter < floatArrayLength; counter++)
		printf("  %f    At Address : %p\n", *(ptr_floatArray + counter), (ptr_floatArray + counter));

	// ******* DOUBLE ARRAY *******
	printf("\n=========================================================================================\n");
	printf("Double Array Entered By You And Consisting Of %d Elements Is As Follows : \n\n", doubleArrayLength);
	for (counter = 0; counter < doubleArrayLength; counter++)
		printf(" %lf   At Address : %p\n", *(ptr_doubleArray + counter), (ptr_doubleArray + counter));

	// ******* CHARACTER ARRAY *******
	printf("\n=========================================================================================\n");
	printf("Character Array Entered By You And Consisting Of %d Elements Is As Follows : \n\n", characterArrayLength);
	for (counter = 0; counter < characterArrayLength; counter++)
		printf(" %c   At Address : %p\n", *(ptr_characterArray + counter), (ptr_characterArray + counter));

	// ******* Freeing Memoery Occupied By Arrays ( In Reverse Order Of Allocation ) ***********
	if (ptr_characterArray)
	{
		free(ptr_characterArray);
		ptr_characterArray = NULL;

		printf("\n=============================================================================================\n");
		printf("Memory Occupied By Character Array Has Been Successfully Freed !!!\n\n");
	}

	if (ptr_doubleArray)
	{
		free(ptr_doubleArray);
		ptr_doubleArray = NULL;

		printf("\n=============================================================================================\n");
		printf("Memory Occupied By Double Array Has Been Successfully Freed !!!\n\n");
	}

	if (ptr_floatArray)
	{
		free(ptr_floatArray);
		ptr_floatArray = NULL;

		printf("\n=============================================================================================\n");
		printf("Memory Occupied By Float Array Has Been Successfully Freed !!!\n\n");
	}

	if (ptr_integerArray)
	{
		free(ptr_integerArray);
		ptr_integerArray = NULL;

		printf("\n=============================================================================================\n");
		printf("Memory Occupied By Integer Array Has Been Successfully Freed !!!\n\n");
	}

	return (0);
}
