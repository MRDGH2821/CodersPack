// Copyright 2023 MRDGH2821
/*
  Write a C program to read the first name and the last name of the user in 2 different variables
  combine them and display their full name using a single string
*/

#include <stdio.h>
#include <string.h>
int main() {
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
