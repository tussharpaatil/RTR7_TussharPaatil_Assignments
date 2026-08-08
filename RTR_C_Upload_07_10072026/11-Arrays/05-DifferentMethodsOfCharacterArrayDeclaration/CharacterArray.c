// Program Name : CharacterArray.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	char characterArray_01[] = { 'A', 'S', 'T', 'R', 'O', 'M', 'E', 'D', 'I', 'C', 'O', 'M', 'P', '\0' };
	// Must Give \0 Explicitly For Proper Initialization
	char characterArray_02[9] = { 'W', 'E', 'L', 'C', 'O', 'M', 'E', 'S', '\0' };
	// Must Give \0 Explicitly For Proper Initialization
	char characterArray_03[] = { 'Y', 'O', 'U', '\0' }; // Must give \0 Explicitly For Proper Initialization
	char characterArray_04[] = "To"; // \0 Is Assumed, Size Is Given As 3, Although String Has Only 2 Characters
	char characterArray_05[] = " REAL TIME REDERING BATCH OF 2026-27"; // \0 Is Assumed, Size Is Given as 40, Although String Has 39 characters

	char characterArray_WithoutNullTerminator[] = { 'H', 'E', 'L', 'L', 'O' };

	// Code
	printf("\n=================================================================================\n");

	printf("Size Of characterArray_01 : %lu\n\n", (unsigned long)sizeof(characterArray_01));
	printf("Size Of characterArray_02 : %lu\n\n", (unsigned long)sizeof(characterArray_02));
	printf("Size Of characterArray_03 : %lu\n\n", (unsigned long)sizeof(characterArray_03));
	printf("Size Of characterArray_04 : %lu\n\n", (unsigned long)sizeof(characterArray_04));
	printf("Size Of characterArray_05 : %lu\n\n", (unsigned long)sizeof(characterArray_05));

	printf("\n=================================================================================\n");
	
	printf("The Strings Are : \n\n");
	printf("characterArray_01 : %s\n\n", characterArray_01);
	printf("characterArray_02 : %s\n\n", characterArray_02);
	printf("characterArray_03 : %s\n\n", characterArray_03);
	printf("characterArray_04 : %s\n\n", characterArray_04);
	printf("characterArray_05 : %s\n\n", characterArray_05);

	printf("\n==================================================================================\n");
	printf("Size Of characterArray_WithoutNullTerminator : %lu\n\n", (unsigned long)sizeof(characterArray_WithoutNullTerminator));
	printf("characterArray_WithoutNullTerminator : %s\n\n", characterArray_WithoutNullTerminator);
	// Will Display Garbage Value At The End Of String Due To Absence Of \0

	return (0);
}
