//WRITE A C PROGRAM TO CHECK IF THE GIVEN STRING IS A PALINDROME OR NOT.
#include <stdio.h>
#include <string.h>

int main()
{
		char a[100], b[100];
		printf("Enter a string: ");
		gets(a);

		strcpy(b, a);
		strrev(b);

		if (strcmp(a, b) == 0) // Comparing input string with the reverse string
				printf("Palindrome.\n");
		else
				printf("Not a Palindrome.\n");
}
