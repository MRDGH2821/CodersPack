// Copyright 2023 MRDGH2821
/*
   Write a C++ program to check whether two given strings are an anagram.

   Test Data:
   Input the first String: spare
   Input the second String: pears
   Expected Output:
   "spare and pears are Anagram. "
 */

#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <iostream>

int main() {
  char str1[20], str2[20];
  int len, len1, len2, i, j, found = 0, not_found = 0;
  std::cout << "Enter first string :";
  fgets(str1, 20, stdin);
  std::cout << "Enter second string :";
  fgets(str2, 20, stdin);
  len1 = strlen(str1);
  len2 = strlen(str2);
  if (len1 == len2) {
    len = len1;
    for (i = 0; i < len; i++) {
      found = 0;
      for (j = 0; j < len; j++) {
        if (str1[i] == str2[j]) {
          found = 1;
          break;
        }
      }
      if (found == 0) {
        not_found = 1;
        break;
      }
    }
    if (not_found == 1) {
      std::cout << str1 << " and " << str2 << " are not anagrams.";
    } else {
      std::cout << str1 << " and " << str2 << " are anagrams.";
    }
  } else {
    std::cout << str1 << " and " << str2
              << " are not of same length to be anagrams.";
  }
  getch();
}
