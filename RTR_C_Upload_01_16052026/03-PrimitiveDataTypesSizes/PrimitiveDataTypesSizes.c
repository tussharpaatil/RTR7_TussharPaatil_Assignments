// Program Name: PrimitiveDataTypesSizes.c
#include <stdio.h>

int main(void)
{
	//code
	printf("\n\n");

	printf("-------------------------- Integer Types ---------------------------\n");
	printf("Size of 'int'\t\t\t\t = %zu bytes\n", sizeof(int));
	printf("Size of 'signed int'\t\t\t = %zu bytes\n", sizeof(signed int));
	printf("Size of 'unsigned int'\t\t\t = %zu bytes\n", sizeof(unsigned int));
	printf("--------------------------------------------------------------------\n");

	printf("---------------------- Short Integer Types -------------------------\n");
	printf("Size of 'short'\t\t\t\t = %zu bytes\n", sizeof(short));
	printf("Size of 'signed short'\t\t\t = %zu bytes\n", sizeof(signed short));
	printf("Size of 'unsigned short'\t\t = %zu bytes\n", sizeof(unsigned short));
	printf("--------------------------------------------------------------------\n");

	printf("-------------------------- Character Types -------------------------\n");
	printf("Size of 'char'\t\t\t\t = %zu bytes\n", sizeof(char));
	printf("Size of 'signed char'\t\t\t = %zu bytes\n", sizeof(signed char));
	printf("Size of 'unsigned char'\t\t\t = %zu bytes\n", sizeof(unsigned char));
	printf("--------------------------------------------------------------------\n");

	printf("----------------------- Long Integer Types -------------------------\n");
	printf("Size of 'long'\t\t\t\t = %zu bytes\n", sizeof(long));
	printf("Size of 'signed long'\t\t\t = %zu bytes\n", sizeof(signed long));
	printf("Size of 'unsigned long'\t\t\t = %zu bytes\n", sizeof(unsigned long));
	printf("--------------------------------------------------------------------\n");

	printf("--------------------- Long Long Integer Types ----------------------\n");
	printf("Size of 'long long'\t\t\t = %zu bytes\n", sizeof(long long));
	printf("Size of 'signed long long'\t\t = %zu bytes\n", sizeof(signed long long));
	printf("Size of 'unsigned long long'\t\t = %zu bytes\n", sizeof(unsigned long long));
	printf("--------------------------------------------------------------------\n");

	printf("---------------------- Floating Point Types ------------------------\n");
	printf("Size of 'float'\t\t\t\t = %zu bytes\n", sizeof(float));
	printf("Size of 'double'\t\t\t = %zu bytes\n", sizeof(double));
	printf("Size of 'long double'\t\t\t = %zu bytes\n", sizeof(long double));
	printf("--------------------------------------------------------------------\n");

	printf("\n\n");

	return (0);
}
