/* WRITE A C PROGRAM TO PRINT THE GIVEN PYRAMID(CLICK TO SEE THE PYRAMID).
   12345
   1234
   123
   12
   1
 */

#include <stdio.h>
int main()
{
	int no;
	printf_s("Enter a no: ");
	scanf_s("%d", &no);
	printf_s("Pyramid:\n");
	for (int i = no; i > 0; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			printf_s("%d", j);
		}
		printf_s("\n");
	}
}
