//C Program Unit 2 Practical 9

#include<stdio.h>
#include<conio.h>

void main()
{
  int phy,maths,bio,che,eng;
  float pr;
  clrscr();
  printf("\n Enter The Roll No : ");
  scanf("%d\n%d\n%d\n%d\n%d",&phy,&maths,&bio,&che,&eng);
  printf("\n Enter The Five Subject Marks : ");
  scanf("%d\n%d\n%d\n%d\n%d",&phy,&maths,&bio,&che,&eng);
  pr=(phy+maths+bio+che+eng/500);
  if(pr>=90)
  printf("\n Grade A");
  else if(pr>=80)
  printf("\n Grade B");
  else if(pr>=70)
  printf("\n Grade C");
  else if(pr>=50)
  printf("\n Grade D");
  else if(pr>=40)
  printf("\n Grade E");
  else
  printf("\n Grade F");
  getch();
}