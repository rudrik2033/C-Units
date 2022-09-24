//C Programing Unit 3 Practical 4

#include<stdio.h>
#include<conio.h>

int sum(int x);
void main()
{
	int x,y;
	clrscr();
	printf("\n Enter Any Number : ");
	scanf("%d",&x);
	y=sum(x);
	printf("\n Sum Of Digits Is %d",y);
	getch();
}
int sum(int x)
{
	int sum=0,u;
	while(x>0)
	{
		u=x%10;
		sum=sum+u;
		x=x/10;
	}
	return(sum);
}