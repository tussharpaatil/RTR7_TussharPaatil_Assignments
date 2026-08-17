// Program Name : Typedef_PrimitiveDatatypes.c

#include <stdio.h>

// Global typedef
typedef int MY_INTEGER; // "type" int has been re"def"ined as MY_INTEGER ... Now, "MY_INTEGER" can be treated just like "int"

int main(void)
{
	// Function Prototype
	MY_INTEGER Add(MY_INTEGER, MY_INTEGER);
	
	// Typedefs
	typedef int MY_INTEGER; // "type" int has been re"def"ined as MY_INTEGER ... Now, "MY_INTEGER" can be treated just like "int"
	typedef float TUSSHAR_FLOAT; // "type" float has been re"def"ined as TUSSHAR_FLOAT... NOW, "TUSSHAR_FLOAT" can be treated just like "float"
	typedef char CHARACTER; // "type" char has been re"def"ined as "CHARACTER"... Now, "CHARACTER" can be treated just like "char"
	typedef double MY_DOUBLE; // "type" double has been re"def"ined as "MY_DOUBLE", Now, "MY_DOUBLE" Can be treated just like "double"

	// ******** Just like in WIN32SDK !!! ***********
	typedef unsigned int UINT;
	typedef UINT HANDLE;
	typedef HANDLE HWND;
	typedef HANDLE HINSTANCE;

	// Variable Declarations
	MY_INTEGER a = 24, counter;
	MY_INTEGER integerArray[] = { 6, 12, 18, 24, 30, 36, 42, 48, 54, 60 };

	TUSSHAR_FLOAT f_tusshar = 24.4f;
	const TUSSHAR_FLOAT f_tusshar_pi = 3.14f;

	CHARACTER ch = '*';
	CHARACTER characterArray_01[] = "Hello";
	CHARACTER characterArray_02[][10] = { "RTR", "Batch", "2026-2027" };

	MY_DOUBLE d = 6.234232;

	// ****** Just Random Numbers - They Have Nothing To Do With Any Window's Handle Or Instance Handle !!! This Is Just For Understanding... ***
	UINT uint = 2342;
	HANDLE handle = 728;
	HWND hwnd = 2234;
	HINSTANCE hInstance = 124523;

	// Code
	printf("\n===============================================================================\n");
	printf("Type MY_INSTANCE Variable a = %d\n", a);

	printf("\n===============================================================================\n");
	for (counter = 0; counter < (sizeof(integerArray) / sizeof(int)); counter++)
	{
		printf("Type MY_INTEGER Array Variable integerArray[%d] = %d\n", counter, integerArray[counter]);
	}
	printf("\n================================================================================\n");

	printf("Type TUSSHAR_FLOAT Variable f_tusshar = %f\n", f_tusshar);
	printf("Type TUSSHAR_FLOAT Variable f_tusshar_pi = %f\n", f_tusshar_pi);

	printf("\n================================================================================\n");
	printf("Type MY_DOUBLE Variable d = %lf\n", d);

	printf("\n================================================================================\n");
	printf("Type CHARACTER Variable ch = %c\n", ch);

	printf("\n================================================================================\n");
	printf("Type CHARACTER Array Variable characterArray_01 = %s\n", characterArray_01);

	printf("\n================================================================================\n");
	for (counter = 0; counter < (sizeof(characterArray_02) / sizeof(characterArray_02[0])); counter++)
	{
		printf("%s\t", characterArray_02[counter]);
	}
	printf("\n================================================================================\n");

	printf("\n================================================================================\n");
	printf("Type UINT Variable unit = %u\n", uint);
	printf("Type HANDLE Variable handle = %u\n", handle);
	printf("Type HWND Variable hwnd = %u\n", hwnd);
	printf("Type HINSTANCE Variable hInstance = %u\n", hInstance);
	printf("\n================================================================================\n");

	MY_INTEGER x = 90;
	MY_INTEGER y = 30;
	MY_INTEGER ret;

	ret = Add(x, y);
	printf("ret = %d\n\n", ret);
	return (0);
}

MY_INTEGER Add(MY_INTEGER a, MY_INTEGER b)
{
	// Code
	MY_INTEGER sum;
	sum = a + b;

	return (sum);
}
