// Copyright 2023 MRDGH2821
// Write a C program to find the smallest and largest element in an array

#include <stdio.h>

int main() {
  int ar[10], i;
  printf_s("Enter 10 numbers:\n");
  for (i = 0; i < 10; i++) {
    scanf_s("%d", &ar[i]);
  }
  int small = ar[0], large = 0;
  i = 0;
  while (i < 10) {
    // condition for large
    if (large < ar[i]) {
      large = ar[i];
    }
    // condition for small
    if (small > ar[i]) {
      small = ar[i];
    }
    i++;
  }
  printf_s("Largest no: %d\nSmallest no: %d\n", large, small);
}
