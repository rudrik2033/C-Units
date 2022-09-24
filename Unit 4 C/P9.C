//C Programing Unit 4 Practical 9

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char a[10],length;
	clrscr();

	printf("\n Enter Your String : ");
	gets(a);

	length=strlen(a);

	printf("\n Length Of String Is = %d",length);
	getch();
}