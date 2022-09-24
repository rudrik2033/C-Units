//C Program Unit 2 Practical 5

#include<stdio.h>
#include<conio.h>

void main()
{
  long int pq;
  float disc,net;
  clrscr();
  printf("\n Enter The Price Quantity");
  scanf("%d",&pq);
  if(pq>=10000)
  {
     (disc=pq*0.15);
  }
  else
  {
     (disc=pq*0.10);
  }
  net=pq-disc;
  printf("\n pq:%d\ndisc%f",pq,disc);
  printf("\n Net Amount : %f",net);
  getch();
}