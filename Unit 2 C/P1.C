//C Program Unit 2 Program 1

#include<stdio.h>
#include<conio.h>

void main()
{
  int n1,n2;
  clrscr();
  printf("\n Enter 1st Number : ");
  scanf("%d",&n1);
  printf("\n Enter 2nd Number : ");
  scanf("%d",&n2);
  if(n1>n2)
  printf("\n n1 Is Max : %d ",n1);
  else
  printf("\n n2 Is Max : %d ",n2);
  getch();
}