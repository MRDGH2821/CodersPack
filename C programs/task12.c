/*WRITE A C PROGRAM TO DISPLAY THE FOLLOWING OPTIONS :
   1. CELCIUS TO FAHRENHEIT,
   2. FAHRENHEIT TO CELCIUS,
   3. EXIT.
   PERFORM THE RELEVANT OPERATION USING SWITCH CASE.
 */

#include <stdio.h>
int main()
{
		float f,c;
		int ch;
		printf("Menu:\n1.Celcius to Fahrenheit \n2.Fahrenheit to Celcius \n3.Exit\nEnter choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:  printf("Enter temperature in Celcius: ");
				scanf("%f",&c);
				f=1.8*c + 32;
				printf("\nTemperature in Fahrenheit: %f",f);
				break;

		case 2:  printf("Enter temperature in Fahrenheit: ");
				scanf("%f",&f);
				c=(f-32)/1.8;
				printf("\nTemperature in Celcius: %f",c);
				break;

		default: exit(0);
		}
}
