//pelidrone//
#include<iostream.h>
#include<conio.h>
int main()
{
	int n,p,rev=0,rem;
	clrscr();
	cout<<"enter value of n:";
	cin>>n;
	p=n;
	while(n>0)
	{
		rem=n%10;
		n=n/10;
		rev=rev*10+rem;
	}
	cout<<"reverse number id:"<<rev;
	if(p==rev)
	{
		cout<<endl<<"number is polidrone";
	}
	else
	{
	     cout<<endl<<"number is not polidrone";
	}
	return 0;
}

