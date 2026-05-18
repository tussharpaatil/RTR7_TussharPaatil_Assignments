// Program Name: Constants.c
#include <stdio.h>

//Natural Log of 2
#define LN_2 0.693147

#define MY_NAME "Tusshar Paatil"

// If First Constant Is Not Assigned A Value, It Is Assumed To be 0. i.e. 'SUNDAY will be 0
// And The Rest Of The Constants Are Assgined Concecutive Integer Values From 0 Onwards 
// i.e.: 'MONDAY' Will Be 1, 'TUESDAY' Will be 2, And So On....

double interest_rate = 0.07; // 7% annual interest
double years_to_double;

// Un-named enums
enum
{
	SUNDAY,
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY
};

enum
{
	JANUARY = 1,
	FEBRUARY,
	MARCH,
	APRIL,
	MAY,
	JUNE,
	JULY,
	AUGUST,
	SEPTEMBER,
	OCTOBER,
	NOVEMBER,
	DECEMBER
};

// Named enums
enum Numbers
{
	ONE,
	TWO,
	THREE,
	FOUR,
	FIVE = 5,
	SIX,
	SEVEN,
	EIGHT,
	NINE,
	TEN
};

enum boolean
{
	TRUE = 1,
	FALSE = 0
};

int main(void)
{
	// Local constants declarations
	const double dbl_epsilon = 0.0000000000000002220446049250313;

	// Code
	printf("\n\n");
	printf("Local Constants dbl_epsilon = %lf\n\n", dbl_epsilon);

	printf("Sunday Is Day Number %d\n", SUNDAY);
	printf("Monday Is Day Number %d\n", MONDAY);
	printf("Tuesday Is Day Number %d\n", TUESDAY);
	printf("Wednesday Is Day Number %d\n", WEDNESDAY);
	printf("Thursday Is Day Number %d\n", THURSDAY);
	printf("Friday Is Day Number %d\n", FRIDAY);
	printf("Saturday Is Day Number %d\n", SATURDAY);

	printf("One Is Enum Number = %d\n", ONE);
	printf("Two Is Enum Number = %d\n", TWO);
	printf("Three Is Enum Number = %d\n", THREE);
	printf("Four Is Enum Number = %d\n", FOUR);
	printf("Five Is Enum Number = %d\n", FIVE);
	printf("Six Is Enum Number = %d\n", SIX);
	printf("Seven Is Enum Number = %d\n", SEVEN);
	printf("Eight Is Enum Number = %d\n", EIGHT);
	printf("Nine Is Enum Number = %d\n", NINE);
	printf("Ten Is Enum Number = %d\n", TEN);

	printf("January Is Month Number = %d\n", JANUARY);
	printf("February Is Month Number = %d\n", FEBRUARY);
	printf("March Is Month Number = %d\n", MARCH);
	printf("April Is Month Number = %d\n", APRIL);
	printf("May Is Month Number = %d\n", MAY);
	printf("June Is Month Number = %d\n", JUNE);
	printf("July Is Month Number = %d\n", JULY);
	printf("August Is Month Number = %d\n", AUGUST);
	printf("September Is Month Number = %d\n", SEPTEMBER);
	printf("October Is Month Number = %d\n", OCTOBER);
	printf("November Is Month Number = %d\n", NOVEMBER);
	printf("December Is Month Number = %d\n", DECEMBER);

	printf("Value of TRUE Is = %d\n", TRUE);
	printf("Value of FALSE Is = %d\n", FALSE);

	printf("LN_2 Macro Value = %10lf\n\n", LN_2);
	years_to_double = LN_2 / interest_rate;
	printf("At a %2.0f%% Interest Rate, Your Investment Will Be Double in %4.2f Years.\n", interest_rate * 100, years_to_double);

	printf(MY_NAME);

	printf("\n\n");

	printf("MY_NAME is : %s\n", MY_NAME);
	printf("\n\n");

	return (0);
}
