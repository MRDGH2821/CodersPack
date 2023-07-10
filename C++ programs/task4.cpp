// Write a C++ program to calculate sum of all the elements of an array.

#include <iostream>
using namespace std;

int main()
{
	int ar[10];
	cout << "Enter 10 elements: " << endl;
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> ar[i];
		sum += ar[i];
	}
	cout << "Sum of array: " << sum;
}
