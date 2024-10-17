//WAP to find the number of 500,100,50,10,5,2,1
#include<iostream.h>
#include<conio.h>
int main()
{
	int a,i;
	clrscr();
	cout<<"enter amount";
	cin>>a;
	int d[]={500,200,100,50,20,10,5,2,1};
	int count[8]={0};
	for(i=0;i<8;i++)
	{
		if(a>=d[i])
		{
			count[i]=a/d[i];
			a=a%d[i];
		}
	}
	cout<<"enter no. of notes:";
	for(i=0;i<8;i++)
	{
		cout<<d[i]<<":"<<count[i]<<endl;
	}
	return 0;
}