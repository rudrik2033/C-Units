//C Programing Unit 5 Practical 9

#include<stdio.h>
#include<conio.h>

int main()
{
    FILE  *fp1,*fp2;
    char ch[50];

    clrscr();

    if((fp1=fopen("Greencity.txt","r"))==NULL)
    {
	printf("\nError In  Greencity.txt file");
	exit(1);
    }
    if((fp2=fopen("Cleancity.txt","w"))==NULL)
    {
	printf("\nError In  Cleancity.txt file");
	exit(1);
    }

    while(fgets(ch,50,fp1)!=NULL)
    {
	strrev(ch);
	fputs(ch,fp2);
    }

    fclose(fp1);
    fclose(fp2);
    getch();
}


