// Program Name : FunctionPointers.c

#include <stdio.h>

int main(void)
{
	// Function Declarations
	int AddIntegers(int, int);
	int SubtractIntegers(int, int);
	float AddFloats(float, float);

	// Variable Declarations
	typedef int (*AddIntsFnPtr)(int, int);
	AddIntsFnPtr ptrAddTwoIntegers = NULL;
	AddIntsFnPtr ptrFunc = NULL;

	typedef float (*AddFloatsFnPtr)(float, float);
	AddFloatsFnPtr ptrAddTwoFloats = NULL;

	int integerResult = 0;
	float floatResult = 0.0f;

	// Code
	ptrAddTwoIntegers = AddIntegers;
	integerResult = ptrAddTwoIntegers(6, 24);
	printf("\n================================================\n");
	printf("Sum Of Integers = %d\n\n", integerResult);

	ptrFunc = SubtractIntegers;
	integerResult = ptrFunc(6, 24);
	printf("\n================================================\n");
	printf("Subtraction Of Integers = %d\n\n", integerResult);

	ptrAddTwoFloats = AddFloats;
	floatResult = ptrAddTwoFloats(12.42f, 6.3f);
	printf("\n================================================\n");
	printf("Sum Of Floating-Point Numbers = %f\n\n", floatResult);

	return (0);
}

int AddIntegers(int a, int b)
{
	// Variable Declarations
	int c;

	// Code
	c = a + b;
	return (c);
}

int SubtractIntegers(int a, int b)
{
	// Variable Declarations
	int c;

	// Code
	if (a > b)
		c = a - b;
	else
		c = b - a;

	return (c);
}

float AddFloats(float f_num1, float f_num2)
{
	// Variable Declarations
	float ans;

	// Code
	ans = f_num1 + f_num2;
	return (ans);
}
