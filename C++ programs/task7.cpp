//Write a C++ program to swap two numbers using function.

#include <iostream>
using namespace std;
void swap(int *a,int *b)
{
		int temp;
		temp=*a;
		*a=*b;
		*b=temp;
}

int main()
{
		int q,w;
		cout<<"Enter 2 numbers: "<<endl;
		cin>>q>>w;
		cout<<"1st number = "<<q<<endl;
		cout<<"2nd number = "<<w<<endl;
		swap(&q,&w);
		cout<<"After swapping:"<<endl;
		cout<<"1st number = "<<q<<endl;
		cout<<"2nd number = "<<w<<endl;
}
