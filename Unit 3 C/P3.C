//C Programing Unit 3 Practical 3

#include<stdio.h>
#include<conio.h>

int rev(int);
void main()
{
	int num,res;
	clrscr();
	printf("\n Enter Any Number : ");
	scanf("%d",&num);
	res=rev(num);
	printf("\n Reverse Of %d is %d",num,res);
	getch();
}
int rev(int n)
{
	int r=0;
	for(;n>=1;n=n/10)
	r=r*10+n%10;
	return r;
}