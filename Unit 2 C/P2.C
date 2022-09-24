//C Program Unit 2 Practical 2

#include<stdio.h>
#include<conio.h>

void main()
{
    int age;
    clrscr();
    printf("\n Enter The Age : ");
    scanf("%d",&age);
    if(age>=18)
    printf("\n Eligible For Voting ");
    else
    printf("\n Not Eligible For Voting ");
    getch();
}