//C Programing Unit 4 Practical 10

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str1[10],str2[10];
	clrscr();

	printf("\n Enter Your String : ");
	gets(str1);

	strcpy(str2,str1);
	strrev(str2);

	if(strcmp(str1,str2)==0)
	{
		printf("\n Your String Is Palidrome");
	}
	else
	{
		printf("\n Your String Is Not Palidrome");
	}
	getch();
}