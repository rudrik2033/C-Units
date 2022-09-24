//C Program Unit 2 Practical 24

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,rev=0;
	clrscr();
	printf("\n Enter A Number : ");
	scanf("%d",&i);
	while(i>0)
	{
		rev=rev*10+i%10;
		i=i/10;
	}
	printf("\n Reverse Of Number Is = %d",rev);
	getch();
}