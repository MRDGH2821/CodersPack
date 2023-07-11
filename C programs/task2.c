// Copyright 2023 MRDGH2821
/*
  Write a C program to take the temperature in celsius and convert it to fahrenheit and display it back
*/

#include <stdio.h>

int main() {
  float f, c;
  printf_s("Enter temperature in Celsius: ");
  scanf_s("%f", &c);
  f = 1.8 * c + 32;
  printf_s("\nTemperature in Fahrenheit: %f", f);
}
