//C Programing Unit 4 Extra 4

#include<stdio.h>
#include<conio.h>

void main()
{
	int num[50],pos[50],i,n;
	clrscr();

	printf("\n Enter The Value Of N : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("\n Enter The Value : ");
		scanf("%d",num[i]);
	}

	for(i=0;i<n;i++)
	{
		if(num[i]>0)
		{
			pos[i]=num[i];
			printf("\n Positive Values Are %d",i,pos[i]);
		}
	}
	getch();
}