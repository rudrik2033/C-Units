//C Program Unit 2 Ex Practical 1

#include<stdio.h>
#include<conio.h>

void main()
{
  int x,y,z;
  clrscr();
  printf("\n Enter The Value Of Y : ");
  scanf("%d",&y);
  printf("\n Enter The Value Of z : ");
  scanf("%d",&z);
  if(y>z)
  {


      x=y+z;
      printf("\n Sum Of Number Is :%d+%d=%d",y,z,x);
  }
  else
  {
     x=y*z;
     printf("\n Multiplication Of Number Is :%d*%d=%d",y,z,x);
  }
   getch();
}