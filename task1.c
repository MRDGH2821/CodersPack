//WRITE A C PROGRAM TO READ THE NAME, AGE AND PHONE NUMBER FROM THE USER, STORE THEM IN VARIABLES AND DISPLAY THEM BACK.
#include<stdio.h>
int main()
{
  char name[20];
  int age,no;
  printf("Enter name:\n");
  fgets(name,20,stdin);
  printf("Enter age:\n");
  scanf("%d",&age);
  printf("Enter phone number:\n");
  scanf("%d",&no);
  printf("\nDetails:\n");
  printf("Name:%s\n",name);
  printf("Age:%d\n",age);
  printf("Phone Number:%d\n",no);
  return 0;
}
