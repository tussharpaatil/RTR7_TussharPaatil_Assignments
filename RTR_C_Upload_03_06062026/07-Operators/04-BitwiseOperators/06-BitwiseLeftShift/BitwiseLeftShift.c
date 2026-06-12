// Program Name: BitwiseLeftShift.c
#include <stdio.h>

int main(void)
{
    // Function Prototypes
    void PrintBinaryFormOfNumber(unsigned int);

    // Variable declarations
    unsigned int x;
    unsigned int n_bits;
    unsigned int result;

    // Code
    printf("\n============================================================\n");
    printf("Enter An Integer = ");
    scanf("%u", &x);

    printf("\n============================================================\n");
    printf("By How Many Bits Do You Want to Shift x = %d To The Left ? ", x);
    scanf("%u", &n_bits);

    printf("\n============================================================\n\n");
    result = x << n_bits;
    printf("Bitwise LEFT-SHIFT By %d Bits Of x = %d \nGives The Result = %d (Decimal).\n\n", n_bits, x, result);
    PrintBinaryFormOfNumber(x);
    PrintBinaryFormOfNumber(result);

    return (x);
}

// **** BEGINNERS TO C PROGRAMMING LANGUAGE : PLEASE IGNORE THE CODE OF THE FOLLOWING FUNCTION SNIPPET 'PrintBinaryFormOfNumber()' *****
// **** YOU MAY COME BACK TO THIS CODE AND WILL UNDERSTAND IT MUCH BETTER AFTER YOU HAVE COVERED : ARRAYS, LOOPS AND FUNCTIONS *****
// **** THE ONLY OBJECTIVE OF WRITING THIS FUNCTION WAS TO OBTAIN THE BINARY REPRESENTATION OF DECIMAL INTEGERS SO THAT BIT-WISE
// ANDing, OR-ing, COMPLEMENT AND BIT-SHIFTing COULD BE UNDERSTOOD WITH GREAT EASE *****

void PrintBinaryFormOfNumber(unsigned int decimal_number)
{
    // Variable declarations
    unsigned int quotient, remainder;
    unsigned int number;
    unsigned int binary_array[8];
    int counter;

    // Code
    for (counter = 0; counter < 8; counter++)
        binary_array[counter] = 0;

    printf("The Binary Form Of The Decimal Integer %d Is\t=\t", decimal_number);
    number = decimal_number;
    counter = 7;
    while (number != 0)
    {
        quotient = number / 2;
        remainder = number % 2;
        binary_array[counter] = remainder;
        number = quotient;
        counter--;
    }
    
    for (counter = 0; counter < 8; counter++)
        printf("%u", binary_array[counter]);

    printf("\n============================================================\n");
}
