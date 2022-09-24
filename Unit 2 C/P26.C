//C Program Unit 2 Practical 26

#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z,sum=0;
	clrscr();
	printf("\n Enter Any Number : ");
	scanf("%d",&x);
	z=x;
	while(x>0)
	{
		y=x%10;
		sum=sum+(y*y*y);
		x=x/10;
	}

	if(z==sum)
	{
		printf("\n %d Is An Armstrong Number",z);
	}

	else
	{
		printf("\n %d Is Not An Armstrong Number",z);
	}
	  getch();
}