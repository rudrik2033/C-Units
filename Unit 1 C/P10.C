//C Program Unit 1 Practical 10

#include<stdio.h>
#include<conio.h>

void main()
{
  float frnh,celc;
  clrscr();
  printf("\n Enter The Temprature : ");
  scanf("%f",&frnh);
  celc=(frnh-32)*5/9;
  printf("\n The Temprature IS %f Degree",celc);
  getch();
}