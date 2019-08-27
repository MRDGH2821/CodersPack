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
  printf("\nDetails:");
  printf("\nName:%s",name);
  printf("\nAge:%d",age);
  printf("\nPhone Number:%d",no);
  return 0;
}
