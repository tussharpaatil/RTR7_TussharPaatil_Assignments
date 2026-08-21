// Program Name : ArraysAndPointers.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int integerArray[] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };
	float floatArray[] = { 2.3f, 1.4f, 5.2f, 7.3f, 8.4f };
	double doubleArray[] = { 1.22222, 2.33333, 3.44444 };
	char characterArray[] = { 'A', 'S', 'T', 'R', 'O', 'M', 'E', 'D', 'I', 'C', 'O', 'M', 'P', '\0'};

	// Code
	printf("\n==========================================================================\n");
	printf("Integer Array Elements ANd The addresses They Occupy Are as Follows : \n\n");
	printf("integerArray[0] = %d        At Address : %p\n", *(integerArray + 0), (integerArray + 0));
	printf("integerArray[1] = %d        At Address : %p\n", *(integerArray + 1), (integerArray + 1));
	printf("integerArray[2] = %d        At Address : %p\n", *(integerArray + 2), (integerArray + 2));
	printf("integerArray[3] = %d        At Address : %p\n", *(integerArray + 3), (integerArray + 3));
	printf("integerArray[4] = %d        At Address : %p\n", *(integerArray + 4), (integerArray + 4));
	printf("integerArray[5] = %d        At Address : %p\n", *(integerArray + 5), (integerArray + 5));
	printf("integerArray[6] = %d        At Address : %p\n", *(integerArray + 6), (integerArray + 6));
	printf("integerArray[7] = %d        At Address : %p\n", *(integerArray + 7), (integerArray + 7));
	printf("integerArray[8] = %d        At Address : %p\n", *(integerArray + 8), (integerArray + 8));
	printf("integerArray[9] = %d       At Address : %p\n", *(integerArray + 9), (integerArray + 9));

	printf("\n=========================================================================\n");
	printf("Float Array Elements And The Addresses They Occupy Are As follows : \n\n");
	printf("floarArray[0] = %f          At Address : %p\n", *(floatArray + 0), (floatArray + 0));
	printf("floarArray[1] = %f          At Address : %p\n", *(floatArray + 1), (floatArray + 1));
	printf("floarArray[2] = %f          At Address : %p\n", *(floatArray + 2), (floatArray + 2));
	printf("floarArray[3] = %f          At Address : %p\n", *(floatArray + 3), (floatArray + 3));
	printf("floarArray[4] = %f          At Address : %p\n", *(floatArray + 4), (floatArray + 4));

	printf("\n=========================================================================\n");
	printf("doubleArray[0] = %lf        At Address : %p\n", *(doubleArray + 0), (doubleArray + 0));
	printf("doubleArray[1] = %lf        At Address : %p\n", *(doubleArray + 1), (doubleArray + 1));
	printf("doubleArray[2] = %lf        At Address : %p\n", *(doubleArray + 2), (doubleArray + 2));

	printf("\n=========================================================================\n");
	printf("characterArray[0] = %c           At Address : %p\n", *(characterArray + 0), (characterArray + 0));
	printf("characterArray[1] = %c           At Address : %p\n", *(characterArray + 1), (characterArray + 1));
	printf("characterArray[2] = %c           At Address : %p\n", *(characterArray + 2), (characterArray + 2));
	printf("characterArray[3] = %c           At Address : %p\n", *(characterArray + 3), (characterArray + 3));
	printf("characterArray[4] = %c           At Address : %p\n", *(characterArray + 4), (characterArray + 4));
	printf("characterArray[5] = %c           At Address : %p\n", *(characterArray + 5), (characterArray + 5));
	printf("characterArray[6] = %c           At Address : %p\n", *(characterArray + 6), (characterArray + 6));
	printf("characterArray[7] = %c           At Address : %p\n", *(characterArray + 7), (characterArray + 7));
	printf("characterArray[8] = %c           At Address : %p\n", *(characterArray + 8), (characterArray + 8));
	printf("characterArray[9] = %c           At Address : %p\n", *(characterArray + 9), (characterArray + 9));
	printf("characterArray[10] = %c          At Address : %p\n", *(characterArray + 10), (characterArray + 10));
	printf("characterArray[11] = %c          At Address : %p\n", *(characterArray + 11), (characterArray + 11));
	printf("characterArray[12] = %c          At Address : %p\n", *(characterArray + 12), (characterArray + 12));
	printf("characterArray[13] = %c           At Address : %p\n", *(characterArray + 13), (characterArray + 13));
	printf("\n==========================================================================\n");

	return (0);
}
