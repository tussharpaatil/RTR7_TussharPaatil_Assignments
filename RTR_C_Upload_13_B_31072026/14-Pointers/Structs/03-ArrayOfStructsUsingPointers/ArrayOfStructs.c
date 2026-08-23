// Program Name : ArrayOfStructs.c

#include <stdio.h>
#include <stdlib.h>

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
	Employee* pEmployeeRecord = NULL;
	int number_of_employees, counter;

	// Code
	printf("\n========================================================================\n");
	printf("Enter Number Of Employees Whose Details You Want To Record : ");
	scanf("%d", &number_of_employees);

	printf("\n========================================================================\n");
	pEmployeeRecord = (Employee*)malloc(sizeof(Employee) * number_of_employees);
	if (pEmployeeRecord == NULL)
	{
		printf("Failed To Allocated Memory For %d Employees !!! Exitting Now \n\n", number_of_employees);
		exit(0);
	}
	else
		printf("Successfully Allocated Memory For %d Employees !!!\n\n", number_of_employees);

	// *** User Input Initialization Of Array Of 'Employee' ***
	for (counter = 0; counter < number_of_employees; counter++)
	{
		printf("\n====================================================================\n");
		printf("****** Data Entry For Employee Number %d *******\n", (counter + 1));

		printf("\n====================================================================\n");
		printf("Enter Employee Name : ");
		MyGetString(pEmployeeRecord[counter].name, NAME_LENGTH);
		printf("\n====================================================================\n");
		printf("Enter Employee's Age (in years) : ");
		scanf("%d", &pEmployeeRecord[counter].age);

		printf("\n====================================================================\n");
		printf("Enter Employee's Sex (M/m For Male, F/f For Female) : ");
		pEmployeeRecord[counter].sex = getch();
		printf("%c", pEmployeeRecord[counter].sex);
		pEmployeeRecord[counter].sex = toupper(pEmployeeRecord[counter].sex);

		printf("\n====================================================================\n");
		printf("Enter Employee's Salary (in Indian Rupees) : ");
		scanf("%f", &pEmployeeRecord[counter].salary);

		printf("\n====================================================================\n");
		printf("Is The Employee Married? (Y/y For Yes, N/n For No) : ");
		pEmployeeRecord[counter].marital_status = getch();
		printf("%c", pEmployeeRecord[counter].marital_status);
		pEmployeeRecord[counter].marital_status = toupper(pEmployeeRecord[counter].marital_status);
	}

	// **** Display ****
	printf("\n========================================================================\n");
	printf("********** Displaying Employee Records **************\n\n");
	for (counter = 0; counter < number_of_employees; counter++)
	{
		printf("****************** Employee Number %d *******************\n\n", (counter + 1));
		printf("  Name              : %s\n", pEmployeeRecord[counter].name);
		printf("  Age               : %d years\n", pEmployeeRecord[counter].age);
		
		if (pEmployeeRecord[counter].sex == 'M' || pEmployeeRecord[counter].sex == 'm')
			printf("  Sex               : Male\n");
		else if (pEmployeeRecord[counter].sex == 'F' || pEmployeeRecord[counter].sex == 'f')
			printf("  Sex               : Female\n");
		else
			printf("  Sex               : Invalid Data Entered\n");

		printf("  Salary            : Rs. %f\n", pEmployeeRecord[counter].salary);

		if (pEmployeeRecord[counter].marital_status == 'Y' || pEmployeeRecord[counter].marital_status == 'y')
			printf("  Marital Status    : Married\n");
		else if (pEmployeeRecord[counter].marital_status == 'N' || pEmployeeRecord[counter].marital_status == 'n')
			printf("  Marital Status    : Unmarried\n");
		else
			printf("Marital Status : Invalid Data Entered\n");

		printf("\n========================================================================\n");
	}

	if (pEmployeeRecord)
	{
		free(pEmployeeRecord);
		pEmployeeRecord = NULL;
		printf("Memory Allocated To %d Employees Has Been Successfully Freed !!!\n\n", number_of_employees);
	}

	return (0);
}

// *** Simple Rudimentary Implementation Of gets_s() ***
// *** Implemented Due To Different Behaviour Of gets_s() / fgets() / fscanf() On Different Platforms ***
// *** Backspace / Character Deletion And Arrow Key Cursor Movement Not Implemented ***

void MyGetString(char string[], int string_size)
{
	// Variable declarations
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