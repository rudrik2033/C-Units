//C Programing Unit 3 Practical 1

#include<stdio.h>
#include<conio.h>

int sum(int x,int y);
void main()
{
	int x,y,z;
	clrscr();
	printf("\n Enter Any Numbers : ");
	scanf("%d %d",&x,&y);
	z=sum(x,y);
	printf("\n Sum Is %d : ",z);
	getch();
}
   int sum(int x,int y)
{
	int z;
	z=x+y;
	return(z);
}