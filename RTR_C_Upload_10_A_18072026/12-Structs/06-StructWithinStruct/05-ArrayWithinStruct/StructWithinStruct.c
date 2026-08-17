// Program Name : StructWithinStruct.c

#include <stdio.h>

typedef struct
{
	int number;
	int number_table[10];
} MyNumber;

typedef struct
{
	MyNumber x, y, z;
} NumberTables;

int main(void)
{
	// Variable Declarations
	NumberTables tables;
	int counter;

	// Code
	tables.x.number = 2;
	for (counter = 0; counter < 10; counter++)
		tables.x.number_table[counter] = tables.x.number * (counter + 1);

	printf("\n=====================================================================\n");
	printf("Table Of %d : \n\n", tables.x.number);
	for (counter = 0; counter < 10; counter++)
		printf("%d * %d = %d\n", tables.x.number, (counter + 1), tables.x.number_table[counter]);

	tables.y.number = 3;
	for (counter = 0; counter < 10; counter++)
		tables.y.number_table[counter] = tables.y.number * (counter + 1);

	printf("\n=====================================================================\n");
	printf("Table Of %d : \n\n", tables.y.number);
	for (counter = 0; counter < 10; counter++)
		printf("%d * %d = %d\n", tables.y.number, (counter + 1), tables.y.number_table[counter]);

	tables.z.number = 4;
	for (counter = 0; counter < 10; counter++)
		tables.z.number_table[counter] = tables.z.number * (counter + 1);

	printf("\n=====================================================================\n");
	printf("Table Of %d : \n\n", tables.z.number);
	for (counter = 0; counter < 10; counter++)
		printf("%d * %d = %d\n", tables.z.number, (counter + 1), tables.z.number_table[counter]);

	return (0);
}
