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
	printf("Enter a no: ");
	scanf("%d", &no);
	printf("Pyramid:\n");
	for (int i = no; i > 0; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
}
