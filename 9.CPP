//prime or not prime
#include<iostream.h>
#include<conio.h>
int main()
{
	int i,f=0,n;
	clrscr();
	cout<<"enter value of n:";
	cin>>n;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			f=f+1;
		}
		else
		{
			f=0;
		}
		if(f==0)
		{
			cout<<"this is prime number:"<<n;
		}
		else
		{
			cout<<"this is not a primr number:"<<n;
		}
		return 0;
	}
}