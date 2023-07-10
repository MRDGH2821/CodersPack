// Copyright 2019 MRDGH2821
// WRITE A C PROGRAM TO READ THE NAME, AGE AND PHONE NUMBER FROM THE USER, STORE THEM IN VARIABLES AND DISPLAY THEM BACK.
#include <stdio.h>
int main()
{
  char name[20];
  int age, no;
  printf_s("Enter name:\n");
  fgets(name, 20, stdin);
  printf_s("Enter age:\n");
  scanf_s("%d", &age);
  printf_s("Enter phone number:\n");
  scanf_s("%d", &no);
  printf_s("\nDetails:\n");
  printf_s("Name: %s", name);
  printf_s("Age: %d\n", age);
  printf_s("Phone Number: %d\n", no);
  return 0;
}
