// Program Name : ArrayOfStructs.c

#include <stdio.h>
#include <ctype.h>

#define NUMBER_OF_EMPLOYEES 6 // Simply Change This Constant Value To Have As Many Number Of Employee Records As You Please.

#define NAME_LENGTH 100
#define MARITAL_STATUS 10

typedef struct
{
	char name[NAME_LENGTH];
	int age;
	char sex;
	float salary;
	char marital_status;
} Employee;

int main(void)
{
	// Function Prototype
	void MyGetString(char[], int);

	// Variable Declarations
	Employee EmployeeRecord[NUMBER_OF_EMPLOYEES];	// An Array Of <NUMBER_OF_EMPLOYEES> structs - Each Being Type 'struct Employee'
	int counter;

	// Code
	// *** User Input Initialization Of Array Of 'struct Employee' ***
	for (counter = 0; counter < NUMBER_OF_EMPLOYEES; counter++)
	{
		printf("\n\n\n\n");
		printf("****** DATA ENTRY FOR EMPLOYEE NUMBER %d *******\n", (counter + 1));

		printf("\n\n");
		printf("Enter Employee Name : ");
		MyGetString(EmployeeRecord[counter].name, NAME_LENGTH);

		printf("\n\n");
		printf("Enter Employee's Age (in years) : ");
		scanf("%d", &EmployeeRecord[counter].age);

		printf("\n\n");
		printf("Enter Employee's Sex (M/m For Male, F/f For Female) : ");
		EmployeeRecord[counter].sex = getch();
		printf("%c", EmployeeRecord[counter].sex);
		EmployeeRecord[counter].sex = toupper(EmployeeRecord[counter].sex);

		printf("\n\n");
		printf("Enter Employee's Salary (in Indian Rupees) : ");
		scanf("%f", &EmployeeRecord[counter].salary);

		printf("\n\n");
		printf("Is The Employee Married? (Y/y For Yes, N/n For No) : ");
		EmployeeRecord[counter].marital_status = getch();
		printf("%c", EmployeeRecord[counter].marital_status);
		EmployeeRecord[counter].marital_status = toupper(EmployeeRecord[counter].marital_status);
	}

	// Display
	printf("\n\n\n");
	printf("********* Displaying Employee Records **********\n\n");
	for (counter = 0; counter < NUMBER_OF_EMPLOYEES; counter++)
	{
		printf("************ Employee Number %d **************\n\n", (counter + 1));
		printf("Name			: %s\n", EmployeeRecord[counter].name);
		printf("Age				: %d years\n", EmployeeRecord[counter].age);

		if (EmployeeRecord[counter].sex == 'M')
			printf("Sex			: Male\n");
		else if (EmployeeRecord[counter].sex == 'F')
			printf("Sex			: Female\n");
		else
			printf("Sex			: Invalid Data Entered\n");

		printf("Salary			: Rs. %f\n", EmployeeRecord[counter].salary);

		if (EmployeeRecord[counter].marital_status == 'Y')
			printf("Marital Status : Married\n");
		else if (EmployeeRecord[counter].marital_status == 'N')
			printf("Marital Status : Unmarried\n");
		else
			printf("Marital Status : Invalid Data Entered\n");

		printf("\n\n");
	}

	return (0);
}

// *** Simple Rudimentary Implementation Of gets_s() ****
// *** Implemented Due To Different Behaviour Of gets_s() / fgets() / fscanf() On Different Platforms ***
// *** Backspace / Character Deletion And Arrow Key Cursor Movement Not Implemented ***

void MyGetString(char string[], int string_size)
{
	// Variable Declarations
	int counter;
	char character = '\0';

	// Code
	counter = 0;
	do
	{
		character = getch();
		string[counter] = character;
		printf("%c", string[counter]);
		counter++;
	} while ((character != '\r') && (counter < string_size));

	if (counter == string_size)
		string[counter - 1] = '\0';
	else
		string[counter] = '\0';
}
