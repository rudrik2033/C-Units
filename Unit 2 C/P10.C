//C Program Unit 2 Practical 10

#include<stdio.h>
#include<conio.h>

void main()
{
  int num;
  clrscr();
  printf("\n Enter The Number : ");
  scanf("%d",&num);
  if(num==1)
  printf("\n Monday");
  else if(num==2)
  printf("\n Tuesday");
  else if(num==3)
  printf("\n Wednesday");
  else if(num==4)
  printf("\n Thursday");
  else if(num==5)
  printf("\n Friday");
  else if(num==6)
  printf("\n Saturday");
  else if(num==7)
  printf("\n Sunday");
  else
  printf("ERROR");
  getch();
}