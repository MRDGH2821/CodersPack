// WRITE A C PROGRAM TO FIND FACTORIAL OF A NUMBER.
#include <stdio.h>
int main()
{
	int no;
	unsigned long long int fact = 1;
	printf_s("Enter a number: ");
	scanf_s("%d", &no);
	while (no != 0)
	{
		fact = fact * no;
		no--;
	}
	printf_s("Factorial is: %d\n", fact);
}
