// Program Name: Variables.c
#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int intNum = 24;
	float floatNum = 3.14f;		// float Number without f will be considered as double
	double doubleNum = 6.234516;
	char charC = 'T';

	// Code
	printf("\n----------------------------------------------------------\n");
	printf("intNum = %d\n", intNum);
	printf("floatNum = %f\n", floatNum);
	printf("doubleNum =%lf\n", doubleNum);
	printf("chatAlpha = %c\n", charC);
	printf("void is also primitive data type for which value can not exists and has no format converter in C.\n");
	printf("-------------------------------------------------------------\n");

	printf("\n\n");

	intNum = 42;
	floatNum = 4.145f;
	doubleNum = 24.3434534;
	charC = 'P';

	printf("\n------------------------------------------------\n");
	printf("intNum = %d\n", intNum);
	printf("floatNum = %f\n", floatNum);
	printf("doubleNum = %lf\n", doubleNum);
	printf("charC = %c\n", charC);
	printf("--------------------------------------------------\n");

	printf("\n\n");

	return (0);
}
