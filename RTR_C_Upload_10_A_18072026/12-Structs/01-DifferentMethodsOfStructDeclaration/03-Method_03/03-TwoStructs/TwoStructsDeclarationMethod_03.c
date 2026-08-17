// Program Name : TwoStructsDeclarationMethod_03.c
#include <stdio.h>

int main(void)
{
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
	} MyPointProperties;

	// Code

	// Declaring A Single variable Of Type 'struct MyPoint locally ....
	MyPoint point;

	// Declaring A Single variable Of Type 'struct MyPointProperties' locally....
	MyPointProperties point_properties;

	// User Inputs For The Data Members Of 'struct MyPoint' Variable 'point'
	printf("\n====================================================================\n");
	printf("Enter X-coordinate For Point : ");
	scanf("%d", &point.x_axis);
	printf("Enter Y-coordinate For Point : ");
	scanf("%d", &point.y_axis);

	printf("\n=====================================================================\n");
	printf("Point Co-ordinates (x, y) Are : (%d, %d) !!!\n\n", point.x_axis, point.y_axis);

	if (point.x_axis == 0 && point.y_axis == 0)
		printf("The Point Is The Origin (%d, %d) !!!\n", point.x_axis, point.y_axis);
	else // Atleast One Of The Two Values (either 'X' or 'Y' or Both) Is a non-zero value ....
	{
		if (point.x_axis == 0) // If 'X' Is Zero.... Obviously 'Y' Is The non-zero Value
		{
			if (point.y_axis < 0) // If 'Y' Is -ve 
				strcpy(point_properties.axis_location, "Negative Y");

			if (point.y_axis > 0) // If 'Y' Is +ve
				strcpy(point_properties.axis_location, "Positive Y");

			point_properties.quadrant = 0; // A Point Lying One Any Of The Co-ordinate Axis Is Not Part Of Any Quadrant...
			printf("The Point Lies On The %s Axis !!!\n\n", point_properties.axis_location);
		}
		else if (point.y_axis == 0) // If 'Y' Is Zero... Obviously 'X' Is The Non-zero value
		{
			if (point.x_axis < 0) // If 'X' is -ve 
				strcpy(point_properties.axis_location, "Negative X");

			if (point.x_axis > 0) // If 'X' Is +ve 
				strcpy(point_properties.axis_location, "Positive X");

			point_properties.quadrant = 0; // A Point Lying On Any Of The Co-ordinate Axis Is Not Part of Any Quadrant...
			printf("The Point Lies On The %s Axis !!!\n\n", point_properties.axis_location);
		}
		else // Both 'X' and 'Y' are Non-zero
		{
			point_properties.axis_location[0] = '\0'; // A Point Lying In Any Of The 4 Quadrants Cannot be Lying On ANy Of the coordinate Axis

			if (point.x_axis > 0 && point.y_axis > 0) // 'X' Is +Ve and 'Y' Is +ve
				point_properties.quadrant = 1;

			else if (point.x_axis < 0 && point.y_axis > 0) // 'X' Is -Ve And 'Y' Is +ve
				point_properties.quadrant = 2;

			else if (point.x_axis < 0 && point.y_axis < 0) // 'X' Is -ve and 'Y -ve
				point_properties.quadrant = 3;

			else										  // 'X' Is +ve And 'Y' Is -ve 
				point_properties.quadrant = 4;

			printf("The Point Lies In Quadrant Number %d !!! \n\n", point_properties.quadrant);
		}
	}
	
	return (0);
}
