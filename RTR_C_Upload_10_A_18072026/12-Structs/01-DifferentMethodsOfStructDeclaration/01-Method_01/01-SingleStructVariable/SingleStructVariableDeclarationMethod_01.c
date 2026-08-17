// Program Name : SingleStructVariableDeclarationMethod.c

#include <stdio.h>

// Defining Struct
typedef struct
{
    double double_number; // 8 bytes (Offset 0-7)
    int integer_number;   // 4 bytes (Offset 8-11)
    float float_number;   // 4 bytes (Offset 12-15)
    char ch;       // 1 byte  (Offset 16)
    // 7 bytes padding -> Total: 24 bytes
} MyData; // Declaring a single struct variable of type 'struct MyData' globally....

// Declaring single global variable when structure defined using typedef
MyData data;

int main(void)
{
	// Variable Declarations
    int integer_size;
    int float_size;
    int double_size;
    int character_size;
    int struct_MyData_size;

    // Code
    // Assigning Data Values To The Data Members Of 'struct MyData'
    data.integer_number = 24;
    data.float_number = 3.14f;
    data.double_number = 4.2323;
    data.ch = 'x';

    // Displaying Value Of The Data Members Of 'struct MyData'
    printf("\n=================================================================\n");
    printf("Data Members Of 'struct MyData' Are : \n\n");
    printf("integer_number = %d\n", data.integer_number);
    printf("float_number = %f\n", data.float_number);
    printf("double_number = %lf\n", data.double_number);
    printf("character = %c\n", data.ch);

    // Calculating Sizes (In Bytes) Of The Data Members Of 'struct MyData'
    integer_size = sizeof(data.integer_number);
    float_size = sizeof(data.float_number);
    double_size = sizeof(data.double_number);
    character_size = sizeof(data.ch);

    // Displaying Sizes (In Bytes) Of The Data Members Of 'struct MyData'
    printf("\n==================================================================\n");
    printf("Sizes (In Bytes) Of Data Members Of 'struct MyData' Are : \n\n");
    printf("Size Of 'integer_size' = %d bytes\n", integer_size);
    printf("Size Of 'float_size' = %d bytes\n", float_size);
    printf("Size Of 'double_size' = %d bytes\n", double_size);
    printf("Size Of 'character_size' = %d bytes\n", character_size);

    // Calculating Size (In Bytes) Of the Entire 'struct MyData'
    struct_MyData_size = sizeof(MyData);  // Can Also Give struct name -> sizeof(MyData)

    // Displaying Sizes (In Bytes) Of The Entire 'struct MyData'
    printf("\n===================================================================\n");
    printf("Size Of 'struct MyData' : %d bytes\n\n", struct_MyData_size);

    return (0);
}
