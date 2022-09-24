//C Program Unit 2 Practical 18

#include<stdio.h>
#include<conio.h>

void main()
{
  int a,b;
  clrscr();
  printf("Input The Number : ");
  scanf("%d",&b);
  for(a=1;a<=10;a++)
  printf("\n%d*%d=%d",b,a,b*a);
  getch();
}