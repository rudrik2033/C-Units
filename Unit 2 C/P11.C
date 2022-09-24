//C Program Unit 2 Practical 11

#include<stdio.h>
#include<conio.h>

void main()
{
  int num;
  clrscr();
  printf("\n Enter Number : ");
  scanf("%d",&num);
  if(0<num)
  printf("\n %d Is Positive Number",num);
  else if(0>num)
  printf("\n %d Is Negative Number",num);
  else
  printf("\n Zero");
  getch();
}