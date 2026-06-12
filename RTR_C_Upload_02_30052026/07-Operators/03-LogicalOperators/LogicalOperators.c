// Program name: LogicalOperators.c

#include <stdio.h>

int main(void)
{
    // Variable declarations
    int x;
    int y;
    int z;
    int result;

    // Code
    printf("\n============================================================\n");
    printf("Enter First Integer : ");
    scanf("%d", &x);

    printf("\n============================================================\n");
    printf("Enter Second Integer : ");
    scanf("%d", &y);

    printf("\n============================================================\n");
    printf("Enter Third Integer : ");
    scanf("%d", &z);

    printf("\n============================================================\n");
    printf("If Answer = 0, It Is 'FALSE'.\n");
    printf("If Answer = 1, It Is 'TRUE'.\n");

    result = (x <= y) && (y != z);
    printf("LOGICAL AND (&&) : Answer is TRUE (1) If And Only If BOTH Conditions Are True. The Answer Is FLASE (0), If Any Of Both Conditions Are False.");
    printf("x = %d Is Less Than or Equal To y = %d AND y = %d Is NOT Equal To z = %d \t Answer = %d\n\n", x, y, y, z, result);

    result = (y >= x) || (x == z);
    printf("LOGICAL OR (||) : Answer Is FALSE (0) If And Only If BOTH Conditions Are False. The Answer is TRUE (1), If Any One Or BOTH Conditions Are True.\n");
    printf("Either y = %d Is Greater Than Or Equal To x = %d OR x = %d Is Equal To z = %d \t Answer = %d\n\n", y, x, x, z, result);

    result = !x;
    printf("x = %d And using Logical NOT (!) Operator on a Given Result = %d\n\n", x, result);

    result = !y;
    printf("y = %d And using Logical NOT (!) Operator on a Given Result = %d\n\n", y, result);

    result = !z;
    printf("z = %d And using Logical NOT (!) Operator on a Given Result = %d\n\n", z, result);

    result = (!(x <= y) && !(y != z));
    printf("Using Logical NOT (!) On (x <= y) And Also on (y != z) And then ANDing Them After wards Gives Result = %d\n", result);

    printf("\n============================================================\n");

    result = !((y >= x) || (x == z));
    printf("Using Logical NOT (!) On Entire Logical Expression (y >= x) || (x == z) Gives Result = %d\n", result);

    printf("\n============================================================\n");

    return (0);
}
