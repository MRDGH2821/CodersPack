// Copyright 2023 MRDGH2821
// Write a C++ program to sort elements of array in ascending order.

#include <iostream>

int* bubbleSort(int a[]) {
  int temp;
  for (int j = 0; j < 9; j++) {
    for (int i = 0; i < 9; i++) {
      if (a[i] > a[i + 1]) {
        temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
      }
    }
  }
  return a;
}

int main() {
  int ar[10];
  std::cout << "Enter 10 elements: " << std::endl;
  for (int i = 0; i < 10; i++) {
    std::cin >> ar[i];
  }
  int* a = bubbleSort(ar);
  std::cout << "Sorted array: " << std::endl;
  for (int i = 0; i < 10; i++) {
    std::cout << a[i] << " ";
  }
}
