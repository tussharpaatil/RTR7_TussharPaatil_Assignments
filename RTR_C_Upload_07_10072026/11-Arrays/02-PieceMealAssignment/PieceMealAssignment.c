// Program Name : PieceMealAssignment.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int intArrayOne[10];
	int intArrayTwo[10];

	// Code

	// ***** intArrayOne[] ******
	intArrayOne[0] = 4;
	intArrayOne[1] = 2;
	intArrayOne[2] = 98;
	intArrayOne[3] = 12;
	intArrayOne[4] = 1;
	intArrayOne[5] = 32;
	intArrayOne[6] = 8;
	intArrayOne[7] = 15;
	intArrayOne[8] = 9;
	intArrayOne[9] = 20;

	printf("\n==============================================================================\n");
	printf("Piece-meal (Hard-coded) Assignment And Display Of Elements to Array 'intArrayOne[]' : \n\n");
	printf("1st Element Of Array 'intArrayOne[]' Or Element At 0th Index Of Array 'intArrayOne[]' = %d\n", intArrayOne[0]);
	printf("2nd Element Of Array 'intArrayOne[]' Or Element At 1st Index Of Array 'intArrayOne[]' = %d\n", intArrayOne[1]);
	printf("3rd Element Of Array 'intArrayOne[]' Or Element At 2nd Index Of Array 'intArrayOne[]' = %d\n", intArrayOne[2]);
	printf("4th Element Of Array 'intArrayOne[]' Or Element At 3rd Index Of Array 'intArrayOne[]' = %d\n", intArrayOne[3]);
	printf("5th Element Of Array 'intArrayOne[]' Or Element At 4th Index Of Array 'intArrayOne[]' = %d\n", intArrayOne[4]);
	printf("6th Element Of Array 'intArrayOne[]' Or Element At 5th Index Of Array 'intArrayOne[]' = %d\n", intArrayOne[5]);
	printf("7th Element Of Array 'intArrayOne[]' Or Element At 6th Index Of Array 'intArrayOne[]' = %d\n", intArrayOne[6]);
	printf("8th Element Of Array 'intArrayOne[]' Or Element At 7th Index Of Array 'intArrayOne[]' = %d\n", intArrayOne[7]);
	printf("9th Element Of Array 'intArrayOne[]' Or Element At 8th Index Of Array 'intArrayOne[]' = %d\n", intArrayOne[8]);
	printf("10th Element Of Array 'intArrayOne[]' Or Element At 9th Index Of Array 'intArrayOne[]' = %d\n", intArrayOne[9]);

	// ****** intArrayTwo[] ******
	printf("\n==============================================================================\n");

	printf("Enter 1st Element Of Array 'intArrayTwo[]' : ");
	scanf("%d", &intArrayTwo[0]);
	printf("Enter 2nd Element Of Array 'intArrayTwo[]' : ");
	scanf("%d", &intArrayTwo[1]);
	printf("Enter 3rd Element Of Array 'intArrayTwo[]' : ");
	scanf("%d", &intArrayTwo[2]);
	printf("Enter 4th Element Of Array 'intArrayTwo[]' : ");
	scanf("%d", &intArrayTwo[3]);
	printf("Enter 5th Element Of Array 'intArrayTwo[]' : ");
	scanf("%d", &intArrayTwo[4]);
	printf("Enter 6th Element Of Array 'intArrayTwo[]' : ");
	scanf("%d", &intArrayTwo[5]);
	printf("Enter 7th Element Of Array 'intArrayTwo[]' : ");
	scanf("%d", &intArrayTwo[6]);
	printf("Enter 8th Element Of Array 'intArrayTwo[]' : ");
	scanf("%d", &intArrayTwo[7]);
	printf("Enter 9th Element Of Array 'intArrayTwo[]' : ");
	scanf("%d", &intArrayTwo[8]);
	printf("Enter 10th Element Of Array 'intArrayTwo[]' : ");
	scanf("%d", &intArrayTwo[9]);

	printf("\n===============================================================================\n");
	printf("Piece-meal (User Input) Assignment And Display Of Elements to Array 'intArrayTwo[]' : \n\n");
	printf("1st Element Of Array 'intArrayTwo[]' Or Element At 0th Index Of Array 'intArrayTwo[]' = %d\n", intArrayTwo[0]);
	printf("2nd Element Of Array 'intArrayTwo[]' Or Element At 1st Index Of Array 'intArrayTwo[]' = %d\n", intArrayTwo[1]);
	printf("3rd Element Of Array 'intArrayTwo[]' Or Element At 2nd Index Of Array 'intArrayTwo[]' = %d\n", intArrayTwo[2]);
	printf("4th Element Of Array 'intArrayTwo[]' Or Element At 3rd Index Of Array 'intArrayTwo[]' = %d\n", intArrayTwo[3]);
	printf("5th Element Of Array 'intArrayTwo[]' Or Element At 4th Index Of Array 'intArrayTwo[]' = %d\n", intArrayTwo[4]);
	printf("6th Element Of Array 'intArrayTwo[]' Or Element At 5th Index Of Array 'intArrayTwo[]' = %d\n", intArrayTwo[5]);
	printf("7th Element Of Array 'intArrayTwo[]' Or Element At 6th Index Of Array 'intArrayTwo[]' = %d\n", intArrayTwo[6]);
	printf("8th Element Of Array 'intArrayTwo[]' Or Element At 7th Index Of Array 'intArrayTwo[]' = %d\n", intArrayTwo[7]);
	printf("9th Element Of Array 'intArrayTwo[]' Or Element At 8th Index Of Array 'intArrayTwo[]' = %d\n", intArrayTwo[8]);
	printf("10th Element Of Array 'intArrayTwo[]' Or Element At 9th Index Of Array 'intArrayTwo[]' =%d\n", intArrayTwo[9]);

	return (0);
}
