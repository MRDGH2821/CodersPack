// Copyright 2023 MRDGH2821
// Write a C program to read an integer and print its multiplication table

#include <stdio.h>
#include <string.h>

int main() {
  int no;
  printf_s("Enter a number: ");
  scanf_s("%d", &no);
  for (int i = 1; i <= 10; i++) {
    printf_s("%d * %d = %d\n", no, i, no * i);
  }
}
