//C Program Unit 2 Practical 2

#include<stdio.h>
#include<conio.h>

int fact(int);
void main()
{
	int n,factorial;
	clrscr();
	printf("\n Enter Any Number : ");
	scanf("%d",&n);
	factorial=fact(n);
	printf("\n Factorial of %d=%d \n",n,factorial);
	getch();
}
int fact(int r)
{
	int i,f=1;
	for(i=1;i<=r;i++)
	{
		f=f*i;
	}
	return f;
}