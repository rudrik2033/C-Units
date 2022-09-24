//C Program Unit 4 Practical 5

#include<stdio.h>
#include<conio.h>

void main()
{
	int num1[50],num2[50],i,n;
	clrscr();
	printf("\n Enter Range : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("\n Enter Value num[%d]: ",i);
		scanf("%d",&num1[i]);
	}
	for(i=0;i<n;i++)
	{
	      printf("\n num[%d]=%d\n",i,num1[i]);
	}
	for(i=0;i<n;i++)
	{
	      num2[i]=num1[i];
	      printf("\n num[%d]=%d\n",i,num2[i]);
	}
	getch();
}