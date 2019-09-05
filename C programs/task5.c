//WRITE A C PROGRAM TO FIND THE REVERSE OF A GIVEN NUMBER.

 #include <stdio.h>
int main()
{
		int num=0,rev=0;
		printf("Enter a number: ");
		scanf("%d",&num);
		while(num>0)
		{
				rev = 10*rev;
				rev = rev + num%10;
				num = num/10;
		};
		printf("Reversed number is: %d",rev);
}
