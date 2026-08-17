// Program Name : TwoStructsDeclarationMethod_01.c

#include <stdio.h>

// Defining Struct
struct MyPoint
{
	int x_axis;
	int y_axis;
} point;	// Declaring a single variable of type 'struct MyPoint' globally .....

// Defining Struct 
struct MyPointProperties
{
	int quadrant;
	char axis_location[10];
} point_properties;		// Declaring a single variable of type 'struct MyPointProperties' globally ....

int main(void)
{
	// Code
	// User Input For The Data Members Of 'struct MyPoint' Variable 'point_1'
	printf("\n=============================================================================\n");
	printf("Enter X-Coordinates For Point 1 : ");
	scanf("%d", &point.x_axis);
	printf("Enter Y-Coordinates For Point 1 : ");
	scanf("%d", &point.y_axis);

	printf("\n==============================================================================\n");
	printf("Point Co-ordinates (x, y) Are : (%d, %d)\n", point.x_axis, point.y_axis);

	if (point.x_axis == 0 && point.y_axis == 0)
		printf("The Point Is The Origin (%d, %d) !!!\n", point.x_axis, point.y_axis);
	else // Atleast One of the two values (either 'X' or 'Y' or Both) is a non-zero value ....
	{
		if (point.x_axis == 0)	// If 'X' Is Zero .... Obviously 'Y' Is The non-zero Value
		{
			if (point.y_axis < 0) // If 'Y' Is '-ve'
				strcpy(point_properties.axis_location, "Negative Y");
			
			if (point.y_axis > 0) // If 'Y' Is '+ve'
				strcpy(point_properties.axis_location, "Positive Y");

			point_properties.quadrant = 0; // A Point Lying On Any Of The Coordinate Axis Is Not A Part Of Any Quadrant...
			printf("The Point Lies On The %s Axis !!!\n\n", point_properties.axis_location);
		}
		else if (point.y_axis == 0) // If 'Y' Is Zero .... Obviously 'X' Is The Non-zero value
		{
			if (point.x_axis < 0) // If 'X' Is '-ve' 
				strcpy(point_properties.axis_location, "Negative X");

			if (point.x_axis > 0) // If 'Y' Is '+ve'
				strcpy(point_properties.axis_location, "Positive Y");

			point_properties.quadrant = 0; // A Point Lying On Any Of the Coordinates Axis is not a part of any Quadrant....
			printf("The Point Lies On The %s Axis !!!\n\n", point_properties.axis_location);
		}
		else // Both 'X' And 'Y' Are Non-zero
		{
			point_properties.axis_location[0] = '\0'; // A point lying In Any of the 4 Quadrants cana not be lying on Any of the coordinate axis...

			if (point.x_axis > 0 && point.y_axis > 0) // 'X' Is +ve And 'Y' Is +ve
				point_properties.quadrant = 1;

			else if (point.x_axis < 0 && point.y_axis > 0) // 'X' Is -ve and 'Y' Is +ve
				point_properties.quadrant = 2;

			else if (point.x_axis < 0 && point.y_axis < 0) // 'X' Is -ve And 'Y' Is -ve
				point_properties.quadrant = 3;

			else										// 'X' Is +ve And 'Y' Is -ve
				point_properties.quadrant = 4;

			printf("The Point Lies In Quadrant Number %d !!!\n\n", point_properties.quadrant);
		}
	}

	return (0);
}
