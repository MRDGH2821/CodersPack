// Copyright 2023 MRDGH2821
// Write a C++ program to check if the given year is a leap year.

#include <iostream>

int main() {
  int year;
  std::cout << "Enter a year: ";
  std::cin >> year;
  if (year % 100 == 0) {
    if (year % 400 == 0) {
      std::cout << "Century Leap year.\n";
    } else {
      std::cout << "Not a century leap year.\n";
    }
  } else if (year % 4 == 0) {
    std::cout << "Leap year.\n";
  } else {
    std::cout << "Not a leap Year.\n";
  }
  return 0;
}
