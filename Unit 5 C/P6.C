//C Programing Unit 5 Practical 6

#include<stdio.h>
#include<conio.h>

int main()
{
    FILE  *fp;
    int No_char=0,No_spaces=0,No_tab=0,No_line=0;
    char ch;

    clrscr();

    fp = fopen("stu.txt","rb");
    if(fp == NULL)
    {
	printf("\nError");
    }
    while(fp)
    {
	ch = fgetc(fp);
	if(ch==EOF)
	    break;
	else
	    No_char++;
	if(ch==' ')
	    No_spaces++;
	if(ch=='\t')
	    No_tab++;
	if(ch=='\n')
	    No_line++;
    }

    printf("\n%d Charactur in File",No_char);
    printf("\n%d Spaces in File",No_spaces);
    printf("\n%d Tab in File",No_tab);
    printf("\n%d New line in File",No_line);

    fclose(fp);
    getch();
}


