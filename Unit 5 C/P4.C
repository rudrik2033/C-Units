//C Programing Unit 5 Practical 4

#include<stdio.h>
#include<conio.h>

typedef struct date_of_birth
{
	int day,month,year;
}date;

struct student
{
	int roll_no;
	char name[20];
	date d1;
}std;

int main()
{
	clrscr();

	printf("\n Enter Your Roll Number : ");
	scanf("%d",&std.roll_no);

	printf("\n Enter Your Name : ");
	scanf("%s",&std.name);

	printf("\n Enter Your Date Of Birth : ");
	scanf("%d %d %d",&std.d1.day,&std.d1.month,&std.d1.year);

	printf("\n Your Roll Number Is : %d",std.roll_no);
	printf("\n Your Name Is : %s",std.name);
	printf("\n Your Birth Date Is : %d %d %d",std.d1.day,std.d1.month,std.d1.year);

	getch();
}