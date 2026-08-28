// Program Name : StructWithinStruct.c

#include <stdio.h>

typedef struct
{
	int number;
	int number_table[10];
} MyNumber;

typedef struct
{
	MyNumber n;
} NumTables;

int main(void)
{
	// Variable Declarations
	NumTables tables[10]; // An Array Of 10 'struct NumTables'
	int counter1, counter2;

	// Code
	for (counter1 = 0; counter1 < 10; counter1++)
	{
		tables[counter1].n.number = (counter1 + 1);
	}

	for (counter1 = 0; counter1 < 10; counter1++)
	{
		printf("\n=================================================\n");
		printf("Table Of %d : \n\n", tables[counter1].n.number);
		for (counter2 = 0; counter2 < 10; counter2++)
		{
			tables[counter1].n.number_table[counter2] = tables[counter1].n.number * (counter2 + 1);
			printf("%d * %d = %d\n", tables[counter1].n.number, (counter2 + 1), tables[counter1].n.number_table[counter2]);
		}
	}

	return (0);
}
