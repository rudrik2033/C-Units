//C Programing Unit 4 Practical 12

#include<stdio.h>
#include<conio.h>
#define PI 3.14

void A(int r,float *a);
void main()
{
	int r;
	float area;
	clrscr();
	printf("\n Enter Radious Of Circle : ");
	scanf("%d",&r);

	A(r,&area);
	printf("\n Area Of Circle Is : %f",area);
	getch();
}

void A(int r,float *a)
{
	*a=PI * r * r ;
}