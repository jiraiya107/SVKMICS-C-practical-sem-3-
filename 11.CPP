//leap year//
#include<iostream>h>
#include<conio.h>
int main()
{
	int year;
	clrscr();
	cout<<"enter a year";
	cin>>year;
	if(year%400==0)
	{
		cout<<year<<"is a leap year";
		}
		else if(year%100==0)
		{
		cout<<year<<"is not a leap  year";
		}
		else if(year%4==0)
		{
		 cout<<year<<"is a leap year:";
		 }
		 else{
		 cout<<year<<"is not a leap year:";
		 }
		 return 0;
}