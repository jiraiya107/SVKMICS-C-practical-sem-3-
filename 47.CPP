// WAP to

#include<iostream.h>
#include<conio.h>
int main()
{
	int hour;
	clrscr();
	cout<<"Enter Time Taken By Worker: ";
	cin>>hour;
	if(hour==2&3)
	{
		cout<<"Highly Efficient";
	}
	else if(hour==3&4)
	{
		cout<<"Improve Efficency";
	}
	else if(hour==4&5)
	{
		cout<<"Training To Improve Efficiency";
	}
	else if(hour>5)
	{
		cout<<"Leave The Company";
	}
	return 0;
}