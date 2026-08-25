// Program Name : FindNumber_01.c

#include <stdio.h>
#include <stdarg.h>

#define NUMBER_TO_BE_FOUND 6
#define NUMBER_OF_ELEMENTS 10

int main(void)
{
	// Function Prototypes
	void FindNumber(int, int, ...);

	// Code
	printf("\n======================================================================\n");

	FindNumber(NUMBER_TO_BE_FOUND, NUMBER_OF_ELEMENTS, 4, 1, 6, 2, 7, 3, 8, 1, 8, 6);

	return (0);
}

void FindNumber(int number_to_be_found, int number, ...) // Variadic Function
{
	// Variable Declarations
	int count = 0;
	int x;
	va_list numbers_list;

	// Code
	va_start(numbers_list, number);

	while (number)
	{
		x = va_arg(numbers_list, int);
		if (x == number_to_be_found)
			count++;
		number--;
	}

	if (count == 0)
		printf("Number %d Cound Not Be Found !!!\n\n", number_to_be_found);
	else
		printf("Number %d Found %d Times !!!\n\n", number_to_be_found, count);

	va_end(numbers_list);
}
