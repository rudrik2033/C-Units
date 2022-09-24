#include<iostream.h>
#include<iomanip.h>
#include<conio.h>

void main()
{
	int basic=10000;
	int da=basic*51/100;
	int hra=basic*15/100;

	clrscr();

	cout<<"Basic = "<<setw(10)<<basic<<endl;

	cout<<"Da = "<<setw(20)<<da<<endl;

	cout<<"Hra = "<<setw(10)<<hra<<endl;

	getch();
}