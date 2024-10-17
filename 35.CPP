// WAP to find out sum of given series n1*n2*n3...//
#include<iostream.h>
#include<conio.h>
int main()
{
	int n,sum=0;
	clrscr();
	cout<<"enter value :";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		sum+=i*n;
	}
	cout<<"sum is : "<<sum<<endl;
	return 0;
}
