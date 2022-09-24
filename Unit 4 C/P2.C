//C Programing Unit 4 Practical 2

#include<stdio.h>
#include<conio.h>

void main()
{
	int num[50],i,n,sum=0;
	float avg;
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
		sum=sum+num[i];
		printf("\n Total Is %d",sum);
	}
	avg=sum/n;
	printf("\n Average Is %f",avg);

	getch();
}