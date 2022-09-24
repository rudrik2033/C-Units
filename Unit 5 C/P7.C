//C Programing Unit 5 Practical 7

#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *fp1,*fp2;
    int ch;

    clrscr();

    if((fp1=fopen("test.txt","r"))==NULL)
    {
	printf("\nError In  File 1");
	exit(1);
    }
    if((fp2=fopen("new.txt","w"))==NULL)
    {
	printf("\nError In  File 2");
	exit(1);
    }

    while((ch=fgetc(fp1))!=EOF)
    {
	fputc(ch,fp2);
    }

    fclose(fp1);
    fclose(fp2);

    getch();
}