// Program Name : DataTypesAndPointerSizes.c

typedef struct
{
	char name[100];
	int age;
	float salary;
	char sex;
	char marital_status;
} Employee;

int main(void)
{
	// Code
	printf("\n==========================================================================================================\n");
	printf("Sizes Of Data Types And Pointers To Those Respective Data Types Are    : \n\n");
	printf("Size Of (int)             : %d \t \t \t Size of pointer to int (int*)                         : %d\n\n", sizeof(int), sizeof(int*));
	printf("Size Of (float)           : %d \t \t \t Size of pointer to float (float*)                     : %d\n\n", sizeof(float), sizeof(float*));
	printf("Size Of (double)          : %d \t \t \t Size of pointer to double (double*)                   : %d\n\n", sizeof(double), sizeof(double*));
	printf("Size Of (char)            : %d \t \t \t Size of pointer to char (char*)                       : %d\n\n", sizeof(char), sizeof(char*));
	printf("Size of (struct Employee) : %d \t \t Size of pointer to struct Employee (struct Employee*) : %d\n\n", sizeof(Employee), sizeof(Employee*));
	printf("\n==========================================================================================================\n");
	
	return (0);
}
