//C Program Unit 1 Practical 9

#include<stdio.h>
#include<conio.h>

void main()
{
   int x,y;
   clrscr();
   printf("\n Enter First Value : ");
   scanf("%d",&x);
   printf("\n Enter Second Value : ");
   scanf("%d",&y);
   printf("\n Values Before Changing \nx=%d\ny=%d",x,y);
   x=x+y;
   y=x-y;
   x=x-y;
   printf("\n Values After Changing \nx=%d\ny=%d",x,y);
   getch();
}