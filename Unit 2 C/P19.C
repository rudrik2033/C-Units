//C Program Unit 2 Practical 19

#include<stdio.h>
#include<conio.h>

void main()
{
  int a=0,b=1,c,i,n;
  clrscr();
  printf("Enter Fibonacci Term : ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
     printf("%d ",a);
     c=a+b;
     a=b;
     b=c;
  }
  getch();
}