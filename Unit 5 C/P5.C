//C Programing Unit 5 Practical 5

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
	printf("\nError opening file");
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

    fp = fopen("stu.txt","rb");
    if(fp == NULL)
    {
	printf("\nError opening file");
    }
    while(fscanf(fp,"%s %d %d\n",name,&roll_no,&marks)!=EOF)
    {
	printf("\nStudent Name: %s",name);
	printf("\nRoll No: %d",roll_no);
	printf("\nYour Marks: %d",marks);
    }
    fclose(fp);

    getch();
}


