// WRITE A C PROGRAM TO READ AN INTEGER AND PRINT ITS MULTIPLICATION TABLE.

#include <stdio.h>
#include <string.h>

int main()
{
	int no;
	printf("Enter a number: ");
	scanf("%d", &no);
	for (int i = 1; i <= 10; i++)
	{
		printf("%d * %d = %d\n", no, i, no * i);
	}
}
