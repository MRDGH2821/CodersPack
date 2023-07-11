// Copyright 2023 MRDGH2821
// Write a C program to find factorial of a number

#include <stdint.h>
#include <stdio.h>

int main() {
  int no;
  int64_t fact = 1;
  printf_s("Enter a number: ");
  scanf_s("%d", &no);
  while (no != 0) {
    fact = fact * no;
    no--;
  }
  printf_s("Factorial is: %d\n", fact);
}
