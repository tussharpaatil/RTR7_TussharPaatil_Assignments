// Program Name : ArraysAsPointerAndPointersAsArray.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int integerArray[] = { 12, 24, 36, 48, 60, 72, 84, 96, 108, 120 }; // Integer Array
	int *ptr_integerArray = NULL;  // Integer Pointer

	// Code

	// ##### Using Array Name As A Pointe i.e. : Value Of xth Element Of integerArray : *(integerArray + x) 
	// And Address Of xth Element Of integerArray : (integerArray + x) #####
	printf("\n=============================================================\n");
	printf("*** Using Array Name As A Pointer i.e. : Value Of xth Element Of integerArray : *(integerArray + x) And Address Of xth Element Of integerArray : (integerArray + x) ***\n\n");
	printf("Integer Array Elements And Their Addresses : \n\n");
	printf("*(integerArray + 0) = %d    At Address (integerArray + 0) : %p\n", *(integerArray + 0), (integerArray + 0));
	printf("*(integerArray + 1) = %d    At Address (integerArray + 1) : %p\n", *(integerArray + 1), (integerArray + 1));
	printf("*(integerArray + 2) = %d    At Address (integerArray + 2) : %p\n", *(integerArray + 2), (integerArray + 2));
	printf("*(integerArray + 3) = %d    At Address (integerArray + 3) : %p\n", *(integerArray + 3), (integerArray + 3));
	printf("*(integerArray + 4) = %d    At Address (integerArray + 4) : %p\n", *(integerArray + 4), (integerArray + 4));
	printf("*(integerArray + 5) = %d    At Address (integerArray + 5) : %p\n", *(integerArray + 5), (integerArray + 5));
	printf("*(integerArray + 6) = %d    At Address (integerArray + 6) : %p\n", *(integerArray + 6), (integerArray + 6));
	printf("*(integerArray + 7) = %d    At Address (integerArray + 7) : %p\n", *(integerArray + 7), (integerArray + 7));
	printf("*(integerArray + 8) = %d   At Address (integerArray + 8) : %p\n", *(integerArray + 8), (integerArray + 8));
	printf("*(integerArray + 9) = %d   At Address (integerArray + 9) : %p\n", *(integerArray + 9), (integerArray + 9));

	// Assigning Base Address Of Integer Array 'integerArray' To Integer Pointer 'ptr_integerArray'
	// Name Of Any Array Is Its Own Base Address
	ptr_integerArray = integerArray; // Same As ... ptr_integerArray = &integerArray[0]

	// ### Using Pointer As Array Name i.e. : Value Of xth Element Of integerArray : ptr_integerArray[x] And Address Of xth Element
	// Of integerArray : &ptr_integerArray[x] #####
	printf("\n==================================================================\n");
	printf("*** Using Pointer As Array Name i.e. : Value Of xth Element Of integerArray : ptr_integerArray[x] And Addres Of xth Element Of integerArray : &ptr_integerArray[x] ***\n\n");
	printf("Integer Array Elemens And Their Addresses : \n\n");
	printf("ptr_integerArray[0] = %d     At Address &ptr_integerArray[0] : %p\n", ptr_integerArray[0], &ptr_integerArray[0]);
	printf("ptr_integerArray[1] = %d     At Address &ptr_integerArray[1] : %p\n", ptr_integerArray[1], &ptr_integerArray[1]);
	printf("ptr_integerArray[2] = %d     At Address &ptr_integerArray[2] : %p\n", ptr_integerArray[2], &ptr_integerArray[2]);
	printf("ptr_integerArray[3] = %d     At Address &ptr_integerArray[3] : %p\n", ptr_integerArray[3], &ptr_integerArray[3]);
	printf("ptr_integerArray[4] = %d     At Address &ptr_integerArray[4] : %p\n", ptr_integerArray[4], &ptr_integerArray[4]);
	printf("ptr_integerArray[5] = %d     At Address &ptr_integerArray[5] : %p\n", ptr_integerArray[5], &ptr_integerArray[5]);
	printf("ptr_integerArray[6] = %d     At Address &ptr_integerArray[6] : %p\n", ptr_integerArray[6], &ptr_integerArray[6]);
	printf("ptr_integerArray[7] = %d     At Address &ptr_integerArray[7] : %p\n", ptr_integerArray[7], &ptr_integerArray[7]);
	printf("ptr_integerArray[8] = %d    At Address &ptr_integerArray[8] : %p\n", ptr_integerArray[8], &ptr_integerArray[8]);
	printf("ptr_integerArray[9] = %d    At Address &ptr_integerArray[9] : %p\n", ptr_integerArray[9], &ptr_integerArray[9]);

	return (0);
}
