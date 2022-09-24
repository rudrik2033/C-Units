//C Programing Unit 4 Program 13

#include<stdio.h>
#include<conio.h>

int max(int a,int b);
int min(int a,int b);
int(*funptr),int);
void main()
{
	int x,y,ans1,ans2;
	clrscr();

	printf("\n Enter First Number : ");
	scanf("%d",&x);
	printf("\n Enter Second Number : ");
	scanf("%d",&y);

	funptr=max;
	ans=funptr(x,y);

	printf("\n Max Is : %d",ans1);

	funptr=min;
	ans=funptr(x,y);
	printf("\n Min Is : %d",ans2);
	getch();
}

int max(int a,int b)
{
	if(a>b)
	return(b);
}
int min(int a,int b)
{
	if(a<b)
	return(a);
}
