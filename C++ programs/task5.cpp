//  Write a C++ program to find the largest and smallest element in an array.

#include <iostream>
using namespace std;

int main()
{
		int ar[10];
		cout<<"Enter 10 elements: "<<endl;
		for (int i=0; i<10; i++)
		{
				cin>>ar[i];
		}
		int large=0,small=99999;
		for(int i=0; i<10; i++)
		{
				if (ar[i]>large)
						large = ar[i];

				if (ar[i]<small)
						small=ar[i];
		}
		cout<<"Largest number:"<<large<<endl<<"Smallest number:"<<small<<endl;
}
