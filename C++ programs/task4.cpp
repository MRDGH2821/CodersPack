// Copyright 2023 MRDGH2821
// Write a C++ program to calculate sum of all the elements of an array.

#include <iostream>

int main() {
  int ar[10];
  std::cout << "Enter 10 elements: " << std::endl;
  int sum = 0;
  for (int i = 0; i < 10; i++) {
    std::cin >> ar[i];
    sum += ar[i];
  }
  std::cout << "Sum of array: " << sum;
}
