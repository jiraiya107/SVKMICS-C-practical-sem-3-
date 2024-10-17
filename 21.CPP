//function overloding//
#include<iostream.h>
#include<conio.h>
void add()
{
	int a=12;int b=2;int sum;
	sum=a+b;
	cout<<"sum="<<sum;
}
void add(int a,int b)
{
	int sum;
	sum=a+b;
	cout<<"sum="<<sum<<endl;
}
void add(int a,int b,int c)
{
	int sum;
	sum=a+b+c;
	cout<<"sum="<<sum<<endl;
	}

int main()
{
	int a,b,c;
	clrscr();
	cout<<"enter a:";cin>>a;
	cout<<"enter b:";cin>>b;
	cout<<"enter c:";cin>>c;
	add();
	add(a,b);
	add(a,b,c);
	return 0;
}
















