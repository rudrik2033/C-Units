//C Programing Unit 2 Practical 28

#include<stdio.h>
#include<conio.h>

void main()
{
	int r,i,j,x;
	clrscr();
	printf("\n Enter Your Range : ");
	scanf("%d",&r);

	printf("\n Prime Number Between 0 And %d Are : \n",r);

	for(i=1;i<=r;i++)
	{
		x=0;
		for(j=1;j<=r;j++)
		{
			if(i%j==0)
			x++;
		}

		if(x==2)
		printf(" %d ",i);
	}
	getch();
}