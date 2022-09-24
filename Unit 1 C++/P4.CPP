#include<iostream.h>
#include<conio.h>

void main()
{
	int arr[10],i,s,j,p;
	clrscr();

	cout<<"Enter size of an array ; "<<endl;
	cin>>s;

	cout<<"Enter array element : "<<endl;

	for(i=0;i<s;i++)
	{
		cin>>arr[i];
	}

	cout<<"All Prime list is : "<<endl;

	for(i=0;i<s;i++)
	{
		j=1;
		p=1;
	}

	while(j<arr[i])
	{
		if(arr[i]%j==0)
		{
			p=0;
			break;
		}
		j++;
		if(p=1)
		{
			cout<<arr[i];
		}
	}
	getch();
}