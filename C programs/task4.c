// WRITE A C PROGRAM TO READ THE FIRST NAME AND THE LAST NAME OF THE USER IN 2 DIFFERENT VARIABLES, COMBINE THEM, AND DISPLAY THEIR FULL NAME USING A SINGLE STRING.
#include <stdio.h>
#include <string.h>
int main()
{
	char fname[100], lname[100];
	printf_s("Enter first name: ");
	scanf_s("%s", fname);
	printf_s("Enter last name: ");
	scanf_s("%s", lname);
	// char w=' ';
	// strcat(fname,&w);
	strcat_s(fname, 100, lname);
	// char name[]=fname lname;
	// printf_s("Name:%s",name);
	puts(fname);
}
