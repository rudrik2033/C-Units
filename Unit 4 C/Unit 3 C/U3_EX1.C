//C Program Unit 3 Extra Program 1

#include<stdio.h>
#include<conio.h>

char chrlwr(char ch);
void main()
{
	char ch,x;
	clrscr();
	printf("\n Enter Any Uppercase Letter : ");
	scanf("%c",&ch);
	x=chrlwr(ch);
	printf("\n Lower Case Letter Is : %c ",x);
	getch();
}
char chrlwr(char x)
{
	x=x+32;
	return x;
}