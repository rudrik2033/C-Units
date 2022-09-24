//C Program Unit 2 Practical

#include<stdio.h>
#include<conio.h>

void main()
{
     char ch;
     clrscr();
     printf("\n Enter Alphabet : ");
     scanf("%c",&ch);
     if(ch=='A'|| ch=='E'||  ch=='I'||  ch=='O'|| ch=='U')
     printf("\n %c Is a Vowel ",ch);
     else
     printf("\n %c Is Not a vowel ",ch);
     getch();
}