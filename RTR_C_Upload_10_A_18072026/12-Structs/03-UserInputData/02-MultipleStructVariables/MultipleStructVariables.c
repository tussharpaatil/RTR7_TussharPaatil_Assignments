// Program Name : MultipleStructVariables.c

#include <stdio.h>

// Struct Definition
typedef struct
{
	int x_axis;
	int y_axis;
} MyPoint;

int main(void)
{
	// Variable Declarations
	MyPoint point_1, point_2, point_3, point_4, point_5; // Declaring a 5 struct variables

	// Code
	// User Input For The Data Members Of 'struct MyPoint' Variable 'point_1'
	printf("\n=============================================================\n");
	printf("Enter x-coordinate For Point '1' : ");
	scanf("%d", &point_1.x_axis);
	printf("Enter y-coordinate For Point '1' : ");
	scanf("%d", &point_1.y_axis);

	// User Input For The Data Members Of 'struct MyPoint' Variable 'point_2'
	printf("\n=============================================================\n");
	printf("Enter x-coordinate For Point '2' : ");
	scanf("%d", &point_2.x_axis);
	printf("Enter y-coordintes For Point '2' : ");
	scanf("%d", &point_2.y_axis);

	// User Input For The Data Members Of 'struct MyPoint' Variable 'point_2'
	printf("\n=============================================================\n");
	printf("Enter x-coordinate For Point '3' : ");
	scanf("%d", &point_3.x_axis);
	printf("Enter y-coordintes For Point '3' : ");
	scanf("%d", &point_3.y_axis);

	// User Input For The Data Members Of 'struct MyPoint' Variable 'point_4'
	printf("\n=============================================================\n");
	printf("Enter x-coordinate For Point '4' : ");
	scanf("%d", &point_4.x_axis);
	printf("Enter y-coordintes For Point '4' : ");
	scanf("%d", &point_4.y_axis);

	// User Input For The Data Members Of 'struct MyPoint' Variable 'point_5'
	printf("\n=============================================================\n");
	printf("Enter x-coordinate For Point '5' : ");
	scanf("%d", &point_5.x_axis);
	printf("Enter y-coordintes For Point '5' : ");
	scanf("%d", &point_5.y_axis);

	// Displaying Values Of Data Members Of 'struct MyPoint' (All variables)
	printf("\n=============================================================\n");
	printf("Co-ordinates (x, y) Of Point '1' Are : (%d, %d)\n\n", point_1.x_axis, point_1.y_axis);
	printf("Co-ordinates (x, y) Of Point '2' Are : (%d, %d)\n\n", point_2.x_axis, point_2.y_axis);
	printf("Co-ordinates (x, y) Of Point '3' Are : (%d, %d)\n\n", point_3.x_axis, point_3.y_axis);
	printf("Co-ordinates (x, y) Of Point '4' Are : (%d, %d)\n\n", point_4.x_axis, point_4.y_axis);
	printf("Co-ordinates (x, y) Of Point '5' Are : (%d, %d)\n\n", point_5.x_axis, point_5.y_axis);

	return (0);
}
