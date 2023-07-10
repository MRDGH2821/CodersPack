// Copyright 2023 MRDGH2821
// Write a C program to find the reverse of a given number

#include <stdio.h>
int main() {
  int num = 0, rev = 0;
  printf_s("Enter a number: ");
  scanf_s("%d", &num);
  while (num > 0) {
    rev = 10 * rev;
    rev = rev + num % 10;
    num = num / 10;
  }
  printf_s("Reversed number is: %d", rev);
}
