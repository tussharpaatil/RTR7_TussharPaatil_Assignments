// Program Name : Typedef_Structs.c

#include <stdio.h>

#define MAX_NAME_LENGTH 100

struct Employee
{
	char name[MAX_NAME_LENGTH];
	unsigned int age;
	char gender;
	double salary;
};

struct MyData
{
	int iNum;
	float fNum;
	double dNum;
	char ch;
};

int main(void)
{
	// Typedefs
	typedef struct Employee MY_EMPLOYEE_TYPE;
	typedef struct MyData MY_DATA_TYPE;

	// Variable Declarations
	struct Employee emp = { "Tusshar", 36, 'M', 10000.00 };
	MY_EMPLOYEE_TYPE emp_typedef = { "Omm", 8, 'M', 15000.00 };

	struct MyData md = { 24, 12.23f, 34.768642, 'A' };
	MY_DATA_TYPE md_typedef;

	// Code
	md_typedef.iNum = 6;
	md_typedef.fNum = 2.44f;
	md_typedef.dNum = 4.12124;
	md_typedef.ch = 'T';

	printf("\n================================================================================\n");
	printf("struct Employee : \n\n");
	printf("emp.name	= %s\n", emp.name);
	printf("emp.age		= %d\n", emp.age);
	printf("emp.gender	= %c\n", emp.gender);
	printf("emp.salary	= %lf\n", emp.salary);

	printf("\n================================================================================\n");
	printf("MY_EMPLOYEE_TYPE : \n\n");
	printf("emp_typedef.name	= %s\n", emp_typedef.name);
	printf("emp_typedef.age		= %d\n", emp_typedef.age);
	printf("emp_typedef.gender	= %c\n", emp_typedef.gender);
	printf("emp_typedef.salary	= %lf\n", emp_typedef.salary);

	printf("\n===============================================================================\n");
	printf("MY_DATA_TYPE : \n\n");
	printf("md_typedef.iNum = %d\n", md_typedef.iNum);
	printf("md_typedef.fNum = %f\n", md_typedef.fNum);
	printf("md_typedef.dNum = %lf\n", md_typedef.dNum);
	printf("md_typedef.ch = %c\n", md_typedef.ch);

	printf("\n================================================================================\n");

	return (0);
}
