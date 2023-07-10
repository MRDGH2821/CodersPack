// Copyright 2023 MRDGH2821
// Write a C++ program to convert a string to lowercase.

#include <string.h>
#include <iostream>

char to_lowercase(char c) {
  if (c >= 'A' && c <= 'Z') {
    return c + 32;
  }

  return c;
}

int main() {
  std::string str;
  std::cout << "Enter a string: ";
  std::getline(std::cin, str);
  for (char& c : str) {
    c = to_lowercase(c);
  }
  std::cout << str;
  return 0;
}
