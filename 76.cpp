//WAP to generete the execption when the value is divided by zero
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int value1,value2;
	cout<<"enter value1 & value2";
	cin>>value1>>value2;
	try
	{
		if(value2==0)
		{
			throw"divide by zero";
		}
		else
		{
			cout<<"value"<<"/"<<value2<<"="<<float(value1)/value2;
		}
		catch(char errormsg)
		{
			cout<<"catch the execption"<<errormsg;
		}
	}
	getch();
}