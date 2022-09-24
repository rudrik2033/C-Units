//C Programing Unit 5 Practical 3

#include<stdio.h>
#include<conio.h>

typedef struct dates
{
	int day,month,year;
}date;

void age_calculator(date a,date b)
{
	if((a.day==b.day) && (a.month==b.month) && (a.year==b.year))
	{
		printf("\n Your Dates Are Equal");
	}

	else
	{
		printf("\n Your Dates Are Not Equal");
	}
}

int main()
{
	date d1,d2;
	clrscr();

	printf("\n Enter Your Birth Date : ");
	scanf("%d %d %d",&d1.day,&d1.month,&d1.year);

	printf("\n Enter Today Date : ");
	scanf("%d %d %d",&d2.day,&d2.month,&d2.year);

	age_calculator(d1,d2);

	getch();
}