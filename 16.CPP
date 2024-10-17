//febonicesis series
#include<iostream.h>
#include<conio.h>
int main()
{
	int a=0,b=1,c,n,i;
	clrscr();
	cout<<"enter the value of n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<a;
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
	}
