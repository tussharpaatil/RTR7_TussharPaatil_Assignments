// Program Name: FormatStrings.c
#include <stdio.h>
int main(void)
{
	//code
	printf("--------------------------------------------------------------------------------------------------------");
	printf("\n\n");

	printf("Hello World !!!\n\n");

	int num = 33;
	printf("Integer Decimal Value Of 'num' = %d\n", num);
	printf("Integer Octal Value Of 'num' = %o\n", num);
	printf("Integer Hexadecimal Value Of 'num' (Hexadecimal Letters In Lower Case) = %x\n\n", num);
	printf("Integer Hexadecimal Value of 'num' (Hexadecimal Letters In Upper Case) = %X\n\n", num);
	printf("Integer Hexadecimal Value Of 'num' (Hexadecimal Representation In Lower Case) = %#x\n\n", num);
	printf("Integer Hexadecimal Value of 'num' (Hexadecimal Representation In Upper Case) = %#X\n\n", num);

	char initial = 'T';
	printf("Character initial = %c\n", initial);

	char string[] = "AstroMediComp's Real Time Rendering Batch - 7";
	printf("String string = %s\n\n", string);

	long number = 87735289L;
	printf("Long Interger = %ld\n\n", number);

	unsigned int x = 6;
	printf("Unsigned Integer 'x' = %u\n\n", x);

	float float_num = 2402.2018f; // If we don't suffix floating number with f then it will be defaulted to double
	printf("Floating Point Number With Just %%f 'float_num' = %f\n", float_num);
	printf("Floating Point Number With %%4.2f 'float_num' = %4.2f\n", float_num);
	printf("Floating Point Number With %%6.5f 'float_num' = %6.5f\n", float_num);

	double double_sqrt_2 = 1.414213562373095;
	printf("Double Precision Floating Point Number Without Exponential = %g\n", double_sqrt_2);
	printf("Double Precision Floating Point Number With Exponential (Lower Case) = %e\n", double_sqrt_2);
	printf("Double Precision Floating Point Number With Exponential (Upper Case) = %E\n", double_sqrt_2);
	printf("Double Hexadecimal Value of 'double_sqrt_2' (Hexadecimal Letters In Lower Case) = %a\n", double_sqrt_2);
	printf("Double Hexadecimal Value of 'double_sqrt_2' (Hexadecimal Letters In Upper Case) = %A\n\n", double_sqrt_2);
	printf("Double Hexadecimal Value of 'double_sqrt_2' (Hexadecimal Representation In Lower Case) = %#a\n", double_sqrt_2);
	printf("Double Hexadecimal Value of 'double_sqrt_2' (Hexadecimal Representation In Upper Case) = %#A\n\n", double_sqrt_2);

	printf("--------------------------------------------------------------------------------------------------------");
	
	printf("\n\n");

	return (0);
}

