//C Programing Unit 4 Practical 15

#include<stdio.h>
#include<conio.h>

int chkprime(int x);
void main()
{
	int n,y,*p,i,sum=0;
	clrscr();

	printf("\n How Many Values Do You Want For : ");
	scanf("%d",&n);

	p=(int*)malloc(n*sizeof(int));

	for(i=0;i<n;i++)
	{
		printf("\n Enter Value In Array : ");
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
	{
		y=chkprime(*(p+i));

		if(y==0)
		sum=sum+ *(p+i);
	}

	printf("\n Sum Of All Prime Number : %d",sum);
	getch();
}
int chkprime(int x)
{
	int i,flag=0;
	for(i=0;i<=2;i++);
	{
		if(x%i==0)
		{
			flag=1;
			break;
		}
	}
	return(flag);
}