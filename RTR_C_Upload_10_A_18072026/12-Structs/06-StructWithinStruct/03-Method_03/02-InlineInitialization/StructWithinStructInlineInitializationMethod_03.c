// Program Name : StructWithinStructInlineInitializationMethod_03.c

#include <stdio.h>

int main(void)
{
	// Variable Declarations
	int l, b, a;
	struct Rectangle
	{
		struct MyPoint
		{
			int x_axis;
			int y_axis;
		} point_A, point_B;
	} rect = { { 2, 4}, {6, 8} };

	// Code

	l = rect.point_B.y_axis - rect.point_A.y_axis;
	if (l < 0)
		l = l * -1;

	b = rect.point_B.x_axis - rect.point_A.x_axis;
	if (b < 0)
		b = b * -1;

	a = l * b;

	printf("\n=================================================================\n");
	printf("Length Of Rectangle = %d\n\n", l);
	printf("Breadth Of Rectangle = %d\n\n", b);
	printf("Area Of Reangle = %d\n\n", a);

	return (0);
}
