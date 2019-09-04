//WRITE A C PROGRAM TO READ THE FIRST NAME AND THE LAST NAME OF THE USER IN 2 DIFFERENT VARIABLES, COMBINE THEM, AND DISPLAY THEIR FULL NAME USING A SINGLE STRING.
#include<stdio.h>
#include<string.h>
int main()
{
  char fname[10],lname[10],name[20],w[]={' '};
  printf("Enter first name: ");
  scanf("%s",fname);
  printf("Enter last name: ");
  scanf("%s",lname);

  strcat(fname,w);
  strcpy(name,fname);
  strcat(name,lname);
  printf("Name:%s",name);
}
