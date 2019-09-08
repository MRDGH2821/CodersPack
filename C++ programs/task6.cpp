// Write a C++ program to sort elements of array in ascending order.

#include <iostream>
using namespace std;

int *bubblesort(int a[])
{
		int temp;
		for (int j=0; j<9; j++)
		{
				for (int i=0; i<9; i++)
				{
						if (a[i]>a[i+1])
						{
								temp=a[i];
								a[i]=a[i+1];
								a[i+1]=temp;
						}
				}
		}
		return a;
}

int main()
{
		int ar[10];
		cout<<"Enter 10 elements: "<<endl;
		for (int i=0; i<10; i++)
		{
				cin>>ar[i];
		}
		int *a=bubblesort(ar);
		cout<<"Sorted aray: "<<endl;
		for (int i=0; i<10; i++)
		{
				cout<<a[i]<<" ";
		}
}
