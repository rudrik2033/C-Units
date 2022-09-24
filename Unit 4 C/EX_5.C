//C Programing Unit 4 Extra 5

#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],b[5],sum[5],i;
	clrscr();

	for(i=0;i<5;i++)
	{
		printf("\n Enter Value Of X%d :",i+1);
		scanf("%d",&a[i]);
	}

	for(i=0;i<5;i++)
	{
		printf("\n Enter Value Of Y%d :",i+1);
		scanf("%d",&b[i]);
	}

	for(i=0;i<5;i++);
	{
		sum[i]=a[i]+b[i];
		printf("\n Sum Of X%d And Y%d Is %d",i+1,i+1,sum[i]);
	}
	getch();
}