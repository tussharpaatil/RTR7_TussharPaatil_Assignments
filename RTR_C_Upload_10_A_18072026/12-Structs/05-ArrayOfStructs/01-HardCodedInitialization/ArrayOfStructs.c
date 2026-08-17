// Program Name : ArraysOfStructs.c

#include <stdio.h>

#define NAME_LENGTH 100
#define MARITAL_STATUS 10

typedef struct
{
	char name[NAME_LENGTH];
	int age;
	float salary;
	char sex;
	char marital_status[MARITAL_STATUS];
} Employee;

int main(void)
{
	// Variable Declarations
	Employee EmployeeRecord[5]; // An Array Of 5 Structs - Each Being Type 'struct Employee'

	char employee_tusshar[] = "Tusshar";
	char employee_pramod[] = "Pramod";
	char employee_omm[] = "Omm";
	char employee_mamta[] = "Mamta";
	char employee_paatil[] = "Paatil";

	int counter;
	
	// Code
	// ***** Hard-Coded Initialization Of Array Of 'struct Employee' ******

	// Employee 1
	strcpy(EmployeeRecord[0].name, employee_tusshar);
	EmployeeRecord[0].age = 36;
	EmployeeRecord[0].sex = 'M';
	EmployeeRecord[0].salary = 15000.0f;
	strcpy(EmployeeRecord[0].marital_status, "Married");

	// Employee 2
	strcpy(EmployeeRecord[1].name, employee_pramod);
	EmployeeRecord[1].age = 60;
	EmployeeRecord[1].sex = 'M';
	EmployeeRecord[1].salary = 115000.0f;
	strcpy(EmployeeRecord[1].marital_status, "Married");

	// Employee 3
	strcpy(EmployeeRecord[2].name, employee_omm);
	EmployeeRecord[2].age = 18;
	EmployeeRecord[2].sex = 'M';
	EmployeeRecord[2].salary = 5000.0f;
	strcpy(EmployeeRecord[2].marital_status, "Unmarried");

	// Employee 4
	strcpy(EmployeeRecord[3].name, employee_mamta);
	EmployeeRecord[3].age = 56;
	EmployeeRecord[3].sex = 'F';
	EmployeeRecord[3].salary = 55000.0f;
	strcpy(EmployeeRecord[3].marital_status, "Married");

	// Employee 5
	strcpy(EmployeeRecord[4].name, employee_paatil);
	EmployeeRecord[4].age = 24;
	EmployeeRecord[4].sex = 'M';
	EmployeeRecord[4].salary = 24000.0f;
	strcpy(EmployeeRecord[4].marital_status, "Unmarried");

	// Display
	printf("\n============================================================\n");
	printf("********* Displaying Employee Records **********\n\n");
	for (counter = 0; counter < 5; counter++)
	{
		printf("******* Employee Number %d *******\n\n", (counter + 1));
		printf("Name			: %s\n", EmployeeRecord[counter].name);
		printf("Age			: %d years\n", EmployeeRecord[counter].age);
		
		if (EmployeeRecord[counter].sex == 'M' || EmployeeRecord[counter].sex == 'm')
			printf("Sex			: Male\n");
		else
			printf("Sex			: Remale\n");

		printf("Salary			: Rs. %f\n", EmployeeRecord[counter].salary);
		printf("Marital Status		: %s\n", EmployeeRecord[counter].marital_status);

		printf("\n===============================================================\n");
	}

	return (0);
}
