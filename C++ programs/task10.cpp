// Copyright 2023 MRDGH2821
// Write a C++ program to convert a string to lowercase.

#include <iostream>
#include <string.h>
using namespace std;

char to_lowercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return c + 32;

	return c;
}

int main()
{
	string str;
	cout << "Enter a string: ";
	getline(cin, str);
	for (char &c : str)
	{
		c = to_lowercase(c);
	}
	cout << str;
	return 0;
}
