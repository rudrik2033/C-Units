//C Programing Unit 4 Practical 6

#include<stdio.h>
#include<conio.h>
#define R 2
#define C 2

void main()
{
	int x[R][C],y[R][C],i,j;
	clrscr();
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			printf("\nENTER ELEMENT FOR [%d][%d] : ",i,j);
			scanf("%d",&x[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			printf("\nENTER ELEMENT FOR [%d][%d] : ",i,j);
			scanf("%d",&y[i][j]);
		}
	}
	printf("\nSUM =");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			//sum[i][j]=x[i][j]+y[i][j];
			printf("\t%d",x[i][j]+y[i][j]);
		}
		printf("\n");
	}
       //	printf("\nSUBSTRACTION =\n");
	//for(i=0;i<R;i++)
	{
	       //	for(j=0;j<C;j++)
		{
			//sum[i][j]=x[i][j]+y[i][j];
		       //	printf("\t%d",x[i][j]-y[i][j]);
		}
	       //	printf("\n");
	}
	getch();
}