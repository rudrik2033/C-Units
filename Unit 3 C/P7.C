//C Programing Unit 3 Practical 7

#include<stdio.h>
#include<conio.h>

int checkprime(int n);
void main()
{
	int n;
	clrscr();
	printf("\n Enter Any Number : ");
	scanf("%d",&n);
	checkprime(n);
	getch();
}
int checkprime(int n)
{
	int i,flag=0;
	for(i=2;i<=n/2;i++)
	{
		if(n%1==0)
		flag=1;
		break;
	}

	if(n==1)
	printf("\n 1 Is Neither Prime Nor Composite");

	else
	{
		if(flag==0)
		printf("\n It Is A Prime Number ",n);

		else
		printf("\n It Is Not A Prime Number",n);
	}
	getch();
}