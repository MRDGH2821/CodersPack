// A C PROGRAM TO TAKE THE TEMPERATURE IN CELSIUS AND CONVERT IT TO FAHRENHEIT AND DISPLAY IT BACK
#include <stdio.h>
int main()
{
  float f, c;
  printf("Enter temperature in Celsius: ");
  scanf("%f", &c);
  f = 1.8 * c + 32;
  printf("\nTemperature in Fahrenheit: %f", f);
}
