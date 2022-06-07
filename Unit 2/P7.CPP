#include<iostream.h>
#include<conio.h>

class employee
{
	private:
	int empno,basic,da,hra;
	float salary;
	char ename[10];

	float calculate()
	{
		return(basic+hra+da);
	}

	public:

	void getinfo()
	{
		cout<<"Enter empno : ";
		cin>>empno;

		cout<<"Enter Ename : ";
		cin>>ename;

		cout<<"Basic : ";
		cin>>basic;

		cout<<"Enter hra : ";
		cin>>hra;

		cout<<"Enter da : ";
		cin>>da;

		salary=calculate();
	}

	void putinfo()
	{
		cout<<"Empno : "<<empno<<endl;
		cout<<"Ename : "<<ename<<endl;
		cout<<"Basic : "<<basic<<endl;
		cout<<"Hra : "<<hra<<endl;
		cout<<"Da : "<<da<<endl;
		cout<<"Salary : "<<salary<<endl;
	}
};

void main()
{
	employee e;
	clrscr();

	e.getinfo();
	e.putinfo();

	getch();
}