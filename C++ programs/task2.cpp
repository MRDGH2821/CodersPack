// Copyright 2023 MRDGH2821
// Write a C++ program to check if the given number is even or odd.

#include <iostream>
using namespace std;

int main()
{
	int no;
	cout << "Enter a no.: ";
	cin >> no;
	if (no % 2 == 0)
		cout << "Even";
	else
		cout << "Odd";
	return 0;
}
