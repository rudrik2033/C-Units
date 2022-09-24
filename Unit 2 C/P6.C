//C Program Unit 2 Program 6

#include<stdio.h>
#include<conio.h>

void main()
{
  int year;
  clrscr();
  printf("\n Enter The Year : ");
  scanf("%d",&year);
  if((year%4)==0)
  printf("\n This Is A Leap Year");
  else
  printf("\n This Is Not A Leap Year");
  getch();
}