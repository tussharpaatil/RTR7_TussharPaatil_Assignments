// Program Name : MultipleStructVariableDeclarationsMethod_02.c

#include <stdio.h>

// Defining Struct
typedef struct
{
	int x_axis;
	int y_axis;
} MyPoint;

MyPoint point_1, point_2, point_3, point_4, point_5; // Declarating 5 struct variables of type 'struct MyPoint' globally;....

int main(void)
{
	// Code 
	// Assigning Data Values To The Data Members Of 'struct MyPoint' Variable 'point_1'
	point_1.x_axis = 2;
	point_1.y_axis = 0;

	// Assigning Data Values To The Data Members Of 'struct MyPoint' variable 'point_2'
	point_2.x_axis = 7;
	point_2.y_axis = 2;

	// Assigning Data Values To The Data Members Of 'struct MyPoint' Variable 'point_3'
	point_3.x_axis = 8;
	point_3.y_axis = 1;

	// Assigning Data Values To The Data Members Of 'struct MyPoint' Variable 'point_4'
	point_4.x_axis = 12;
	point_4.y_axis = 9;

	// Assigning Data Values To The Data Members Of 'struct MyPoint' Variable 'point_5'
	point_5.x_axis = 5;
	point_5.y_axis = 4;

	// Displaying Values Of The Data Members Of 'struct MyPoint' (All Variables)
	printf("\n===================================================================\n");
	printf("Co-ordinates (x, y) Of Point '1' Are : (%d, %d)\n\n", point_1.x_axis, point_1.y_axis);
	printf("Co-ordinates (x, y) Of Point '2' Are : (%d, %d)\n\n", point_2.x_axis, point_2.y_axis);
	printf("Co-ordinates (x, y) Of Point '3' Are : (%d, %d)\n\n", point_3.x_axis, point_3.y_axis);
	printf("Co-ordinates (x, y) Of Point '4' Are : (%d, %d)\n\n", point_4.x_axis, point_4.y_axis);
	printf("Co-ordinates (x, y) Of Point '5' Are : (%d, %d)\n\n", point_5.x_axis, point_5.y_axis);

	return (0);
}
