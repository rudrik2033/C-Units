//C  Programing Unit 3 Practical 9

#include<stdio.h>
#include<conio.h>
#define AREA(l,b)(l*b)

void main()
{
	int l,b,area;
	clrscr();
	printf("\n Enter Values : ");
	scanf("%d %d",&l,&b);
	area=AREA(l,b);
	printf("\n Area Is %d ",area);
	getch();
}