// factorial of any number //
#include<iostream.h>
#include<conio.h>
int main()
{
	int i,n,fact=1;
	clrscr();
	cout<<"enter value of any numaber:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<"factorial :"<<fact;
	return 0;
}
