//C Programing Unit 4 Extra 1

#include<stdio.h>
#include<conio.h>

void main()
{
	int num[5],i;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\n Enter Any Number num[%d] : ",i);
		scanf("%d",&num[i]);
	}

	for(i=0;i<5;i++)
	{
		printf("\n num[%d]=%d",i,num[i]);
	}
	getch();
}