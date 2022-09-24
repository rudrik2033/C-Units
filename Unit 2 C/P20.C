//C Program Unit 2 Practical 20

#include<stdio.h>
#include<conio.h>

void main()
{
  int n,x=0,y=0,z=0;
  clrscr();
  for(n=1;n<=10;n++)
  {
    printf("%d\n",n);
    x=x+n;
    y=y*(n*n);
    z=z+(n*n*n);
    printf("%d\n",n+n);
    printf("%d\n",n*n*n);
  }
   getch();
}