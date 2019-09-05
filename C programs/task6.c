//WRITE A C PROGRAM TO CHECK IF THE GIVEN NUMBER IS AN ARMSTRONG NUMBER OR NOT.

#include <stdio.h>
#include <math.h>

int main()
{
		int no,res,count=0,rem;
		printf("Enter a number: ");
		scanf("%d",&no);
		const int org=no;
		while(no!=0)
		{
				++count;
				no/=10;
		}
		printf("%d\n",count);
		no=org;
		while(no!=0)
		{
				rem=no%10;
				res+= pow(rem,count);
				no/=10;
		}
		if (res==org)
				printf("True");
		else
				printf("False");
}
