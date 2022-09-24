//C Programing Unit 2 Practical 30

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,r;
	long int x=1;
	clrscr();
	printf("\n Enter A Numnber : ");
	scanf("%d",&r);

	for(i=1;i<=r;i++)
	{
		x=x*i;
	}
	printf("\n Factorial Of %d is : %ld",r,x);
	getch();
}