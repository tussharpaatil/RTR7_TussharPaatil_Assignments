// Program Name : InlineInitializationWithLoopsDisplay.c

#include <stdio.h>
int main(void)
{
	// Variable Declarations
	int integerArray[] = { 3, 5, 23, 53, 12, 9, 76, 95, 37, 42 };
	int integer_size;
	int integerArray_size;
	int integerArray_number_elements;

	float floatArray[] = { 1.1f, 2.2f, 3.3f, 4.4f, 5.5f, 6.6f, 7.7f, 8.8f };
	int float_size;
	int floatArray_size;
	int floatArray_number_elements;

	char charArray[] = { 'A', 'S', 'T', 'R', 'O', 'M', 'E', 'D', 'I', 'C', 'O', 'M', 'P' };
	int char_size;
	int charArray_size;
	int charArray_number_elements;
	int counter;

	// Code
	// ******* integerArray[] ********
	printf("\n=======================================================================================\n");
	printf("In-line Initialization And Loop (for) Display Of Elements Of Array 'integerArray[]' : \n\n");

	integer_size = sizeof(int);
	integerArray_size = sizeof(integerArray);
	integerArray_number_elements = integerArray_size / integer_size;

	for (counter = 0; counter < integerArray_number_elements; counter++)
	{
		printf("integerArray[%d] (Element %d)  = %d\n", counter, (counter + 1), integerArray[counter]);
	}

	printf("\n========================================================================================\n");
	printf("Size Of Data type 'int'			= %d\n", integer_size);
	printf("Number Of Elements In 'int' Array 'integerArray[]'	= %d Elements\n", integerArray_number_elements);
	printf("Size Of Array 'iArray[]' (%d Elements * %d Bytes)	= %d Bytes\n\n", integerArray_number_elements, integer_size, integerArray_size);

	// ****** floatArray[] *******
	printf("\n========================================================================================\n");
	printf("In-line Initialization And Loop (while) Display Of Elements Of Array 'fArray[]': \n\n");

	float_size = sizeof(float);
	floatArray_size = sizeof(floatArray);
	floatArray_number_elements = floatArray_size / float_size;

	counter = 0;
	while (counter < floatArray_number_elements)
	{
		printf("floatArray[%d] (Element %d) = %f\n", counter, (counter + 1), floatArray[counter]);
		counter++;
	}

	printf("Size Of Data Type 'float'		= %d bytes\n", float_size);
	printf("Number Of Elements in 'float' Array 'floatArray[]'	= %d Elements\n", floatArray_number_elements);
	printf("Size Of Array 'floatArray[]' (%d Elements * %d Bytes)	= %d Bytes\n\n", floatArray_number_elements, float_size, floatArray_size);

	// ***** charArray[] ******
	printf("\n===========================================================================================\n");
	printf("In-line Initialization and Loop (do-while) Display Of Elements Of Array 'charArray[] : \n\n");

	char_size = sizeof(char);
	charArray_size = sizeof(charArray);
	charArray_number_elements = charArray_size / char_size;

	counter = 0;
	do
	{
		printf("charArray[%d] (Element %d) = %c\n", counter, (counter + 1), charArray[counter]);
		counter++;
	} while (counter < charArray_number_elements);

	printf("Size Of Data type 'char'	 = %d bytes\n", char_size);
	printf("Number Of Elements in 'char' Array 'charArray[]'	= %d Elements\n", charArray_number_elements);
	printf("Size of Array 'charArray[]' (%d Elements * %d Bytes)	= %d Bytes\n\n", charArray_number_elements, char_size, charArray_size);

	return (0);
}
