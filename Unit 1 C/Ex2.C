//C Program Unit 1 Extra Program 2

#include<stdio.h>
#include<conio.h>

void main()
{
 int a,b,c,d;
 clrscr();
 printf("\n Enter The 3 Digit Number : ");
 scanf("%d",&a);
 b=a/10;
 c=b%10;
 d=c*c;
 printf("\n Sqaure Of Middle Digit Is : %d",d);
 getch();
}