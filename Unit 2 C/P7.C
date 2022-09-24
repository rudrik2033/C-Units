//C Program Unit 2 Practical 7

#include<stdio.h>
#include<conio.h>

void main()
{
  int n;
  clrscr();
  printf("\n Enter Any Number : ");
  scanf("%d",&n);
  if(n%6==0)
  printf("\n It Is Divisible By 6");
  else
  printf("\n It Is Not Divisible By 6");
  getch();
}