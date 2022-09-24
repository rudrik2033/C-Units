//C Programing Unit 4 Practical 8

#include<stdio.h>
#include<conio.h>

void main()
{
	 int a[50][50],b[50][50],r,c,r2,c2,i,j,k,sum=0;
	 clrscr();

	 printf("\n Enter The Number Of Row=");
	 scanf("%d",&r);
	 printf("\n Enter The Number Of Column=");
	 scanf("%d",&c);
	 r2=r;
	 c2=c;
	 for(i=1;i<=r;i++)
	 {
		for(j=1;j<=c;j++)
		{
			printf("\n Enter The Value For First Matrix :  ",i,j);
			scanf("%d",&a[i][j]);
		}
	 }

	 for(i=1;i<=r2;i++)
	 {
		for(j=1;j<=c2;j++)
		{
			printf("\n Enter The Value For Second Matrix : ",i,j);
			scanf("%d",&b[i][j]);
		}
	 }

	 for(i=1;i<=r;i++)
	 {
		for(j=1;j<=c2;j++)
		{
			sum=0;
			for(k=1;k<=c;k++)
			{
				sum=sum+a[i][k]*b[k][j];
			}
			printf("%d ",sum);
		 }
		 printf("\n");
	 }

	 /*for(i=0;i<r;i++)
	 {
		for(j=0;j<c;j++)
		{
			printf("%d ",mul[i][j]);
		}
		printf("\n");
	 } */

	 getch();
 }