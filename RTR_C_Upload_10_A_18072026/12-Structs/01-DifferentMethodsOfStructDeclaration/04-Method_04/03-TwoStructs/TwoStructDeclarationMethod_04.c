// Program Name : TwoStructDeclarationMethod_04.c

#include <stdio.h>

// Defining Struct
typedef struct
{
	int x_axis;
	int y_axis;
} MyPoint;

// Defining Struct
typedef struct
{
	int quadrant;
	char axis_location[10];
}MyPointProperties;

int main(void)
{
	// Variable Declarations
	MyPoint point; // Declaring A Single Variable Of Type 'struct MyPoint' locally...
	MyPointProperties point_properties; // Declaring A Single Variable Of Type 'struct MyPointProperties' Locally...

	// Code
	// User Input For The Data Members Of 'struct MyPoint' Variable 'point'
	printf("\n=====================================================================\n");
	printf("Enter X-Coordinate For A Point : ");
	scanf("%d", &point.x_axis);
	printf("Enter Y-Coordinate For A Point : ");
	scanf("%d", &point.y_axis);

	printf("\n=====================================================================\n");
	printf("Point Co-ordinates (x, y) Are : (%d, %d) !!!\n", point.x_axis, point.y_axis);

	if (point.x_axis == 0 && point.y_axis == 0)
		printf("Point Co-ordinates (x, y) Are : (%d, %d) !!!\n\n", point.x_axis, point.y_axis);

	else // Atleast One Of Two Values (either 'X' Or 'Y' Or Both) is a non-zero value ....
	{
		if (point.x_axis == 0) // If 'X' Is Zero ... Obviously 'Y' Is The non-zero Value
		{
			if (point.y_axis < 0) // If 'Y' Is -ve
				strcpy(point_properties.axis_location, "Negative Y");

			if (point.y_axis > 0) // If 'Y' Is +ve
				strcpy(point_properties.axis_location, "Positive Y");

			point_properties.quadrant = 0; // A Point Lying On Any Of The Co-ordinate Axis Is Not A Part Of Any Quadrant .... 
			printf("The Point Lies On The %s Axis !!!\n\n", point_properties.axis_location);
		}
		else if (point.y_axis == 0) // If 'Y' Is Zero.. .Obviously 'X' Is The Non-zero Value 
		{
			if (point.x_axis < 0) // If 'X' Is -ve 
				strcpy(point_properties.axis_location, "Negative X");

			if (point.x_axis > 0) // If 'X' Is +ve
				strcpy(point_properties.axis_location, "Positive X");

			point_properties.quadrant = 0; // A Point Lying On Any Of The Co-ordinate Axis Is Not A Part Of Any Quadrant....
			printf("The Point Lies On The %s Axis !!!\n\n", point_properties.axis_location);
		}
		else // Both 'X' And 'Y' Are non-zero
		{
			point_properties.axis_location[0] = '\0'; // A Point Lying IN ANy Of The 4 Quadrants Cannot Be Lying On Any Of The Co-ordinate Axis...
			
			if (point.x_axis > 0 && point.y_axis > 0)	// 'X' Is +ve And 'Y' Is +ve 
				point_properties.quadrant = 1;

			else if (point.x_axis < 0 && point.y_axis > 0) // 'X' Is -ve And 'Y' Is +ve
				point_properties.quadrant = 2;

			else if (point.x_axis < 0 && point.y_axis < 0) // 'X' Is -ve And 'Y' Is -ve
				point_properties.quadrant = 3;

			else											// 'X' Is +ve And 'Y' Is -ve 
				point_properties.quadrant = 4;

			printf("The Point Lies In Quadrant Number %d !!!\n\n", point_properties.quadrant);
		}
	}

	return (0);
}
