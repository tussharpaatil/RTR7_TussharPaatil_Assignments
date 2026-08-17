// Program Name : SingleStructVariable.c

#include <stdio.h>
#include <conio.h>

typedef struct
{
	int integer_number;
	float float_number;
	double double_number;
	char ch;
} MyData;

int main(void)
{
	// Variable Declarations
	MyData data;	// Declaring a single struct variable

	// Code
	// User Input For Values Of Data Members Of 'struct MyData'
	printf("\n=====================================================================================\n");

	printf("Enter Integer Values For Data Member 'integer_number' Of 'struct MyData' :  \n");
	scanf("%d", &data.integer_number);

	printf("Enter Floating-Point Value For Data Member 'float_number' Of 'struct MyData' : \n");
	scanf("%f", &data.float_number);

	printf("Enter 'Double' Value For Data Member 'd' Of 'struct MyData' : \n");
	scanf("%lf", &data.double_number);

	printf("Enter Character Value For Data Member 'ch' Of 'struct MyData' : \n");
	data.ch = getch();

	// Display Values Of Data Members Of 'struct MyData'
	printf("\n======================================================================================\n");
	printf("Data Members Of 'struct MyData' Are : \n\n");
	printf("integer_number = %d\n", data.ch);
	printf("float_number = %f\n", data.float_number);
	printf("double_number = %lf\n", data.double_number);
	printf("ch = %c\n", data.ch);

	return (0);
}
