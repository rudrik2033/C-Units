//C Program Unit 2 Extra Practical 10

#include<stdio.h>
#include<conio.h>

void main()
{
	int r,i=1;
	char f=65;
	clrscr();
	printf("\n Enter The Number : ");
	scanf("%d",&r);
	for(i=1;r>=i;i++)
	{
		printf(" %d %c ",i,f);
		f++;
	}
	getch();
}