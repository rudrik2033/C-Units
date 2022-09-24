//C Programing Unit 4 Program 11

#include<stdio.h>
#include<conio.h>

void swap(int *a,int *b);
void main()
{
	int x,y;
	clrscr();
	printf("\n Enter First Number : ");
	scanf("%d",&x);
	printf("\n Enter Second Number : ");
	scanf("%d",&y);

	swap(&x,&y);
	printf("\n Value Of X Is : ",x);
	printf("\n Value Of Y Is : ",y);
	getch();
}

void swap(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}