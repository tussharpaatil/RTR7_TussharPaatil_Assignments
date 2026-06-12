// Program Name: TheFiveArithmeticOperatorsAndAssignmentOperators.c
#include <stdio.h>

int main(void)
{
    // Variable declarations
    int x;
    int y;
    int result;

    // Code
    printf("\n============================================================\n");
    printf("Enter a number : ");      // printf - print formatted
    scanf("%d", &x);                 // scanf - scan formatted, & - address of operator

    printf("\n============================================================\n");
    printf("Enter another number : ");
    scanf("%d", &y);

    printf("\n============================================================\n");

    /* The following are the 5 arithmetic operators +, -, *, / and %
    Also, The resultant of the arithmetic operators in all the below
    five cases have been assigned to the variable 'result' using the 
    assignment operator (=)
    */

    result = x + y;
    printf("Addition Of x = %d And y = %d Gives %d.\n", x, y, result);

    result = x - y;
    printf("Subtraction Of x = %d And y = %d Gives %d.\n", x, y, result);

    result = x * y;
    printf("Multiplication Of x = %d And y = %d Gives %d.\n", x, y, result);

    result = x / y;
    printf("Division Of x = %d And y = %d Gives Quotient %d.\n", x, y, result);

    result = x % y;
    printf("Division Of x = %d And y = %d Gives Remainder %d.\n", x, y, result);

    printf("\n============================================================\n");

    return(0);
}
