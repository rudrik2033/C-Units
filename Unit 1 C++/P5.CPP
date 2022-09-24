#include<iostream.h>
#include<conio.h>

int main()
{
	int numbers[10],i,lowest=0,sum=0;
	clrscr();

	cout<<"Enter 10 Numbers "<<endl;

	for(i=0;i<10;i++)
	{
		cout<<"Enter a number : ";
		cin>>numbers[10];

		sum +=numbers[i];
		lowest = numbers[0];

		if(numbers[i]<lowest)
		{
			lowest=numbers[i];
		}
	}
	cout<<"Average is : "<<sum/10<<endl;
	cout<<"Lowest is : "<<lowest<<endl;

	getch();
}