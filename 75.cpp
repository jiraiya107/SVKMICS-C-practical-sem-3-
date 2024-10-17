// WAP to mechanism of simple exception using try catch statement
#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	int a,b,x;
	cout<<"enter value of a & b:";
	cin>>a;
	cin>>b;
	x=a-b;
	try
	{
		if(x!=0)
		{
			cout<<"result(a/x):"<<a/x;
		}
		else
		{
			throw(x);
		}
	}
	catch(int i);
	{
		cout<<"execption"<<x<<endl;
	}
	return 0;
}