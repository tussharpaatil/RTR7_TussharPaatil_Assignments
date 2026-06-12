// Program Name: TypeConversion.c
#include <stdio.h>

int main(void)
{
    // Variable declarations
    int p, q;
    char character_01, character_02;

    int x, result_int;
    float y, result_float;

    int int_explicit;
    float float_explicit;

    // Code
    printf("\n============================================================\n");

    // INTERCONVERSION AND IMPLICIT TYPE_CASTING BETWEEN 'char' AND 'int' TYPES....
    p = 51;
    character_01 = p;
    printf("p = %d\n", p);
    printf("Character 1 (after character_01 = p) = %c\n\n", character_01);

    character_02 = 'T';
    q = character_02;
    printf("Character 2 = %c\n", character_02);
    printf("q (after j = character_02) = %d\n\n", q);

    // IMPLITCIT CONVERSION OF 'int' TO 'float'....
    x = 6;
    y = 6.4f;
    result_float = x + y;
    printf("Integer x = %d And Floating-Point Number %f Added Gives Floating-point Sum = %f\n\n", x, y, result_float);

    result_int = x + y;
    printf("Integer x = %d And Floating-Point Number %f Added Gives Integer Sum = %d\n\n", x, y, result_int);

    // EXPLICIT TYPE-CASTING USING CAST OPERATOR....
    float_explicit = 42.343424f;
    int_explicit = (int)float_explicit;
    printf("Floating Point Number Which Will Be Type Casted Explicitly = %f\n", float_explicit);
    printf("Resultant Integer After Explicit Type Casting Of %f = %d\n\n", float_explicit, int_explicit);
    return (0);
}
