//wrie a c++ programe to find if value is devisable by 3&5 or not//
#include<iostream.h>
#include<conio.h>
int main()
{
	int n;
	clrscr();
	cout<<"enter the value";
	cin>>n;
	if(n%3==0 && n%5==0)
	{
		cout<<n<<"is divisable by 3&5";

	}
	else
	{
		cout<<"is not divesable by 3&5";
	}
	return 0;
}