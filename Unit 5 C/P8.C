//C Programing Unit 5 Practical 8

#include<stdio.h>
#include<conio.h>

int main()
{
    FILE  *fp;
    int n,i;
    int roll_no;
    int marks;
    char name[10];

    clrscr();

    fp = fopen("stu.txt","ab");
    if(fp == NULL)
    {
	printf("\nError");
    }
    printf("\nEnter how many records add: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
	printf("\nEnter Details of Student %d",i+1);

	fflush(stdin);

	printf("\nEnter Your Name:");
	gets(name);

	printf("\nEnter Roll No:");
	scanf("%d",&roll_no);

	printf("\nEnter Your Marks:");
	scanf("%d",&marks);

	fprintf(fp,"%s %d %d\n",name,roll_no,marks);
    }
    fclose(fp);

    getch();
}


