//C Programing Unit 5 Practical 10

#include<stdio.h>
#include<conio.h>

int main()
{
	FILE *fp1,*fp2,*fp3;
	int ch;

	clrscr();

	if((fp1 = fopen("Data.txt","r"))==NULL)
	{
		printf("\n Error In Data.txt File");
		exit(1);
	}

	if((fp2 = fopen("Even.txt","w"))==NULL)
	{
		printf("\n Error In Even.txt File");
		exit(1);
	}

	if((fp3 = fopen("Odd.txt","w"))==NULL)
	{
		printf("\n Error In Odd.txt File ");
		exit(1);
	}

	while(fscanf(fp1,"%d",&ch)!=EOF)
	{
		if(ch%2==0)
		{
			fprintf(fp2,"%d\n",ch);
		}
		else
		{
			fprintf(fp3,"%d\n",ch);
		}
	}

	fclose(fp1);
	fclose(fp2);
	fclose(fp3);

	getch();
}