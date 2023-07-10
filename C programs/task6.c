// Copyright 2023 MRDGH2821
// Write a C program to check if the given number is an armstrong number or not

#include <math.h>
#include <stdio.h>

int main() {
  int no, res, count = 0, rem;
  printf_s("Enter a number: ");
  scanf_s("%d", &no);
  const int org = no;
  while (no != 0) {
    ++count;
    no /= 10;
  }
  printf_s("%d\n", count);
  no = org;
  while (no != 0) {
    rem = no % 10;
    res += pow(rem, count);
    no /= 10;
  }
  if (res == org)
    printf_s("True");
  else
    printf_s("False");
}
