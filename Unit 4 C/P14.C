//C Programing Unit 4 Practical 14

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,sum=0;
	int *arr;
	clrscr();

	printf("\n Enter The Number Of Elements : ");
	scanf("%d",&n);

	arr=(int*)malloc(n*sizeof(int));

	for(i=0;i<n;i++)
	{
		printf("\n Enter Element %d : ",(i+1));
		scanf("%d",arr+i);
		sum=sum+*(arr+i);
	}
	printf("\n Sum Is : %d",sum);
	printf("\n Average Is : %d",sum/n);
	getch();
}