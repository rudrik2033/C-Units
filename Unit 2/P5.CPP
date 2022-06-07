#include<iostream.h>
#include<conio.h>

void main()
{
	int marks[5],i,average=0,highest=0,count=0,lowest=0,sum=0;
	clrscr();

	cout<<"Enter 5 marks "<<endl;

	for(i=0;i<5;i++)
	{
		cout<<"Enter A mark : ";
		cin>>marks[i];
	}
	 for(i=0;i<5;i++)
	 {
		sum+=marks[i];

		if(marks[i]>highest)
		{
			highest=marks[i];
		}

		lowest=marks[i];

		if(marks[i]<lowest)
		{
			lowest=marks[i];
		}

		average=sum/5;

		for(i=0;i<5;i++)
		{
			if(marks[i]<average)
			{
				count++;
			}
		}
	 }

	cout<<"Average= "<<average<<endl;
	cout<<"Highest= "<<highest<<endl;
	cout<<"Lowest= "<<lowest<<endl;
	cout<<"count= "<<count<<endl;

	getch();
}