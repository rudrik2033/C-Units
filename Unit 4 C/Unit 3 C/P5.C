//C Programing Unit 3 Practical 5

#include<stdio.h>
#include<conio.h>

int checkpalidrome(int x);
void main()
{
	int x,y;
	clrscr();
	printf("\n Enter Any Number : ");
	scanf("%d",&x);
	checkpalidrome(x);
	getch();
}
int checkpalidrome(int x)
{
	int r,rev=0;
	r=x;
	while(x>0)
	{
		rev=rev*10+x%10;
		x=x/10;
	}

	if(r==rev)
	printf("\n It Is A Palidrome Number ");

	else
	printf("\n It Is Not A Palidrome Number ");
}