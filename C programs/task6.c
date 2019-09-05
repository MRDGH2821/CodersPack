//WRITE A C PROGRAM TO CHECK IF THE GIVEN NUMBER IS AN ARMSTRONG NUMBER OR NOT.

#include <stdio.h>
#include <math.h>
int main()
{
		int no;
		printf("Enter a number: ");
		scanf("%d",&no);
		int org=no;
		int res;
		while(no>0)
		{
				res=res + pow(no%10,3);
				no=no/10;
		}
		if (res=org)
		{
				printf("true");
		}
		else
		{
				printf("false");
		}
}
