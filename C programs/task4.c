//WRITE A C PROGRAM TO READ THE FIRST NAME AND THE LAST NAME OF THE USER IN 2 DIFFERENT VARIABLES, COMBINE THEM, AND DISPLAY THEIR FULL NAME USING A SINGLE STRING.
#include <stdio.h>
#include <string.h>
int main()
{
        char fname[20],lname[10],name[20],w=32;
        printf("Enter first name: ");
        //scanf("%s",fname);
        fgets(fname,20,stdin);
        printf("Enter last name: ");
        //scanf("%s",fname);
        fgets(lname,10,stdin);
        strcat(fname,lname);
        printf("Name:%s",name);
}
