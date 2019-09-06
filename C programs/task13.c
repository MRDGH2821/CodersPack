// WRITE A C PROGRAM TO FIND THE SMALLEST AND LARGEST ELEMENT IN AN ARRAY.

#include <stdio.h>

int main()
{
		int ar[10],i;
		printf("Enter 10 numbers:\n");
		for (i=0; i<10; i++)
		{
				scanf("%d",&ar[i]);
		}
		int small=ar[0],large=0;
		i=0;
		while(i<10)
		{
				//condition for large
				if (large<ar[i])
				{
						large=ar[i];
				}
				//condition for small
				if (small>ar[i])
				{
						small=ar[i];
				}
				i++;
		}
		printf("Largest no: %d\nSmallest no: %d\n",large,small);
}
