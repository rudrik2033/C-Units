#include<iostream.h>
#include<conio.h>

int main()
{
	int account_number[10];
	double balance[10];
	char name[10];
	char type[10];

	for(int i=0;i<10;i++)
	{
		cout<<"Enter Name : ";
		cin>>name[i];

		cout<<"Enter Account Number : ";
		cin>>account_number[i];

		cout<<"Enter intial balance : ";
		cin>>balance[i];

		cout<<"Enter type of account : ";
		cin>>type[i];
	}

	for(int i=0;i<10;i++)
	{
		if(type[i]=="savings")
		{
			balance[i]=balance[i]+balance[i]*0.05;
		}

		else if(type[i]=="current")
		{
			balance[i]=balance[i]+balance[i]*0.1;
		}
	}

	for(int i=0;i<10;i++)
	{
		cout<<"Name : "<<name<<endl;
		cout<<"Account Number : "<<account_number<<endl;
		cout<<"Balance : "<<balance[i]<<endl;
	}

	getch();
}