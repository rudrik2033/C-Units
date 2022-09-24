//C Programing Unit 3 Practical 6

#include<stdio.h>
#include<conio.h>

int sum(int x);
void main()
{
	int x;
	clrscr();
	printf("\n Enter Number : ");
	scanf("%d",&x);
	sum(x);
	getch();
}
int sum(int x)
{
	int r,sum=0,a;
	a=x;
	while(x>0)
	{
		r=x%10;
		sum=sum+r*r*r;
		x=x/10;
	}

	if(sum==a)
	printf("\n It Is A Armstrong Number ",sum);

	else
	printf("\n It Is Not A Armstrong Number ",sum);
}