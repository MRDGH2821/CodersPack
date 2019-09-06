//WRITE A C PROGRAM TO FIND FACTORIAL OF A NUMBER.
#include <stdio.h>
int main()
{
		int no;
		unsigned long long int fact=1;
		printf("Enter a number: ");
		scanf("%d",&no);
		while(no!=0)
		{
				fact=fact*no;
				no--;
		}
		printf("Factorial is: %d\n",fact);
}
