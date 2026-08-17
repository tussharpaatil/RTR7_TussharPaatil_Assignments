// Program Name : StructsWithFunctions.c

#include <stdio.h>

// Defining Struct Using typedef
typedef struct
{
	int integerNumber;
	float floatNumber;
	double doubleNumber;
	char ch;
} MyData;

int main(void)
{
	// Function Prototype
	MyData AddStructMembers(MyData, MyData, MyData);

	// Variable Declarations
	MyData data1, data2, data3, answer_data;

	// Code
	// ****** data1 ****
	printf("\n============================================================================================\n");
	printf("************************** Data 1 *******************************\n");
	printf("Enter Integer value For 'integerNumber' Of 'struct MyData data1' : ");
	scanf("%d", &data1.integerNumber);

	printf("\n============================================================================================\n");
	printf("Enter Integer value For 'floatNumber' Of 'struct MyData data1' : ");
	scanf("%f", &data1.floatNumber);

	printf("\n============================================================================================\n");
	printf("Enter Integer value For 'doubleNumber' Of 'struct MyData data1' : ");
	scanf("%lf", &data1.doubleNumber);

	printf("\n============================================================================================\n");
	printf("Enter Integer value For 'ch' Of 'struct MyData data1' : ");
	data1.ch = getch();
	printf("%c", data1.ch);

	// ****** data2 ****
	printf("\n============================================================================================\n");
	printf("************************** Data 2 *******************************\n");
	printf("Enter Integer value For 'integerNumber' Of 'struct MyData data2' : ");
	scanf("%d", &data2.integerNumber);

	printf("\n============================================================================================\n");
	printf("Enter Integer value For 'floatNumber' Of 'struct MyData data2' : ");
	scanf("%f", &data2.floatNumber);

	printf("\n============================================================================================\n");
	printf("Enter Integer value For 'doubleNumber' Of 'struct MyData data2' : ");
	scanf("%lf", &data2.doubleNumber);

	printf("\n============================================================================================\n");
	printf("Enter Integer value For 'ch' Of 'struct MyData data2' : ");
	data2.ch = getch();
	printf("%c", data2.ch);

	// ****** data3 ****
	printf("\n============================================================================================\n");
	printf("************************** Data 3 *******************************\n");
	printf("Enter Integer value For 'integerNumber' Of 'struct MyData data3' : ");
	scanf("%d", &data3.integerNumber);

	printf("\n============================================================================================\n");
	printf("Enter Integer value For 'floatNumber' Of 'struct MyData data3' : ");
	scanf("%f", &data3.floatNumber);

	printf("\n============================================================================================\n");
	printf("Enter Integer value For 'doubleNumber' Of 'struct MyData data3' : ");
	scanf("%lf", &data3.doubleNumber);

	printf("\n============================================================================================\n");
	printf("Enter Integer value For 'ch' Of 'struct MyData data3' : ");
	data3.ch = getch();
	printf("%c", data3.ch);

	// **** Calling Fuinction AddStructMembers() Which Accepts Three Variables Of Type 'struct MyData' as Parameters 
	// And Adds Up The Respective Members And Returns In Another struct Of Same Type *******
	answer_data = AddStructMembers(data1, data2, data3);

	printf("\n============================================================================================\n");
	printf("************************** ANSWER *****************************\n");
	printf("answer_data.integerNumber = %d\n", answer_data.integerNumber);
	printf("answer_data.floatNumber = %f\n", answer_data.floatNumber);
	printf("answer_data.doubleNumber = %lf\n", answer_data.doubleNumber);

	answer_data.ch = data1.ch;
	printf("answer_data.ch' (From data1) = %c\n", answer_data.ch);

	answer_data.ch = data2.ch;
	printf("answer_data.ch' (From data2) = %c\n", answer_data.ch);

	answer_data.ch = data3.ch;
	printf("answer_data.ch' (From data3) = %c\n", answer_data.ch);

	return (0);
}

MyData AddStructMembers(MyData md_one, MyData md_two, MyData md_three)
{
	// Variable Declarations
	MyData answer;

	// Code
	answer.integerNumber = md_one.integerNumber + md_two.integerNumber + md_three.integerNumber;
	answer.floatNumber = md_one.floatNumber + md_two.floatNumber + md_three.floatNumber;
	answer.doubleNumber = md_one.doubleNumber + md_two.doubleNumber + md_three.doubleNumber;

	return (answer);
}
