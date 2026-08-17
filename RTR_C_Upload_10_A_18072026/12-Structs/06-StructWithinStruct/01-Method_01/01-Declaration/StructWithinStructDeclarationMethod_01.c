// Program Name : StructWithinStructDeclarationMethod_01.c

#include <stdio.h>

struct Rectangle
{
	struct MyPoint
	{
		int x_axis;
		int y_axis;
	} point_A, point_B;
} rect;

int main(void)
{
	// Variable Declarations
	int l, b, a;

	// Code
	printf("\n================================================================\n");
	printf("Enter Leftmost X-coordinates Of Rechangle : ");
	scanf("%d", &rect.point_A.x_axis);
	printf("Enter Bottommost Y-coordinates Of Rectangle : ");
	scanf("%d", &rect.point_A.y_axis);

	printf("\n================================================================\n");
	printf("Enter Rightmost X-coordinate Of Rectangle : ");
	scanf("%d", &rect.point_B.x_axis);
	printf("Enter Topmost Y-coordinate Of Rectangle : ");
	scanf("%d", &rect.point_B.y_axis);

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
