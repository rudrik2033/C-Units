#include<iostream.h>
#include<conio.h>

class student
{
	private:
	int rollno;
	char name;
	int marks[3];
	float per;
	char result;
	char grade;

	public:
	void getdata()
	{
		cout<<"Enter Rollno:";
		cin>>rollno;
		cout<<"Enter Name:";
		cin>>name;
		cout<<"Enter M1:";
		cin>>marks[0];
		cout<<"Enter M2:";
		cin>>marks[1];
		cout<<"Enter M3:";
		cin>>marks[2];
		cal();

		void dispdata()
		{
			cout<<"Rollno:"<<rollno<<endl;
			cout<<"Name:"<<name<<endl;
			cout<<"M1:"<<marks[0]<<endl;
			cout<<"M2:"<<marks[1]<<endl;
			cout<<"M3:"<<marks[2]<<endl;
			cout<<"Per:"<<per<<endl;
			cout<<"Grade:"<<grade<<endl;
			cout<<"Result:"<<result<<endl;

			inline void cal()
			{
				per=((marks[0]+marks[1]+marks[2])/3);

				if(per>=80)
				{
					result="PASS";
				}
				else
				{
					result="FAIL";
				}
				if(per>=80)
				{
					grade='A';
				}
				else if( per>=60)
				{
					grade='B';
				}
				else if(per>=40)
				{
					grade='c';
				}
				else
				{
					grade='D';
				}
	     }		}
};
int main()
{
	student s;
	s.getdata();
	s.displaydata();
	getch();
}