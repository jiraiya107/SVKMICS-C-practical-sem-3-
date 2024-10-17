//WAP to generate a different type of execption when check the value is zero or not multiple catch satetment
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int value;
	cout<<"enter value:";
	cin>>value;
	try
	{
		cout<<"enter try block"<<endl;
		if(value<=0)
		{
			throw value;
		}
		else
		{
			throw"value is generate than zero";
		}
	}
	catch(int value)
	{
		cout<<"\n catch an execption the value is"<<value;
	}
	catch(char errormsg)
	{
		cout<<"\n catch an execption"<<errormsg;
	}
	getch();
}