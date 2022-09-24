//C Programing Unit 3 Practical 10

#include<stdio.h>
#include<conio.h>

#define PI 3.14

void main()
{
		float r,a;
		clrscr();

		printf("\n Enter Radius : ");
		scanf("%f",&r);

		#ifdef PI

			a=PI*r*r;
		#else

			printf("\n Macro PI Is Not Defined.");
		#endif

		printf("\n Area Is : %f",a);
		getch();
}
