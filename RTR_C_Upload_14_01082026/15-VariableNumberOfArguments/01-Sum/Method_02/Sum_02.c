// Program Name : Sum_02.c

#include <stdio.h>
#include <stdarg.h> // Library Required To Process Variable Arguments Using The Built-in Macros (va_list, va_start, va_arg, va_end)

int main(void)
{
	// Function Prototypes
	int CalculateSum(int first_number, ...);

	// Vairable Declarations
	int result;

	// Code
	printf("\n===============================================\n");

	result = CalculateSum(10, 20, 30, 40, 50, -1);
	printf("Result = %d\n\n", result);

	result = CalculateSum(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, -1);
	printf("Result = %d\n\n", result);

	result = CalculateSum(-1);
	printf("Result = %d\n\n", result);

	return(0);
}

int CalculateSum(int first_number, ...) // Variadic function 
{
	int total = 0;
	int current_number;
	
	va_list numbers_list;

	if (first_number == -1)
	{
		return(0);
	}

	total = total + first_number;
	
	va_start(numbers_list, first_number);

	while ((current_number = va_arg(numbers_list, int)) != -1)
	{
		total = total + current_number;
	}

	va_end(numbers_list);
	return total;
}