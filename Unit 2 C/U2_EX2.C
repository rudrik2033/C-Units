// C Program Unit 2 Practical 1

#include<stdio.h>
#include<conio.h>

void main()
{
   char gender;
   clrscr();

   printf("\n Enter Gender : ");
   scanf("%c",&gender);
   if(gender=='M')
   printf("\n The Gender Is Male ");
   else if(gender=='F')
   printf("\n The Gender Is Female");
   getch();


}