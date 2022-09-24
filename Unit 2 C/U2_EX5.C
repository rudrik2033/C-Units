//C Program Unit 2 Practical

#include<stdio.h>
#include<conio.h>

void main()
{
    char ch;
    clrscr();
    printf("\n Enter Alphabet : ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    printf("\n This Is Capital Alphabet : ");
    else if(ch>='a' && ch<='z')
    printf("\n This Is Small Alphabet : ");
    else
   {
    printf("\n This Is Not a Alphabet : ");
   }
    getch();
}