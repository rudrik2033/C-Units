//C Program Unit 2 Extra Program 9

#include<stdio.h>
#include<conio.h>

void main()
{
	int n1,divison,rem;
	clrscr();
	printf("\n Enter Number : ");
	scanf("%d",&n1);
	printf("\n Enter The Divisor : ");
	scanf("%d",&divison);
	while(n1>=divison)
	{
		n1=n1-divison;
	}
	rem=n1;
	printf("\n The Reminder Is %d",rem);
	getch();
}