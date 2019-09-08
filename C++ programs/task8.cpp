/*
   Write a C++ program to check whether two given strings are an anagram.

   Test Data:
   Input the first String: spare
   Input the second String: pears
   Expected Output:
   "spare and pears are Anagram. "
 */

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
		char a[50],b[50],c[50];
		cout<<"Enter string 1: ";
		gets(a);
		cout<<"Enter string 2: ";
		gets(b);
		la=strlen(a);
		lb=strlen(b);
		if (la==lb)
		{
				for(int ai=0; ai<la; ai++)
				{
						for (int bi=0; bi<lb; bi++)
						{
								if (a[ai]==b[bi])
										c[ci]=a[ai];
						}
				}
		}
}
