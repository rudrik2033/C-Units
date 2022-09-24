//C Program Unit 2 Ex Practical 3

#include<stdio.h>
#include<conio.h>

void main()
{
  char ch;
  clrscr();
  printf("\n Enter Any Character : ");
  scanf("%c",&ch);
  if(ch>=65 && ch<=90)
  printf("\n Input Character Is Capital");
  else
  printf("\n Input Character Is Small");
  getch();
}