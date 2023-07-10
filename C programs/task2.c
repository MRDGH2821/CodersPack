// Copyright 2023 MRDGH2821
// A C PROGRAM TO TAKE THE TEMPERATURE IN CELSIUS AND CONVERT IT TO FAHRENHEIT AND DISPLAY IT BACK

#include <stdio.h>
int main()
{
  float f, c;
  printf_s("Enter temperature in Celsius: ");
  scanf_s("%f", &c);
  f = 1.8 * c + 32;
  printf_s("\nTemperature in Fahrenheit: %f", f);
}
