//C Program Unit 2 Practical 22

#include<stdio.h>
#include<conio.h>
void main()
{
	long long int i,base,expo,sum=1;
	clrscr();
	printf("ENTER BASE VALUE : ");
	scanf("%lld",&base);
	printf("ENTER EXPONENT VALUE : ");
	scanf("%lld",&expo);
	for(i=expo;i>=1;i--)
		sum*=base;
	printf("POWER : %lld",sum);


	getch();


}