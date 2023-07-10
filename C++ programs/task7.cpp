// Copyright 2023 MRDGH2821
// Write a C++ program to swap two numbers using function.

#include <iostream>

void swap(int* a, int* b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int q, w;
  std::cout << "Enter 2 numbers: " << std::endl;
  std::cin >> q >> w;
  std::cout << "1st number = " << q << std::endl;
  std::cout << "2nd number = " << w << std::endl;
  swap(&q, &w);
  std::cout << "After swapping:" << std::endl;
  std::cout << "1st number = " << q << std::endl;
  std::cout << "2nd number = " << w << std::endl;
}
