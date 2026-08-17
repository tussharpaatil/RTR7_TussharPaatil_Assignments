// Program Name : StructContainingArrays.c

#include <stdio.h>

#define INTEGER_ARRAY_SIZE 10
#define FLOAT_ARRAY_SIZE 5
#define CHARACTER_ARRAY_SIZE 26

#define NUMBER_STRINGS 10
#define MAX_CHARACTERS_PER_STRING 20

#define ALPHABET_BEGINNING 65 // 'A'

typedef struct
{
	int integerArray[INTEGER_ARRAY_SIZE];
	float floatArray[FLOAT_ARRAY_SIZE];
} MyDataOne;

typedef struct
{
	char characterArray[CHARACTER_ARRAY_SIZE];
	char stringArray[NUMBER_STRINGS][MAX_CHARACTERS_PER_STRING];
} MyDataTwo;

int main(void)
{
	// Variable Declarations
	MyDataOne data_one;
	MyDataTwo data_two;
	int counter;

	// Code
	// **** PIECE-MEAL ASSIGNMENT (HARD-CODED) *****
	data_one.floatArray[0] = 1.2f;
	data_one.floatArray[1] = 2.4f;
	data_one.floatArray[2] = 3.6f;
	data_one.floatArray[3] = 4.8f;
	data_one.floatArray[4] = 6.0f;

	// ***** Loop Assignment (User Input) *****
	printf("\n================================================================================\n");
	printf("Enter %d Integers : \n\n", INTEGER_ARRAY_SIZE);
	for (counter = 0; counter < INTEGER_ARRAY_SIZE; counter++)
		scanf("%d", &data_one.integerArray[counter]);

	// ***** Loop Assignment (Hard-Coded) ******
	for (counter = 0; counter < CHARACTER_ARRAY_SIZE; counter++)
		data_two.characterArray[counter] = (char)(counter + ALPHABET_BEGINNING);

	// ***** PIECE-MEAL ASSIGNMENT (HARD-CODED) *****
	strcpy(data_two.stringArray[0], "Welcome !!!");
	strcpy(data_two.stringArray[1], "This ");
	strcpy(data_two.stringArray[2], "Is ");
	strcpy(data_two.stringArray[3], "ASTROMEDICOMP'S ");
	strcpy(data_two.stringArray[4], "Real ");
	strcpy(data_two.stringArray[5], "Time ");
	strcpy(data_two.stringArray[6], "Rendering ");
	strcpy(data_two.stringArray[7], "Batch ");
	strcpy(data_two.stringArray[8], "Of ");
	strcpy(data_two.stringArray[9], "2026-2027 !!!");

	// **** Displaying Data Members Of 'struct DataOne' And Their Values *****
	printf("\n================================================================================\n");
	printf("Members Of 'struct DataOne' Alongwith Their Assigned Values Are : \n\n");
	printf("\n================================================================================\n");
	printf("Integer Array (data_one.integerArray[]) : \n\n");
	for (counter = 0; counter < INTEGER_ARRAY_SIZE; counter++)
		printf("data_one.integerArray[%d] = %d\n", counter, data_one.integerArray[counter]);

	printf("\n================================================================================\n");
	printf("Floating-Point Array (data_one.floatArray[]) : \n\n");
	for (counter = 0; counter < FLOAT_ARRAY_SIZE; counter++)
		printf("data_one.floatArray[%d] = %f\n", counter, data_one.floatArray[counter]);

	// **** Displaying Data Members Of 'struct DataTwo' And Their Values ****
	printf("\n================================================================================\n");
	printf("Members Of 'struct DataTwo' Alontwith Their Assigned Values Are : \n\n");
	printf("\n================================================================================\n");
	printf("Character Array (data_two.characterArray[]) : \n\n");
	for (counter = 0; counter < CHARACTER_ARRAY_SIZE; counter++)
		printf("data_two.characterArray[%d] = %c\n", counter, data_two.characterArray[counter]);

	printf("\n================================================================================\n");
	printf("String Array (data_two.stringArray[]) : \n\n");
	for (counter = 0; counter < NUMBER_STRINGS; counter++)
		printf("%s ", data_two.stringArray[counter]);

	printf("\n================================================================================\n");

	return (0);
}
