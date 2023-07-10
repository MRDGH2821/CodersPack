// Copyright 2023 MRDGH2821
/*
  Write a C program to create a structure called book and store the title author and genre.
  Read these values from the user and display them back using functions
*/

#include <stdio.h>
struct book {
  char title[20];
  char author[20];
  char genre[20];
};

struct book input(struct book k) {
  printf_s("\nEnter Book title: ");
  fgets(k.title, 20, stdin);
  printf_s("\nEnter Book Author: ");
  fgets(k.author, 20, stdin);
  printf_s("\nEnter Book genre: ");
  fgets(k.genre, 20, stdin);
  return k;
}

void output(struct book l) {
  printf_s("\nBook title: ");
  puts(l.title);
  printf_s("\nBook Author: ");
  puts(l.author);
  printf_s("\nBook genre: ");
  puts(l.genre);
}

struct book p[2];

int main() {
  printf_s("Taking input:\n");
  for (int i = 0; i < 2; i++) {
    p[i] = input(p[i]);
  }
  printf_s("\nShowing output:\n");
  for (int i = 0; i < 2; i++) {
    output(p[i]);
  }
}
