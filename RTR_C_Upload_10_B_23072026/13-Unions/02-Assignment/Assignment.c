// Program Name : Assignment.c

#include <stdio.h>

union MyUnion
{
	int iNum;
	float fNum;
	double dNum;
	char ch;
};

int main(void)
{
	// Variable Declarations
	union MyUnion u1, u2;

	// Code
	// ****** MyUnion u2 *******
	printf("\n============================================\n");
	printf("Members Of Union u1 Are : \n\n");

	u1.iNum = 3;
	u1.fNum = 4.2f;
	u1.dNum = 2.4345345;
	u1.ch = 'T';

	printf("u1.iNum = %d\n", u1.iNum);
	printf("u1.fNum = %f\n", u1.fNum);
	printf("u1.dNum = %lf\n", u1.dNum);
	printf("u1.ch = %c\n", u1.ch);

	printf("Addresses Of Members Of Union u1 Are : \n\n");
	printf("u1.iNum = %p\n", &u1.iNum);
	printf("u1.fNum = %p\n", &u1.fNum);
	printf("u1.dNum = %p\n", &u1.dNum);
	printf("u1.ch   = %p\n", &u1.ch);

	printf("MyUnion u1 = %p\n", &u1);

	//******* MyUnion u2 *********
	printf("\n=========================================\n");
	printf("Members Of Union u2 Are : \n");

	u2.iNum = 4;
	printf("u2.iNum = %d\n", u2.iNum);
	
	u2.fNum = 2.35f;
	printf("u2.fNum = %f\n", u2.fNum);

	u2.dNum = 2.32423;
	printf("u2.dNum = %lf\n", u2.dNum);

	u2.ch = 'D';
	printf("u2.ch = %c\n", u2.ch);

	printf("Addresses Of Members Of Union u2 Are : \n\n");
	printf("u2.iNum = %p\n", &u2.iNum);
	printf("u2.fNum = %p\n", &u2.fNum);
	printf("u2.dNum = %p\n", &u2.dNum);
	printf("u2.ch   = %p\n", &u2.ch);

	return (0);
}
