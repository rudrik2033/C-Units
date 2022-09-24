//C Programing Unit 2 Practical 27

#include<stdio.h>
#include<conio.h>

void main()
{
	int x,i,m=0,a=0;
	clrscr();
	printf("\n Enter The Number To Check Prime Number ; ");
	scanf("%d",&x);

	m=x/2;
	for(i=2;i<=m;i++)
	{
		if(x%i==0)
		{
			printf("\n %d Is Not A Prime Number ",x);
			a=1;
			break;
		}
	}
	if(a==0)
	printf("\n %d Is A Prime Number",x);
	getch();
}