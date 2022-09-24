//C Programing Unit 3 Practical 8

#include<stdio.h>
#include<conio.h>

int fibonacci(int r);
void main()
{
	int r;
	clrscr();
	printf("\n Enter Your Range : ");
	scanf("%d",&r);
	fibonacci(r);
	getch();
}
int fibonacci(int r)
{
	int i,a=0,b=1,c;
	for(i=1;i<=r;i++)
	{
		printf(" %d ",a);
		c=a+b;
		a=b;
		b=c;
	 }
}