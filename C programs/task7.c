// Copyright 2023 MRDGH2821
// WRITE A C PROGRAM TO CHECK IF THE GIVEN STRING IS A PALINDROME OR NOT.

#include <stdio.h>
#include <string.h>

int main()
{
	char a[100], b[100];
	printf_s("Enter a string: ");
	fgets(a, 100, stdin);

	strcpy_s(b, 100, a);
	strrev(b);

	if (strcmp(a, b) == 0) // Comparing input string with the reverse string
		printf_s("Palindrome.\n");
	else
		printf_s("Not a Palindrome.\n");
}
