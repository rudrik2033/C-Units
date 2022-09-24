//C Programing Unit 4 Extra 3

#include<stdio.h>
#include<conio.h>

void main()
{
	int marks[5],i,tot=0,pr,flag=0;
	char r;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\n Enter Marks Of Subjects 401%d : ",i);
		scanf("%d",&marks[i]);

		if(marks[i]>100)
		{
			printf("\n Enter Valid Marks");
			break;
		}
		if(marks[i]<40)
		{
			flag=1;
		}
	}

	for(i=0;i<5;i++)
	{
		tot=tot+marks[i];
		pr=tot/5;
		printf("\n Marks Of Subject 401%d : %d",i,marks[i]);
	}
	printf("\n\n Total Marks :%d",tot);
	printf("\n Percentage :%d",pr);
	if(flag==0)
	{
		printf("\n Result :Pass");
	}
	else
	{
		printf("\n Result :Fail");
	}
	getch();
}