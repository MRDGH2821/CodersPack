//WRITE A C PROGRAM TO READ THE FIRST NAME AND THE LAST NAME OF THE USER IN 2 DIFFERENT VARIABLES, COMBINE THEM, AND DISPLAY THEIR FULL NAME USING A SINGLE STRING.
#include <stdio.h>
#include <string.h>
int main()
{
		char fname[100],lname[100];
		printf("Enter first name: ");
		scanf("%s",fname);
		printf("Enter last name: ");
		scanf("%s",lname);
		//char w=' ';
		//strcat(fname,&w);
		strcat(fname,lname);
		//char name[]=fname lname;
		//printf("Name:%s",name);
		puts(fname);
}
