// WRITE A C PROGRAM TO CHECK IF THE GIVEN NUMBER IS AN ARMSTRONG NUMBER OR NOT.

#include <stdio.h>
#include <math.h>

int main()
{
	int no, res, count = 0, rem;
	printf_s("Enter a number: ");
	scanf_s("%d", &no);
	const int org = no;
	while (no != 0)
	{
		++count;
		no /= 10;
	}
	printf_s("%d\n", count);
	no = org;
	while (no != 0)
	{
		rem = no % 10;
		res += pow(rem, count);
		no /= 10;
	}
	if (res == org)
		printf_s("True");
	else
		printf_s("False");
}
