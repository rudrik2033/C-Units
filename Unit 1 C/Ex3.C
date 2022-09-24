//C Program Umit 1 Extra Practical 3

#include<stdio.h>
#include<conio.h>

void main()
{
  int chem,bio,phy,maths,eng,tot;
  float pr;
  clrscr();
  printf("\n Enter Chemistry Marks : ");
  scanf("%d",&chem);
  printf("\n Enter Biology Marks : ");
  scanf("%d",&bio);
  printf("\n Enter Physics Marks : ");
  scanf("%d",&phy);
  printf("\n Enter Maths Marks : ");
  scanf("%d",&maths);
  printf("\n Enter English Marks : ");
  scanf("%d",&eng);
  tot=chem+bio+phy+maths+eng;
  pr=tot/5;
  printf("\n You Got %d Marks",tot);
  printf("\n You Got %f Persentage",pr);
  getch();
}
