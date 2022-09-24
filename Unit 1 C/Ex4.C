//C Program Unit 1 Extra Practical 4

#include<stdio.h>
#include<conio.h>

void main()
{
   int km;
   float mtr,ft,in,cm;
   printf("\n Enter The Distance In Kilometer : ");
   scanf("%d",&km);
   mtr=km*1000;
   ft=km*3280.84;
   in=km*39370.1;
   cm=km*100000;
   printf("\n %d Kilometer Is %2f meter",km,mtr);
   printf("\n %d Kilometer Is %2f feet",km,ft);
   printf("\n %d Kilometer Is %2f inches",km,in);
   printf("\n %d Kilometer Is %2f Centimeter",km,cm);
   getch();
}