//display the table
#include<iostream.h>
#include<conio.h>
int main()
{
	int n,i;
	clrscr();
	cout<<"enter the name you want to generatr";
	cin>>n;
	for(i=1;i<=10;i++)
	{
		cout<<n<<"*"<<i<<"="<<n*i<<"\n";
		}

		return 0;
	}