//C Programing Unit 4 Practical 4

#include<stdio.h>
#include<conio.h>

void main()
{
	int num[50],i,n,positive=0,negative=0;
	int even=0,odd=0,zero=0;
	clrscr();
	printf("\n Enter Your Range : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter Any Number num[%d] : ",i);
		scanf("%d",&num[i]);
	}

	for(i=0;i<n;i++)
	{
		if(num[i]==0)
		{
			zero++;
		}
		else if(num[i]>0)
		{
			positive++;
		}
		else
		{
			negative++;
		}

		if(num[i]==0)
		{
		}
		else if(num[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
      }
      printf("\n Positive : %d\n",positive);
      printf("\n Negative : %d\n",negative);
      printf("\n Even : %d",even);
      printf("\n Odd : %d",odd);

      getch();
}