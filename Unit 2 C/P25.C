//C Program Unit 2 Practical 25

#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,rev=0;
	clrscr();
	printf("Enter Any Number : ");
	scanf("%d",&x);
	y=x;

	while(x>0)
	{
		rev=rev*10+x%10;
		x=x/10;
	}

	if(y==rev)
	{
		printf("\n %d Is A Palidrome Number",y);
	}
	else
	{
		printf("\n %d Is Not A Palidrome Number",y);
	}
	getch();
}