//C Programing Unit 2 Practical 23

#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,sum=0;
	clrscr();
	printf("\n Enter A Number : ");
	scanf("%d",&x);
	while(x>0)
	{
		y=x%10;
		sum=sum+y;
		x=x/10;
	}
	printf("\n Sum Of Digits Is = %d",sum);
	getch();
}