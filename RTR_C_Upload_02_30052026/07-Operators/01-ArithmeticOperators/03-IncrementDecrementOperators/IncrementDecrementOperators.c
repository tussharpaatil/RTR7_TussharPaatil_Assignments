// Program name: IncrementDecrementOperators.c

#include <stdio.h>

int main(void)
{
    // Variable declarations
    int x = 6;
    int y = 15;

    // Code
    printf("\n============================================================\n");
    printf("x = %d\n", x);
    printf("x = %d\n", x++);
    printf("x = %d\n", x);
    printf("x = %d\n\n", ++x);

    printf("y = %d\n", y);
    printf("y = %d\n", y--);
    printf("y = %d\n", y);
    printf("y = %d\n\n", --y);

    return (0);
}
