// Copyright 2023 MRDGH2821
/*
   Write a C++ program to convert specified days into years, weeks and days.

   Note: Ignore leap year.
   Test Data :
   Number of days : 1329
   Expected Output :
   Years: 3
   Weeks: 33
   Days: 3
 */

#include <iostream>

int main() {
  int days, y, w, d;
  std::cout << "Enter number of days: ";
  std::cin >> days;
  y = days / 365;
  days = days % 365;
  w = days / 7;
  days = days % 7;
  d = days;
  std::cout << "Years: " << y << std::endl;
  std::cout << "Weeks: " << w << std::endl;
  std::cout << "Days : " << d << std::endl;
}
