// Program Name : Sum_01.c

#include <stdio.h>
#include <stdarg.h>

int main(void)
{
	// Function Prototypes
	int CalculateSum(int, ...);

	// Variable Declarations
	int result;

	// Code
	printf("\n===============================================\n");

	result = CalculateSum(5, 20, 40, 60, 80, 100);
	printf("Result  = %d\n\n", result);

	result = CalculateSum(10, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
	printf("Result = %d\n\n", result);

	result = CalculateSum(0);
	printf("Result = %d\n\n", result);

	return (0);
}

int CalculateSum(int number, ...) // Variadic Function
{
	// Variable Declarations
	int sum_total = 0;
	int x;

	va_list numbers_list;

	// Code
	va_start(numbers_list, number);

	while (number)
	{
		x = va_arg(numbers_list, int);
		sum_total = sum_total + x;
		number--;
	}

	va_end(numbers_list);
	return(sum_total);
}
