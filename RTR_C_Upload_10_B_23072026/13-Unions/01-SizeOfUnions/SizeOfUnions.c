// Program Name : SizeOfUnions.c

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

	printf("\n================================================\n");
	printf("Size Of MyStruct = %lu\n", sizeof(s));
	printf("\n================================================\n");
	printf("Size Of MyUnion = %lu\n", sizeof(u));

	return (0);
}
