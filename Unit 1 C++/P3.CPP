#include<iostream.h>
#include<conio.h>

void main()
{
	int a[10],i,max,sum=0,avg=0;
	clrscr();

	cout<<"Enter 10 values ; "<<endl;

	for(i=0;i<10;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	avg=sum/10;
	max=a[i];

	for(i=0;i<10;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	cout<<"Average of a number is : "<<avg<<endl;
	cout<<"Greatest of ten number is : "<<max<<endl;

	getch();
}