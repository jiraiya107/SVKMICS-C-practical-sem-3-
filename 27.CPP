//write a c++ programe to find highest number from 3 values//
#include<iostream.h>
#include<conio.h>
int main()
{
	int a,b,c;
	clrscr();
	cout<<"enter a:";
	cin>>a;
	cout<<"enter b";
	cin>>b;
	cout<<"enter c";
	cin>>c;
	if(a>b)
	{
		if(a>c)
		{
			cout<<a<<"is gretest";
			}
	}
	else if (b>a)
	{
		if(b>c)
		{
		cout<<b<<"is gretest";
		}
		else
		{
			cout<<b<<"is greatest";
		}
	}
	return 0;
}