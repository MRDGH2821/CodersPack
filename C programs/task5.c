//WRITE A C PROGRAM TO FIND THE REVERSE OF A GIVEN NUMBER.
#include <stdio.h>
int main()
{
		int num,rev;
		printf("Enter a number: ");
		scanf("%d",&num);
		while(num>0)
		{
				rev = rev + num%10;
				num = num/10;
				rev = 10*rev;
		};
		printf("Reversed number is: %d",rev);
}
