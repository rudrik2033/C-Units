#include<iostream.h>
#include<conio.h>

class employee
{
	public:
	int employee_number;
	char name;
	char address;
	int dependents;

	public:

	void insert_employee()
	{
		cout<<"Enter Employee Number : ";
		cin>>employee_number;

		cout<<"Enter Name : ";
		cin>>name;

		cout<<"Enter Address : ";
		cin>>address;

		cout<<"Enter Number Of Dependets : ";
		cin>>dependents;
	}

	void display_employee()
	{
		cout<<"Employee number : "<<employee_number<<endl;
		cout<<"Name : "<<name<<endl;
		cout<<"Address : "<<address<<endl;
		cout<<"Number Of Dependets : "<<dependents<<endl;
	}
};

void main()
{
	employee emp[2];
	clrscr();

	for(int i=0;i<2;i++)
	{
		emp[i].insert_employee();
	}

	for(i=0;i<2;i++)
	{
		emp[i].display_employee();
	}

	getch();
}