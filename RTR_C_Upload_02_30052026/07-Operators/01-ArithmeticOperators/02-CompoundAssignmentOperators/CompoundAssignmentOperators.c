// Program Name: CompoundAssignmentOperatos.c

#include <stdio.h>

int main(void)
{
    // Variable declarations
    int p;
    int q;
    int tmp;

    // Code
    printf("\n============================================================\n");
    printf("Enter a number : ");
    scanf("%d", &p);

    printf("\n============================================================\n");
    printf("Enter another number : ");
    scanf("%d", &q);
    
    printf("\n============================================================\n");

    /*
    Since, In all the following 5 cases, The operand on the left 'p' is getting repeated 
    immediately on the right (e.g. : p = p + q or p = p - q),
    We are using compund assignment operators +=, -=, *= and %=

    Since, 'p' will be assigned the value of (p + q) at the expression
    (p + q), we must save the original value of 'p' to another variable(tmp)
    */

    tmp = p;
    p += q;         // p = p + q;
    printf("Addition of p = %d and q = %d Gives %d.\n", tmp, q, p);

    // Value of 'p' altered in the above expresion is used here..
    // Since 'p' will be assigned the value of (p - q) at the expression
    // (p -= q), we must save the value of 'p' to another variable (tmp)

    tmp = p;
    p -= q;     // p = p - q;
    printf("Subtraction of p = %d and q = %d Gives %d.\n", tmp, q, p);

    // Value of 'p' altered in the above expression is used here..
    // Since, 'p' will be assigned the value of (p * q) at the expression
    // (p *= q), we must save the original value of 'p' to another variable (tmp)

    tmp = p;
    p *= q;     // p = p * q;
    printf("Multiplication of p %d and q = %d Gives %d.\n", tmp, q, p);


    // Value of 'p' altered in the above expression is used here..
    // Since, 'p' will be assigned the value of (p / q) at the expression
    // (p / q), we must save the original value of 'p' to another variable (tmp)

    tmp = p;
    p /= q;     // p = p / q;
    printf("Division of p = %d and q = %d Gives Quotient %d.\n", tmp, q, p);

    // Value of 'p' altered in the above expression is used here..
    //Since, 'p' will be assigned the value of (p % q) at the expression
    // (p % q), we must save the original value of 'p' to another variable (tmp)

    tmp = p;
    p %= q;     // p = p % q;
    printf("Division of p = %d and q = %d Gives remainder %d.\n", tmp, q, p);

    printf("\n============================================================\n");

    return (0);
}
