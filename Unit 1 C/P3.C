//C Programming Unit 1 Program 3

#include<stdio.h>
#include<conio.h>

void main()
{
  int p,r,n,c;
  clrscr();

  printf("\n Enter Price Here : ");
  scanf("%d",&p);

  printf("\n Enter Rate Of Interest Here : ");
  scanf("%d",&r);

  printf("\n Enter Number Of Piece Here : ");
  scanf("%d",&n);

  c=p*r*n;

  printf("\n Total Interest Is : %d",c);

  getch();



}