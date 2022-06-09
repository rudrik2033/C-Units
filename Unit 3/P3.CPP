#include<iostream.h>
#include<conio.h>

class str{
	public:
	char name;
	int getstr()
	{
		cout<<"Enter A String : ";
		cin>>name;
		cout<<" "<<endl;
	}
	int display()
	{
		cout<<"String : "<<name<<endl;
	}
	int operator==(str s1)
	{
		return(name==s1.name);
	}
	int operator<=(str s1)
	{
		return(name<=s1.name);
	}
	int opertor +(str s1)
	{
		name=s1.name+s1.name;
	}
	char opertor[](int i)
	{
		return name[i];
	}
};
int main()
{
	str s1,s2;
	int choice;


	do
	{
		cout<<"1.Compare Two Strings"<<endl;
		cout<<"2.Check Whether First String Is Smaller than the second"<<endl;
		cout<<"3.Copy the string to another "<<endl;
		cout<<"4.Extract A Character from the string"<<endl;
		cout<<"5.Reverse the string"<<endl;
		cout<<"6.Concate Two String"<<endl;
		cout<<"7.Exit"<<endl;

		cout<<"Enter Your Choice: ";
		cin>>choice;

		switch(choice)
		{
			case 1:
			s1.getstr();
			s2.getstr();

			if(s1.name==s2.name)
			{
				cout<<"Strings Are Equal"<<endl;
			}
			else
			{
				cout<<"Strings are not equal"<<endl;
			}
			break;

			case 2:
			s1.getstr();
			s2.getstr();

			if(s1.name<=s2.name)
			{
				cout<<"First string is smaller than the second"<<endl;
			}
			else
			{
				cout<<"First String is not smaller than second"<<endl;
			}
			break;

			case 3:
			s1.getstr();
			s2.name=s1.name;
			s2.display();
			break;

			case 4:
			s1.getstr();
			cout<<"Enter The Index : ";
			int i;
			cin>>i;
			cout<<"Character as index as index "<<i<<endl;
			break;

			case 5:
			s1.getstr();
			for(int i=s1.name_length()-1;i>=0;i--)
			{
				cout<<s1.name[i];
			}
			cout<<endl;
			break;

			case 6:
			s1.getstr();
			s1.getstr();
			s1.name=s1.name+s2.name;
			s1.display();
			break;

			case 7:
			break;

			default:
			cout<<:"Invalid choice"<<endl;
			break;
		}
	}while(choice!=7);
	getch();
}