//C Programing Unit 5 Practical 2

#include<stdio.h>
#include<conio.h>

struct num_1
{
	int x,y;
};

union num_2
{
	int x;
	float y;
};

int main()
{
	struct num_1 n1={5,9};

	union num_2 n2;
	n2.x=5;
	n2.y=9;

	clrscr();

	printf("\n Value Of n1 is : %d and %d",n1.x,n1.y);
	printf("\n Value Of n2 Is : %f and %f",n2.x,n2.y);

	printf("\n Size Of Struct Is : %d",sizeof(n1));
	printf("\n Size Of Union Is : %d",sizeof(n2));

	getch();
}