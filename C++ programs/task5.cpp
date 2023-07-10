// Copyright 2023 MRDGH2821
// Write a C++ program to find the largest and smallest element in an array.

#include <iostream>

int main() {
  int ar[10];
  std::cout << "Enter 10 elements: " << std::endl;
  for (int i = 0; i < 10; i++) {
    std::cin >> ar[i];
  }
  int large = 0, small = 99999;
  for (int i = 0; i < 10; i++) {
    if (ar[i] > large) {
      large = ar[i];
    }

    if (ar[i] < small) {
      small = ar[i];
    }
  }
  std::cout << "Largest number:" << large << std::endl
            << "Smallest number:" << small << std::endl;
}
