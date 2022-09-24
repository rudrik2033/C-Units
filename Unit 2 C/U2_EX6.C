//C Program Unit 2 Ex Practical 6

#include<stdio.h>
#include<conio.h>

void main()
{
  char ch;
  clrscr();
  printf("\n Enter Any Character : ");
  scanf("%c",&ch);
  if(ch>=65 && ch<=90)
  printf("\n %c",ch+32);
  else if(ch>=97 && ch<=122)
  printf("\n %c",ch-32);
  else
  printf("\n Invalid Character");
  getch();
}