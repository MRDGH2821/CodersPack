// Copyright 2023 MRDGH2821
/*
  Write a C program to take marks in 3 subjects and display their sum and average
*/

#include <stdio.h>

int main() {
  int s1, s2, s3, sum;
  float avg;
  printf_s("Enter 3 subject marks:\n");
  scanf_s("%d %d %d", &s1, &s2, &s3);
  sum = s1 + s2 + s3;
  avg = sum / 3;
  printf_s("Sum: %d \nAverage: %f", sum, avg);
}
