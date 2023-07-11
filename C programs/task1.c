// Copyright 2023 MRDGH2821
/*
  Write a C program to read the name age and phone number from the user
  store them in variables and display them back
*/

#include <stdio.h>

int main() {
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
