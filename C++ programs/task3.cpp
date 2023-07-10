// Write a C++ program to check if the given year is a leap year.

#include <iostream>
using namespace std;

int main()
{
	int year;
	cout << "Enter a year: ";
	cin >> year;
	if (year % 100 == 0)
	{
		if (year % 400 == 0)
		{
			cout << "Century Leap year.\n";
		}
		else
			cout << "Not a century leap year.\n";
	}
	else if (year % 4 == 0)
		cout << "Leap year.\n";
	else
		cout << "Not a leap Year.\n";
	return 0;
}
