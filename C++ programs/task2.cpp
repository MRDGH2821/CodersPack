// Copyright 2023 MRDGH2821
// Write a C++ program to check if the given number is even or odd.

#include <iostream>

int main() {
  int no;
  std::cout << "Enter a no.: ";
  std::cin >> no;
  if (no % 2 == 0) {
    std::cout << "Even";
  } else {
    std::cout << "Odd";
  }
  return 0;
}
