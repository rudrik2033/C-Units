//C Program Unit 2 Ec Practical 7

#include<stdio.h>
#include<conio.h>

void main()
{
  char ch;
  clrscr();
  printf("\n Enter Any Character : ");
  scanf("%c",&ch);
  if(ch>=65 && ch<=90)
  printf("\n %c Is a Character",ch);
  else if(ch>=97 && ch<=122)
  printf("\n %c Is a Character",ch);
  else if(ch>=48 && ch<=57)
  printf("\n %c Is a Number",ch);
  else
  printf("\n %c Is A Special Character",ch);
  getch();
}