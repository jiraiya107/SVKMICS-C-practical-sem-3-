#include<iostream.h>
#include<conio.h>
int main()
{
	int i,j;
	clrscr();
	cout<<"enter value:";
	cin>>i;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<i;
		}
		cout<<endl;
	}
	return 0;
}


