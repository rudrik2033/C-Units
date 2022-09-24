//C Program Unit 2 Practical 8

#include<stdio.h>
#include<conio.h>

void main()
{
  int a,b,c;
  clrscr();
  printf("\n Enter The Three No : ");
  scanf("%d\n%d\n%d",&a,&b,&c);
  if(a>b)
  {
     if(a>c)
     printf("\n %d Is a Largest",a);
     else
     printf("\n %d Is a Largest",b);
  }
  else
  {
      if(b>c)
      printf("\n %d Is a Largest",b);
      else
      printf("\n %d Is a Largest",c);
  }
  getch();
}