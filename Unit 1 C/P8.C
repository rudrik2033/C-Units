//C Program Unit 1 Program 8

#include<stdio.h>
#include<conio.h>

void main()
{
   int x,y,z;
   clrscr();
   printf("\n Enter First Value : ");
   scanf("%d",&x);
   printf("\n Enter Second Value : ");
   scanf("%d",&y);
   printf("\n Values Before Changing \nx=%d\ny=%d",x,y);
   z=x;
   x=y;
   y=z;
   printf("\n Values After Changing \nx=%d\ny=%d",x,y);
   getch();
 }












