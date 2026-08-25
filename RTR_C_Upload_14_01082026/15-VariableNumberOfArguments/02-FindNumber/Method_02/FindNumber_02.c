// Program Name : FindNumber_02.c

#include <stdio.h>
#include <stdarg.h>

#define NUMBER_TO_BE_FOUND 6
#define NUMBER_OF_ELEMENTS 10

int main(void)
{
	// Function Prototypes
	void FindNumber(int, int, ...);

	// Code
	printf("\n=============================================================\n");

	FindNumber(NUMBER_TO_BE_FOUND, NUMBER_OF_ELEMENTS, 6, 1, 5, 6, 7, 2, 8, 2, 6, 9);

	return (0);
}

void FindNumber(int number_to_be_found, int number, ...) // Variadic Function
{
	// Function Prototypes
	int va_FindNumber(int, int, va_list);

	// Variable Declarations
	int count = 0;
	int x;
	va_list numbers_list;

	// Code
	va_start(numbers_list, number);

	count = va_FindNumber(number_to_be_found, number, numbers_list);

	if (count == 0)
		printf("Number %d Count Not Be Found !!!\n\n", number_to_be_found);
	else
		printf("Number %d Found %d Times !!!\n\n", number_to_be_found, count);

	va_end(numbers_list);
}

int va_FindNumber(int number_to_be_found, int number, va_list list)
{
	// Variable Declarations
	int count_of_number = 0;
	int x;

	// Code
	while (number)
	{
		x = va_arg(list, int);

		if (x == number_to_be_found)
			count_of_number++;
		number--;
	}

	return (count_of_number);
}
