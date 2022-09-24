//C Program Unit 2 Practical 3

#include<stdio.h>
#include<conio.h>

void main()
{
    int n;
    clrscr();
    printf("\n Enter The Number : ");
    scanf("%d",&n);
    if(0==n%2)
    printf("\n  This Is Even Number ");
    else
    printf("\n This Is Odd Number ");
    getch();
}
