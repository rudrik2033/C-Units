//C Programing Unit 2 Practical 29

#include<stdio.h>
#include<conio.h>

void main()
{
	int r,i,rng,sum,temp;
	clrscr();
	printf("\n Enter Your Range : ");
	scanf("5d",&rng);

	printf("\n Armstrong Numbers In Range Between 0 To %d Are : \n",rng);

	for(i=0;i<=rng;i++)
	{
		temp=i;
		sum=0;
		while(temp|=0)
		{
			r=temp%10;
			temp=temp/10;
			sum=sum+(r*r*r);
		}

	       if(sum==i)
	       printf(" %d ",i);
	 }
	 getch();
}