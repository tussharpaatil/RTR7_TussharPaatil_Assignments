// Program name: RelationalOperators.c

#include <stdio.h>

int main(void)
{
    // Variable declarations
    int s;
    int t;
    int result;

    // Code
    printf("\n============================================================\n");
    printf("Enter One Integer : ");
    scanf("%d", &s);
    
    printf("\n============================================================\n");
    printf("Enter Another Integer : ");
    scanf("%d", &t);
    
    printf("\n============================================================\n");
    printf("If Answer = 0, It Is 'FALSE'.\n");
    printf("If Answer = 1, It Is 'TRUE'.\n\n");

    result = (s < t);
    printf("(s < t) s = %d Is Less Than t = %d      \t Answer = %d\n", s, t, result);

    result = (s > t);
    printf("(s > t) s = %d Is Greater Than t = %d       \t Answer = %d\n", s, t, result);

    result = (s <= t);
    printf("(s <= t) s = %d Is Less Than Or Equal To t = %d     \t Answer = %d\n", s, t, result);

    result = (s >= t);
    printf("(s >= t) s = %d Is Greater Than Or Equal To t = %d      \t Answer = %d\n", s, t, result);

    result = (s == t);
    printf("(s == t) s = %d Is Equal To t = %d      \t Answer = %d\n", s, t, result);

    result = (s != t);
    printf("(s != t) s = %d Is Not Equal to t = %d      \t Answer = %d", s, t, result);

    printf("\n============================================================\n");

    return (0);
}
