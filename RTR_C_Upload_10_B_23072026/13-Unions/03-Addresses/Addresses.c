// Program Name : addresses.c

#include <stdio.h>

struct MyStruct
{
	int iNum;
	float fNum;
	double dNum;
	char ch;
};

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
	struct MyStruct s;
	union MyUnion u;

	// Code
	printf("\n==============================================\n");
	printf("Members Of Struct Are : \n\n");

	s.iNum = 6;
	s.fNum = 2.45f;
	s.dNum = 6.2342342;
	s.ch = 'T';

	printf("s.iNum = %d\n", s.iNum);
	printf("s.fNum = %f\n", s.fNum);
	printf("s.dNum = %lf\n", s.dNum);
	printf("s.ch = %c\n\n", s.ch);

	printf("Addresses Of Members Of Struct Are : \n\n");
	printf("s.iNum = %p\n", &s.iNum);
	printf("s.fNum = %p\n", &s.fNum);
	printf("s.dNum = %p\n", &s.dNum);
	printf("s.ch = %p\n", &s.ch);

	printf("MyStruct s = %p\n\n", &s);

	printf("\n================================================\n");
	printf("Members Of Union Are : \n\n");

	u.iNum = 5;
	printf("u.iNum = %d\n", u.iNum);

	u.fNum = 3.35f;
	printf("u.fNum = %f\n", u.fNum);

	u.dNum = 1.32423;
	printf("u.dNum = %lf\n", u.dNum);

	u.ch = 'S';
	printf("u.ch = %c\n\n", u.ch);

	printf("Addresses Of Members Of Union Are : \n\n");
	printf("u.iNum = %p\n", &u.iNum);
	printf("u.fNum = %p\n", &u.fNum);
	printf("u.dNum = %p\n", &u.dNum);
	printf("u.ch   = %p\n", &u.ch);

	return (0);
}