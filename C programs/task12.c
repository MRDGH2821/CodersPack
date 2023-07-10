// Copyright 2023 MRDGH2821
/*
  Write a c program to display the following options:
    1. Celsius to Fahrenheit
    2. Fahrenheit to Celsius
    3. Exit
  Perform the relevant operation using switch case
*/

#include <stdio.h>
int main() {
  float f, c;
  int ch;
  printf_s(
      "Menu:\n1.Celsius to Fahrenheit \n2.Fahrenheit to Celsius "
      "\n3.Exit\nEnter choice: ");
  scanf_s("%d", &ch);
  switch (ch) {
    case 1:
      printf_s("Enter temperature in Celsius: ");
      scanf_s("%f", &c);
      f = 1.8 * c + 32;
      printf_s("\nTemperature in Fahrenheit: %f", f);
      break;

    case 2:
      printf_s("Enter temperature in Fahrenheit: ");
      scanf_s("%f", &f);
      c = (f - 32) / 1.8;
      printf_s("\nTemperature in Celsius: %f", c);
      break;

    default:
      exit(0);
  }
}
