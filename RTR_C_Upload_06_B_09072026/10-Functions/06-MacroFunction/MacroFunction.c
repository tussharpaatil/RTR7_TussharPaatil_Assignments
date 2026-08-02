// Program Name : MacroFunction.c

#include <stdio.h>

#define MAX_NUMBER(x, y) ((x > y) ? x : y)

int main(int argc, char *argv[], char *envp[])
{
	// Variable Declarations
	int iNumber_1;
	int iNumber_2;
	int iAnswer;

	float fNumber_1;
	float fNumber_2;
	float fAnswer;

	// Code
	// ****** Comparing Integer Values *****
	printf("\n=========================================================================\n");
	printf("Enter An Integer Number : \n\n");
	scanf("%d", &iNumber_1);

	printf("Enter Another Integer Number : \n\n");
	scanf("%d", &iNumber_2);

	iAnswer = MAX_NUMBER(iNumber_1, iNumber_2);
	printf("\n=========================================================================\n");
	printf("Result Of Macro Function MAX_NUMBER() = %d\n", iAnswer);

	printf("\n=========================================================================\n");

	// ***** Comparing Floating-Point Values *****
	printf("\n=========================================================================\n");
	printf("Enter A Floating Point Number : \n\n");
	scanf("%f", &fNumber_1);

	printf("\n=========================================================================\n");
	printf("Eneter Another Floating Point Number : \n\n");
	scanf("%f", &fNumber_2);

	fAnswer = MAX_NUMBER(fNumber_1, fNumber_2);
	printf("\n=========================================================================\n");
	printf("Result Of Macro Function MAX_NUMBER() = %f\n", fAnswer);

	printf("\n=========================================================================\n");

	return(0);
}
