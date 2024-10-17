//write a c++ programe to find if number is greter than 15 or not//
#include<iostream.h>
#include<conio.h>
int main()
{
	int a;
	clrscr();
	cout<<"enter the value:";
	cin>>a;
	if(a>15)
	{
		cout<<a<<"is graterthan 15";
	}
	if(a==15)
	{
		cout<<"entered value equal 15";
	}
	else
	{
		cout<<a<<"is not graterthan 15";
	}
	return 0;
}