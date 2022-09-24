//C Programing Unit 4 Extra 2

#include<stdio.h>
#include<conio.h>

void main()
{
	int num[50],i,n;
	clrscr();
	printf("\n Enter Your Range : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter Any Number num[%d] : ",i);
		scanf("%d",&num[i]);
	}

	for(i=0;i<n;i++)
	{
		printf("\n num[%d]=%d",i,num[i]*num[i]);
	}
	getch();
}