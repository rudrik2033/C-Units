//C Program Unit 1 Practical 6

#include<stdio.h>
#include<conio.h>

void main()
{
   float a,b,c;
   float avg;
   clrscr();
   printf("\n Enter First Value : ");
   scanf("%f",&a);
   printf("\n Enter Second Value : ");
   scanf("%f",&b);
   printf("\n Enter Third Value : ");
   scanf("%f",&c);
   avg=(a+b+c)/3;
   printf("\n The Average Is : %f",avg);
   getch();
}