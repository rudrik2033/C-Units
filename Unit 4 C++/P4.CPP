#include<iostream.h>
#include<conio.h>

class A
{
	public:
	void A1()
	{
		cout<<"A1"<<endl;
	};

	class B:public A
	{
		public:
		void B1()
		{
			cout<<"B1"<<endl;
		}
	};

	class c:public B
	{
		public:
		void C1()
		{
			cout<<"C1"<<endl;
		}
	};
int mainI()
{
	C c;
	c.A1();
	c.B1();
	c.C1();

	getch();
}