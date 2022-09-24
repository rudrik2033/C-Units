//C Programing Unit 5 Practical 1

#include<stdio.h>
#include<conio.h>

typedef struct number
{
	int x,y;
}num;

void add_num(num n)
{
	clrscr();
	printf("\n Your Sum Is : %d",n.x+n.y);
}

int main()
{
	num n1={5,6};
	add_num(n1);
	getch();
}