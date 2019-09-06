//WRITE A C PROGRAM TO CREATE A STRUCTURE CALLED BOOK AND STORE THE TITLE, AUTHOR AND GENRE. READ THESE VALUES FROM THE USER AND DISPLAY THEM BACK, USING FUNCTIONS.

#include <stdio.h>
struct book
{
		char title[20];
		char author[20];
		char genre[20];
};

struct book input(struct book k)
{
		printf("\nEnter Book title: ");
		gets(k.title);
		printf("\nEnter Book Author: ");
		gets(k.author);
		printf("\nEnter Book genre: ");
		gets(k.genre);
		return k;
};

void output(struct book l)
{
		printf("\nBook title: ");
		puts(l.title);
		printf("\nBook Author: ");
		puts(l.author);
		printf("\nBook genre: ");
		puts(l.genre);
}
struct book p[2];
int main()
{

		printf("Taking input:\n");
		for(int i=0; i<2; i++)
		{
				p[i]=input(p[i]);
		}
		printf("\nShowing output:\n");
		for(int i=0; i<2; i++)
		{
				output(p[i]);
		}
}
