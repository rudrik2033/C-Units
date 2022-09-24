//C Programing Unit 4 Practical 3

#include<stdio.h>
#include<conio.h>

void main()
{
	int num[50],min,max,n,i;
	clrscr();
	printf("\n Enter Your Range : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("\n Enter Any Number num[%d]: ",i);
		scanf("%d",&num[i]);
	}

	min=num[0];
	max=num[0];

	for(i=0;i<n;i++)
	{
		if(num[i]>max)
			max=num[i];
	}

	for(i=0;i<n;i++)
	{
		if(num[i]<min)
			min=num[i];
	}
	printf("\n Maximum :%d",max);
	printf("\n Minimum :%d",min);
	getch();
}
