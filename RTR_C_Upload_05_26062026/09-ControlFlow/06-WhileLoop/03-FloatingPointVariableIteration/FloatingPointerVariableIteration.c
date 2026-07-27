// Program Name : FloatingPointerVariableIteration.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	float f;
	float float_num = 2.4f;

	// Code
	printf("\n==================================================================\n");

	printf("Printing Numbers %f to %f : \n\n", float_num, (float_num * 10.0f));

	f = float_num;
	while (f <= (float_num * 10.0f))
	{
		printf("\t%f\n", f);
		f += float_num;
	}
	printf("\n==================================================================\n");

	return (0);
}
