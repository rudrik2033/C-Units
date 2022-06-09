#include<iostream.h>
#include<conio.h>

class myclass
{
	private:
	int x;

	public:

	myclass(int x)
	{
		this->x=x;
	}
	void set(int x)
	{
		this->x=x;
	}
	void printx()
	{
		cout<<"x="<<x<<endl;
	}
};

int mainI()
{
	myclass*myclass=new myclass(500);

	myclass->printx();
	myclass->intx(1000);
	myclass->printx();

	delete myclass;

	getch();
}