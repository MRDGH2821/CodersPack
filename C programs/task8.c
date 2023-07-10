// WRITE A C PROGRAM TO READ AN INTEGER AND PRINT ITS MULTIPLICATION TABLE.

#include <stdio.h>
#include <string.h>

int main()
{
	int no;
	printf_s("Enter a number: ");
	scanf_s("%d", &no);
	for (int i = 1; i <= 10; i++)
	{
		printf_s("%d * %d = %d\n", no, i, no * i);
	}
}
