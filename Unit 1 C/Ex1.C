//C Program Unit 1 Extra Program 1

#include<stdio.h>
#include<conio.h>

void main()
{
 int a,b=0,c,d;
 clrscr();
 printf("\n Enter 3 Digit Number : ");
 scanf("%d",&a);
 d=a%10;
 c=a;
 while(a>=10)
 {
    a=a/10;
 }
 c=a;
 b=c*d;
 printf("\n Sum Of First And Last Digits = %d",b);
 getch();
 }

